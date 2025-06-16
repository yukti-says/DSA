#include<iostream>
using namespace std;

class A{
    public:
    string title = "this is";

    void print(){
        cout<<"there is a message: "<<title<<endl;

    }

    void get(A &b){ //here you have to give datatype with reference as well which is here A
    b.title = "a computer";}
};

int main()
{
    A a;
    a.print();
    A &b = a;
    b.get(a);
    a.print();
    A *ptr = &a;
    ptr->title = "no it is a laptop";
    a.print();
    b.print();

}
