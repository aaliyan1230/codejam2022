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