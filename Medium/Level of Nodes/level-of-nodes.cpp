//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to find the level of node X.
    int nodeLevel(int V, vector<int> adj[], int X)
    {
        //creating a boolean array visited and initializing all elements as false.
        bool visited[V] = {false};

        //creating a queue to store nodes and their levels.
        queue<pair<int,int>> q;

        //pushing node 0 with level 0 in queue.
        q.push({0,0});

        //marking node 0 as visited.
        visited[0] = true;

        //looping while queue is not empty.
        while(!q.empty())
        {
            //storing current node and its level in variables.
            int node = q.front().first;
            int level = q.front().second;

            //popping front element from queue.
            q.pop();

            //if current node is equal to target node X, we return its level.
            if(node == X)
                return level;

            //else, we traverse all adjacent nodes of current node.
            for(int adjNode : adj[node])
            {
                //if adjacent node is not visited, we mark it as visited,
                //and push it in queue with its level as current node's level + 1.
                if(!visited[adjNode])
                {
                    visited[adjNode] = true;
                    q.push({adjNode,level+1});
                }
            }
        }

        //if target node X is not found, we return -1.
        return -1;
    }
};


//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends