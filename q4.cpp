// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// void addEdge(vector<int> adj[], int u, int v)
// {
//     adj[u].push_back(v);
//     //adj[v].push_back(u);
// }
 
// // A utility function to print the adjacency list
// // representation of graph
// void printGraph(vector<int> adj[], int V)
// {
//     for (int v = 0; v < V; ++v) {
//         cout << "\n Adjacency list of vertex " << v
//              << "\n head ";
//         for (auto x : adj[v])
//             cout << "-> " << x;
//         printf("\n");
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0; i <t; i++)
//     {
//         int V;
//         cin>>V;
//         vector<int> graph[V+1];
//         for (int j = 0; j < V; j++)
//         {
//             addEdge(graph, 1, 0);
//             addEdge()
//         }
        
        
//     }
    

//     return 0;
// }

#include<bits/stdc++.h>
#define xxxxxxxxxxxxxxx first
#define xxxxxxxxxxxxxxxx second
#define xxxxxxxxxxxxxxxxx push_back
using namespace std;

long long A[100009], B[100009], C[100009], D[100009];
vector<int> E[100009];
queue<int> F;

void solve()
{
    long long G, H, I, J, K = 0;
    cin >> G;
    for (int L = 0; L <= G; L++)
    {
        A[L] = B[L] = C[L] = D[L] = 0;
        E[L].clear();
    }
    for (int M = 1; M <= G; M++) cin >> A[M];
    for (int N = 1; N <= G; N++)
    {
        cin >> H;
        B[N] = H;
        E[H].xxxxxxxxxxxxxxxxx(N);
        D[H]++;
    }
    for (int O = 0; O <= G; O++) if (D[O] == 0) F.push(O);
    while (!F.empty())
    {
        H = F.front();
        F.pop();
        I = 1 << 30;
        for (int P = 0; P < E[H].size(); P++)
        {
            if (C[E[H][P]] < I)
            {
                I = C[E[H][P]];
                J = P;
            }
        }
        if (I == 1 << 30) I = 0;
        for (int Q = 0; Q < E[H].size(); Q++) if (Q != J) K += C[E[H][Q]];
        C[H] = max(A[H], I);
        D[B[H]]--;
        if (D[B[H]] == 0) F.push(B[H]);
    }
    cout << K + C[0] << "\n";
    return;
}

int main()
{
    int R;
    cin >> R;
    for (int S = 1; S <= R; S++)
    {
        cout << "Case #" << S << ": ";
        solve();
    }
    return 0;
}