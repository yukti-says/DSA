#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    time_t now = time(0); 
    char* dt = ctime(&now);

    cout << "The local date and time is: " << dt << endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout<< "The date and time in GMT is: " << dt << endl;
}