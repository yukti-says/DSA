#include<iostream>
#include<string>
using namespace std;
int main()
{

    string str = "yukti";

    //LENGHT OF THE STRING
    //cout<<"length  of the string is: " <<str.lenght()<<endl;

    //SINSTRINGs -> with given parameter all the strings is given
    cout<<"substring is:  "<<str.substr(1 , 3)<<endl;

    //FIND A CHARACTER OR SUBSTRING ->which will return a position and
    cout<<"searching for u: "<<str.find('u')<<endl;
    //cout<<"searching for z: "<<str.npos('z')<<endl;
}
