//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    long long maxSubarraySum(int arr[], int n){
        long long maxSum = arr[0]; // Initialize maxSum with the first element of the array
        long long currentSum = arr[0]; // Initialize currentSum with the first element of the array
        
        // Traverse the array starting from the second element
        for(int i = 1; i < n; i++) {
            // Check if adding the current element to the current sum increases the sum or not
            // If it increases, update the current sum
            // If it decreases, start a new subarray from the current element
            currentSum = max((long long)arr[i], currentSum + arr[i]);
            
            // Update the maxSum if the current sum is greater
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum; // Return the maximum subarray sum
    }
};



//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends