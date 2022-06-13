// Write a program to sort an array using selection sort

#include<iostream>
using namespace std;
int main()
{
    int n, arr[50], i, j, temp, loc, min;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=0; i<(n-1); i++)
    {
        loc=0;
        min = arr[i];
        for(j=(i+1); j<n; j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                // chk++;
                loc = j;
            }
        }
        if(loc!=0)
        {
            temp = arr[i];
            arr[i] = min;
            arr[loc] = temp;
        }
    }
    cout<<"\nSorted Array is:\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}