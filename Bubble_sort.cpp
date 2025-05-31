#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the size of the array: " << endl;
    int size;
    cin>> size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>> a[i];
    }

    int n = sizeof(a) / sizeof(a[0]);
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}