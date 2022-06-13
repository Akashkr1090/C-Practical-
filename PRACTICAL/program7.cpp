#include <iostream>
using namespace std;
class student
{
    char name[50];
    int rollno;
    int total;

public:
    void readDetails(void);  // member function to get student details
    void gradeCal(void);     // member function to display Grade
    void printDetails(void); // member function to print student details
};
// member function definition outside the class
void student::readDetails(void)
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "\n Enter Roll no: ";
    cin >> rollno;
    cout << "\n Enter total marks out of 500: ";
    cin >> total;
}
void student::gradeCal(void)
{
    float percentage;
    percentage = (float)total / 500.00 * 100.00;
    cout << percentage << "%\n";
    if (percentage >= 75.00)
    {
        cout << "Grade: A \n";
    }
    else
    {
        if ((percentage >= 60.00) && (percentage < 75.00))
        {
            cout << "Grade: B \n";
        }
        else
        {
            if ((percentage >= 40.00) && (percentage < 60.00))
            {
                cout << "Grade: C \n";
            }
            else
            {
                cout << "Grade: D \n";
            }
        }
    }
}
// member function definition outside the class
void student::printDetails(void)
{
    cout << "Student Details: \n";
    cout << "Name: " << name << endl;
    cout << "Roll number " << rollno << endl;
    cout << "Total: " << total << endl;
}
int main()
{
    student std[10]; // array of objects creation
    int n, i;
    cout << "Enter total number of students:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i + 1 << "\n";
        std[i].readDetails();
    }
    for (i = 0; i < n; i++)
    {
        cout << "Details of student " << i + 1 << "\n";
        std[i].printDetails();
        std[i].gradeCal();
    }
    return 0;
}