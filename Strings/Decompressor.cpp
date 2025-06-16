//stoi() : converts string to integer

#include<iostream>
#include<string>
using namespace std;

string decompressor (string compressed){
    //for result
    string result = "";
    int i = 0; //will track each the character
    while( i < compressed.length()){
        //take each character
        char ch = compressed[i];
        i++;

        //for digit
        string countstr = " ";
        while(i < compressed.length() && isdigit(compressed[i]))

           {
               countstr += compressed[i];
               i++;
           }

           int count = stoi(countstr);
           result += string(count , ch); //repeats the character till count number
    }
    return result;


}

int main()
{

    string compress_str ;
    cout<<"enter a compressed string: ";
    cin>>compress_str;

    string stringg = decompressor(compress_str);
    cout<<"the decompressor of the "<<compress_str<< " is "<<stringg;
}
