#include <list>
#include <iostream>
#include <vector>
using namespace std;

// Function to find first negative number in every window of size k
vector<int> firstNegativeInWindow(vector<int> &arr, int k) {
    int n = arr.size();
    list<int> l; // to track negative numbers
    vector<int> v; // to store results
    int i = 0, j = 0;

    while (j < n) {
        // If current number is negative, add to list
        if (arr[j] < 0) {
            l.push_back(arr[j]);
        }

        // If window size < k, just move j
        if (j - i + 1 < k) {
            j++;
        }

        // If window size == k, process
        else if (j - i + 1 == k) {
            if (l.empty()) {
                v.push_back(0); // No negative in current window
            } else {
                v.push_back(l.front()); // First negative in window
                if (arr[i] == l.front()) {
                    l.pop_front(); // Remove from list if going out of window
                }
            }
            i++; j++; // Slide the window
        }
    }
    return v;
}

int main() {
    vector<int> a = {1, -1, -11, 12, -3, 4, 5, -13, 2, 5};
    int k = 3;

    vector<int> result = firstNegativeInWindow(a, k);
    cout << "First negative in every " << k << "-size window: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

