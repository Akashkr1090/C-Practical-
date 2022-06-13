#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;   //Dynamic memory allocation
    cout<<"Number of bytes allocated to ptr = "<< sizeof(ptr)<<endl;
    *ptr = 100;
    cout<<"value at ptr = "<<*ptr<<endl;
    return 0;
}