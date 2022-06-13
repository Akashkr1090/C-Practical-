#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    char name[20];
    float net, da, gross, it, basic;

public:
    void accept();
    void cal();
    void display();
};
void employee ::accept()
{
    cout << "Enter the employee ID:" << endl;
    cin >> id;
    cout << "Enter the employee Name:" << endl;
    cin >> name;
    cout << "Enter the basic salary of the " << name << endl;
    cin >> basic;
}
void employee ::cal()
{
    da = 0.52 * basic;
    gross = basic + da;
    // it= income tax
    it = 0.30 * gross;
    net = gross-it;
}
void employee ::display()
{
    // it= income tax
    cout << "\n" << id << "\t" << name << "\t" << basic << "\t" << net << "\t" << gross << "\t" << da << "\t" << it << endl;
}
int main()
{
    int i;
    employee emp[5];
    for (int i = 0; i < 2; i++)
    {
        emp[i].accept();
        emp[i].cal();
    }
    cout << "\nID\tName\tBasic\tNet\tGross\tDA\tIT" << endl;
    cout << "" << endl;
    for (i = 0; i<2; i++)
    {
        emp[i].display();
    }
    return 0;
}