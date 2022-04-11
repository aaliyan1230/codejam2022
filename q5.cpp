// // // #include<iostream>
// // // #include<string>
// // // #include<algorithm>
// // // #include<vector>
// // // #include<unordered_map>
// // // using namespace std;

// // // void addEdge(vector<int> adj[], int u, int v)
// // // {
// // //     adj[u].push_back(v);
// // //     adj[v].push_back(u);
// // // }
 
// // // // A utility function to print the adjacency list
// // // // representation of graph
// // // void printGraph(vector<int> adj[], int V)
// // // {
// // //     for (int v = 0; v < V; ++v) {
// // //         cout << "\n Adjacency list of vertex " << v
// // //              << "\n head ";
// // //         for (auto x : adj[v])
// // //             cout << "-> " << x;
// // //         printf("\n");
// // //     }
// // // }

// // // int main(){
// // //     int t;
// // //     cin>>t;
// // //     for (int i = 0; i <t; i++)
// // //     {
// // //         int V;
// // //         cin>>V;
// // //         vector<int> graph[V+1];
// // //         for (int j = 0; j < V; j++)
// // //         {
// // //             addEdge(graph, 1, 0);
// // //             addEdge()
// // //         }
        
// // //     }
    

// // //     return 0;
// // // }
// // #include<bits/stdc++.h>

// // #include <iostream>

// // #include <vector>

// // using namespace std;

// // int main()

// // {

// // int t;

// // cin>>t;

// // int x=1;

// // while(t--)

// // {


// // int n;

// // cin>>n;

// // int gh = 2*n;

// // int topr=0;

// // int bottr=0;

// // int leftc=0;

// // int rightc=0;

// // int ans;

// // int bn=0;

// // int df=0;

// // vector<vector<char>> m(gh, vector<char>(gh));

// // for(int i=0;i<gh;i++){

// // for(int j=0;j<gh;j++)

// // {

// // cin>>m[i][j];

// // }

// // }

// // for(int i=0;i<n;i++)

// // for(int j=0;j<gh;j++)

// // {

// // if(m[i][j]=='I')

// // topr++;

// // }

// // for(int i=gh-1;i>=n;i--)

// // for(int j=0;j<gh;j++)

// // {

// // if(m[i][j]=='I')

// // bottr++;

// // }


// // for(int c=0;c<n;c++)

// // for(int g=0;g<gh;g++)

// // {

// // if(m[g][c]=='I')

// // leftc++;

// // }

// // for(int c=gh-1;c>=n;c--)

// // for(int g=0;g<gh;g++)

// // {

// // if(m[g][c]=='I')

// // rightc++;

// // }

// // if(bottr != topr)

// // bn = abs(bottr-topr);

// // if(leftc != rightc)

// //  df = abs(leftc-rightc);

// // if(bn && df) 

// // ans= min(bn,df);

// // else if(bn && !df)

// // ans = bn;

// // else if(df && !bn)

// // ans = df;

// // else if(!bn && !df)

// // ans=0;

// // cout<<"#"<<x++<<":"<<" "<<ans<<endl;


// // }

// // return 0;
// // }

// #include<bits/stdc++.h>

// #include <iostream>

// #include <vector>

// using namespace std;

// int main()

// {


//     return 0;
// }
#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){

  int t;
  cin >> t;
  int x = 1;
  while (t--){

    int n;
    cin >> n;
    int gh = 2 * n;
    int topr = 0;
    int bottr = 0;
    int leftc = 0;
    int rightc = 0;
    int ans;
    int bn = 0;
    int df = 0;
    vector < vector < char >> m(gh, vector < char > (gh));

    for (int i = 0; i < gh; i++) {
for (int j = 0; j < gh; j++){
cin >> m[i][j];
}
}

    for (int i = 0; i < n; i++){
for (int j = 0; j < gh; j++){
if (m[i][j] == 'I')
topr++;
leftc++;
}
}

    for (int i = gh - 1; i >= n; i--){
for (int j = 0; j < gh; j++){
if (m[i][j] == 'I')
bottr++;
rightc++;
}
}

    if (bottr != topr)
      bn = abs(bottr - topr);
    if (leftc != rightc)
      df = abs(leftc - rightc);
    if (bn && df)
      ans = min(bn, df);
    else if (bn && !df)
      ans = bn;
    else if (df && !bn)
ans = df;
else if (!bn && !df)
ans = 0;
cout << "#" << x++ << ":" << " " << ans << endl;

  }

}