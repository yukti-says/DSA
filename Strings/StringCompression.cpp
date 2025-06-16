/*
it is a technique where you reduces the size of a string by replacing repeated characters with the character followed by the
number of its repetition

so we store character  +  count

*/

#include<iostream>
#include<string>
using namespace std;
string compressor(string str){
    int count = 1;
    string compressed = "";
    //loop through the string to get the characters
    for(int i = 1;i<=str.length();i++){
        if(i<str.length() && str[i] == str[i-1]){
            count++;
        }
        else
        {

            //add the character (ith character)
            compressed += str[i-1];
            //add the count number after changing it to string
              compressed += to_string(count);
              //set count to 1 for new string
              count =1;

        }


    }
    //or if there no compression of the given string thus return the string itself
    return ((compressed.length() < str.length()) ? compressed : str);


}

int main()
{

string str;
cout<<"enter a string to compress: ";
cin>>str;

string compress = compressor(str);
cout<<"the compressed string of "<<str<<" is "<<compress;

}
