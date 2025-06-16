#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> &arr,int k){
    int n = arr.size();
    int maxi = INT_MIN;  //for minimum INT_MAX
    int sum = 0;
    int  i = 0;
    int j = 0;
    while( j < n){

        sum = sum +arr[j];

        if(j-i+1 < k){
            j++;
        }

        else if(j-i+1 == k){
            maxi = max(maxi , sum);
             sum = sum - arr[i]; //min()
            i++;
            j++;

        }



    }
    return maxi;



}

int main(){

    vector<int> a = {1,1,1,12,3,4,5,1,2,5};
    int ans = sum(a ,3 );
    cout<<"maximum sum of 3  size window is: "<<ans<<endl;
    return 0;
}
