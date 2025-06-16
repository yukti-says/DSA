#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string str){
    int n = str.length();
    int start = 0;
    int end = n-1;
    while(start <= end){
            /*
            <- I was earlier solving this problem with this logic but when we dry run this it is like the loop will check the
            once only from start one to last one it do not compare with the whole string since there is not mention of moving start
            and end pointer so for better->
        if(str[start] == str[end]){
            return true;
        }

        */
        if(str[start] != str[end]){
            return false;
        }
        start ++;
        end--;}

            return true;
}


int main()
{

    string str;
    cout<<"enter your string here: ";
    cin>>str;


    if(ispalindrome(str)){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome.";
    }
}
