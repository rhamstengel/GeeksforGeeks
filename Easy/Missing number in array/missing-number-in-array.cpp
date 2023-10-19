//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
public:
    int missingNumber(vector<int>& array, int n) {
        int totalSum = (n * (n + 1)) / 2; // Calculate the sum of numbers from 1 to n
        int arraySum = 0; // Variable to store the sum of elements in the array
        
        for (int i = 0; i < n - 1; i++) {
            arraySum += array[i]; // Calculate the sum of elements in the array
        }
        
        int missingNumber = totalSum - arraySum; // Calculate the missing number
        
        return missingNumber;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends