//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        // Phase 1: Finding a candidate
        int count = 0;
        int candidate = 0;

        for(int i = 0; i < size; i++) {
            if(count == 0) {
                candidate = a[i];
            }
            if(a[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Phase 2: Verifying the candidate
        count = 0;
        for(int i = 0; i < size; i++) {
            if(a[i] == candidate) {
                count++;
            }
        }

        if(count > size / 2) {
            return candidate;
        } else {
            return -1;
        }
    }
};



//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends