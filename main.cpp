#include <iostream>

using namespace std;

void selectionSort(int v[], int n)
{
    int i,j,aux;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout << v[i] << '\t';
    }
}

int main()
{
    int v[] = {9 , 10 , -1, 3, 6, 2, 1, -3, 1, 0, -2, 15, 8, -7, 0};
    selectionSort(v, 14);
    return 0;
}
