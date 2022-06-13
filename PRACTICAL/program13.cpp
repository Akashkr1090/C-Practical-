#include<iostream>
using namespace std;
class parentclass
{
    int a;
    public:
    parentclass(){
        a=10;
    }
    void show_a(){
        cout<<endl<<"Inside the parent class show_a method:"<<endl;
        cout<<endl<<"value of a is:"<<a<<endl;
    }
};
class childclass_1: public parentclass{
    int b;
    public:
    childclass_1(){
        b=100;
    }
    void show_b(){
        cout<<endl<<"Inside the childclass_1 show_b method:"<<endl;
        cout<<endl<<"value of a is:"<<b<<endl;
    }
};
class childclass_2: public childclass_1{
    int c;
    public:
    childclass_2(){
        c=1000;
    }
    void show_c(){
        cout<<endl<<"Inside the childclass_2 show_c method:"<<endl;
        cout<<endl<<"value of a is:"<<c<<endl;
    }
};
int main(){
    childclass_2 obj;
    obj.show_a();
    obj.show_b();
    obj.show_c();
    return 0;
}