#include <bits/stdc++.h>
using namespace std;

void dfs(map<int, vector<int>> &edges){
    int n = edges.size();
    vector<bool> visited(n, false);
    stack<int> s;
    s.push(0);

    while(!s.empty()){
        int node = s.top();
        s.pop();

        if(!visited[node]){
            cout<<"visiting Node : "<<node<<" ";
            visited[node] = true;
            for(auto neighbour: edges[node]){
                if(!visited[neighbour]){
                    s.push(neighbour);
                }
            }
        }
        cout<<"\n";

    }
    
}

void bfs(map<int, vector<int>> &edges){
    int n = edges.size();
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0);
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(!visited[node]){
            cout<<"visiting Node : "<<node<<" ";
            visited[node] = true;
            for(auto &neighbour: edges[node]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                }
            }
        }
        cout<<"\n";
    }
}
