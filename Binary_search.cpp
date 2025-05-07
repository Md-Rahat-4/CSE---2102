#include<iostream> 
#include<string>
#include<vector>
using namespace std;
int main(){
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    cout<<"Enter which element you want to search in a sorted array:" << endl;
    int element, LB = 0, position = -1;
    int UB = sizeof(a);
    cin>> element;
    for(int i=0;i<sizeof(a);i++)
    {
        int Mid = (LB + UB)/2;
        if(LB > UB)
        {
            position = 0; 
            break;
        }
        if(a[Mid] == element)
        {
            position = Mid;
            break;
        }
        else if(a[Mid] > element)
        {
            UB = Mid - 1;
        }
        else if(a[Mid < element])
        {
            LB = Mid + 1; 
        }
        
    }
    if(position != 0)
    {
        cout << "The ITEM is Found in the Array" << endl;
        cout << "array position: " << position << endl; 
    }
    else {
        cout << "The Item is not Found in the Array";
    }
}