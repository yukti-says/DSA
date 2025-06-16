#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reversestring(string name , int n){

    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(name[start] , name[end]);
        start++;
        end--;
    }
    cout<<name;

}
int main()
{
      string name = "yukti sahu";
    /*

    //WITH PREDEFINED FUNCTION

    cout<<"before reverse name : "<<name<<endl;
    reverse(name.begin() , name.end());
    cout<<"after reverse name: "<<name;

    */



    //with logic ->two pointer approach
    int n = name.length();
    cout<<"length of the string is: "<<n<<endl;

    reversestring(name , n);
}
