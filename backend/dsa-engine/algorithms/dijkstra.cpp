#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<int, vector<pair<int, int>>> &adj, int source, int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, source});            //first - distance, second - node
    
    vector<int> distance(n, INT_MAX);
    distance[source] = 0;
    while(!pq.empty()){
        int node = pq.top().second;
        int curr_distance = pq.top().first;
        pq.pop();

        if(curr_distance > distance[node]) continue;

        for(auto &neighbour: adj[node]){
            if(neighbour.second + curr_distance < distance[neighbour.first]){
                distance[neighbour.first] = neighbour.second + curr_distance;
                pq.push({distance[neighbour.first], neighbour.first});
            }
        }
    }
    return distance;
}

vector<int> dijkstra(int n, vector<vector<int>> &edges, int source){
    vector<int, vector<pair<int, int>>> graph(n);
    for(auto &edge: edges){
        graph[edge[0]].push_back({edge[1], edge[2]});
        graph[edge[1]].push_back({edge[0], edge[2]});
    }
    return dijkstra(graph, source, n);
}

//finding the minimum total travel time from a source to all other nodes in the graph
// (so, that a tourist gets to travel the whole city in min time)
// for this, we would use prims algo
//return type : pair<int, vector<int>> -> first - total distance, second - nodes to follow in order for that shortest distance
pair<int, vector<int>> prims(map<int, vector<pair<int, int>>> &adj, int n){
    int total_distance = 0;
    vector<int> node_order;
    vector<bool> in_mst(n, false);

    int start_node = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, 0});
    node_order.push_back(0);

    while(!pq.empty()){
        int node = pq.top().second;
        int weight = pq.top().first;
        pq.pop();

        if(in_mst[node]) continue;
        in_mst[node] = true;
        total_distance += weight;
        node_order.push_back(node);


        for(auto &nbr: adj[node]){
            if(!in_mst[nbr.first]){
                pq.push({nbr.second, nbr.first});
            }
        }

    }

    return {total_distance, node_order};
}

// 