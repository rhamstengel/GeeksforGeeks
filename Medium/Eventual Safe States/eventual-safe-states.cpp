//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isSafe(int node, vector<int>& color, vector<int> adj[]) {
        if (color[node] != 0) {
            return color[node] == 2;
        }
        
        color[node] = 1;
        for (int adjNode : adj[node]) {
            if (!isSafe(adjNode, color, adj)) {
                return false;
            }
        }
        
        color[node] = 2;
        return true;
    }
    
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> safeNodes;
        vector<int> color(V, 0); // Keep track of node colors: 0 - unvisited, 1 - visiting, 2 - visited
        
        for (int i = 0; i < V; i++) {
            if (isSafe(i, color, adj)) {
                safeNodes.push_back(i);
            }
        }
        
        return safeNodes;
    }
};





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends