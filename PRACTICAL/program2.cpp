// c++ program for Fibonacci Sequence Up to a Certain Number

#include <iostream>
using namespace std;
int main()
{
    int t1=0, t2=1,nextterm=0, n;

    cout <<"Enter a positive number :";
    cin>> n;

    // displaying the first two terms which is always 0 and 1
    cout <<"Fibonacci series :"<<t1<< ", "<<t2<< ", ";
    nextterm = t1+t2;
    while(nextterm <=n)
    {
        cout<<nextterm<< ", ";
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    return 0;
}
