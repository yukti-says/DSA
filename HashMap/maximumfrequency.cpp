#include <iostream>
#include <unordered_map>
using namespace std;

int getFrequency(int a[] , int n){

    unordered_map<int, int> m;
    // traverse the array and count frequency
    for (int i = 0; i < n; i ++){
        m[a[i]]++;
    }

    int maxfreq = INT16_MIN;
    int ans = -1;

    for(auto i : m ){
        if(i.second > maxfreq){
            maxfreq = i.second;
            ans = i.first;
        }
    }
    return ans;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 3, 4, 5, 3, 2, 3, 4, 1, 2, 3, 5, 6, 7, 4, 3, 2, 3 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int answer = getFrequency(arr, n);
    cout<<"The maximum frequency element is: " << answer << endl;

    return 0;
}