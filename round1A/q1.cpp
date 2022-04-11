// // #include<iostream>
// // #include<string>
// // #include<algorithm>
// // #include <bits/stdc++.h>
// // using namespace std;

// // int T;
// // int main(){
// //     cin>>T;
// //     map<char, int> alphabetOrder;
    
// //     while (T--)
// //     {
// //         string S;
// //         cin>>S;
// //         string sampleString;
// //         //lexicographical_compare()

          
// //     }
    
    
// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main(void)
// {
//     int n;
//     int sum = 0;


//     std::cin >> n;
//     std::vector<int> nums(n);
//     for (int i=0; i<n; i++) {
//         int num;
//         std::cin >> num;
//         nums[i] = num;
//         sum    += num;
//     }

//     if (sum & 1) {
//         std::cout << "false" << std::endl;
//         return 0;
//     }
    
//     sum >>= 1;

    
//     sort(nums.begin(), nums.end());

   
//     std::vector<bool> possible(sum);
//     possible[0] = true;
//     for (int i=n-1; i>=0; i--) {
//         int val = nums[i];
        
//         if (sum - val >= 0 && possible[sum - val]) {
//             std::cout << "true" << std::endl;
//             return 0;
//         }
//         for (int j=sum-val-1; j >= 0; j--) {
//             if (possible[j])
//                 possible[j + val] = true;
//         }
//     }

//     std::cout << "false" << std::endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void f(int index,string s,string out,priority_queue<string,vector<string>,greater<string>> &ans){
    if(index==s.size()){
        if(ans.empty()) ans.push(out);
        else{
           if(ans.top()>out){
                ans.pop();
                ans.push(out);
           }
        }
        return;
    }
    // pick
    out+=s[index];
    // pick
    f(index+1,s,out+s[index],ans);
    // not pick
    f(index+1,s,out,ans); 
}


int main(){
   
   int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        priority_queue<string,vector<string>,greater<string>> ans;
        f(0,s,"",ans);
        cout<<"Case #"<<i<<": "<<ans.top()<<endl;
    }
    return 0;
}