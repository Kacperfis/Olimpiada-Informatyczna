// made by surgitti 2k20 O(n^n)
#include <bits/stdc++.h>
using namespace std;

const int N = 15;

int n, m;
vector<int> adj[N];

bool vis[N];
vector<int> path;

bool ham(int u, int s, int cnt = 1){
    vis[u] = true;
    path.push_back(u);
    if(cnt == n){
        if(find(adj[u].begin(), adj[u].end(), s) == adj[u].end())    return false;
        cout << "found hamiltonian cycle: ";
        for(int v : path)    cout << v << " - ";
        cout << s << '\n';
        return true;
    }
    
    for(int v : adj[u])
        if(!vis[v] && ham(v, s, cnt+1))    return true;

    path.pop_back();
    vis[u] = false;    
    return false;
}

int main(){    // be ware of n = 1, remember to clear vis
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cin >> start;
    if(!ham(start, start))    cout << "cant find hamiltonian cycle\n";
}
