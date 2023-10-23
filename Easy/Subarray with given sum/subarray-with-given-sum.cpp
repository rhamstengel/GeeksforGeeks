//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> subarraySum(vector<int>& arr, int n, long long s) {
        if (s == 0) {
            return {-1};
        }

        int left = 0;
        int right = 0;
        long long currentSum = 0;

        while (right < n) {
            currentSum += arr[right];

            while (currentSum > s) {
                currentSum -= arr[left];
                left++;
            }

            if (currentSum == s) {
                vector<int> result = {left + 1, right + 1}; // Convert to 1-based indexing
                return result;
            }

            right++;
        }

        return {-1};
    }
};




//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends