#include<iostream>
using namespace std;
class RectangularTest
{
    public:
    int length,breadth;
    void initialize(int len, int bre){
        length = len;
        breadth = bre;
    }
    int getArea(){
        return 2*length*breadth;
    }
    void display(){
        int area = getArea();
        cout<<"\n*** Rectangle Information ***\n";
        cout<<"Length = "<<length;
        cout<<"\nBreadth = "<<breadth;
        cout<<"\nArea = "<<area;
    }
};
int main()
{
    RectangularTest rect, *class_ptr;
    class_ptr = &rect;
    // Accessing member function using class pointer
    cout<<"\n Using member function access";
    class_ptr->initialize(10,5);
    class_ptr->display();
    // Accessing data member using class pointer
    cout<<"\nUsing data members access";
    class_ptr->length =2;
    class_ptr->breadth =3;
    class_ptr->initialize(class_ptr->length,class_ptr->breadth);
    class_ptr->display();
    return 0;
}