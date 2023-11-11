//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    
class Solution{
public:
    vector<int> leaders(int a[], int n){
        vector<int> leaders;
        int maxFromRight = a[n - 1];

        // Rightmost element is always a leader
        leaders.push_back(maxFromRight);

        // Traverse the array from right to left
        for(int i = n - 2; i >= 0; i--){
            if(a[i] >= maxFromRight){
                leaders.push_back(a[i]);
                maxFromRight = a[i]; // Update the maximum
            }
        }

        // Reverse the vector to get leaders in correct order
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
};




//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends