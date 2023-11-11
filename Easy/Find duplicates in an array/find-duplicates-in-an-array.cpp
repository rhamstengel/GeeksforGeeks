//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<int> duplicates(long long int a[], int n) {
        vector<int> result;

        // Incrementing the value at indices
        for (int i = 0; i < n; i++) {
            a[a[i] % n] = a[a[i] % n] + n;
        }

        // Finding duplicates
        for (int i = 0; i < n; i++) {
            if (a[i] >= 2 * n) {
                result.push_back(i);
            }
        }

        // If no duplicates found
        if (result.empty()) {
            result.push_back(-1);
        }

        return result;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends