// Write a program to check whether a given number is Armstrong number

#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, temp;
    cout << "\n\n Check whether a given number is an Armstrong number or not :\n";
    cout << "\n";
    cout << " Enter a number: ";
    cin >> num;
    for (temp = num; num != 0; num = num / 10) 
	{
        r = num % 10;
        sum = sum + (r * r * r);
    }
    if (sum == temp)
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;
}