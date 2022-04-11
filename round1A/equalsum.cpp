#include <bits/stdc++.h>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;

int T, N;

int main() {
    scanf("%d", &T);
    while (T-- && T!=-1) {
        set<int , greater<int>> sett;
        scanf("%d", &N);
        int array[2*N];
        for (int i = 1; i <= N; i++)
        {
            sett.insert(i);
            array[i-1]=i;
            cout<<i<<" ";
        }
        fflush(stdout);
        for (int i = 1; i <= N; i++)
        {
            int temp;
            cin>>temp;
            sett.insert(temp);
            array[N+i-1]=temp;
        }
        int sum2;
        for (int i = 0; i < 2*N; i++)
        {
            sum2+=array[i];
        }
        
        for (int i = 0; i < N; i++)
        {   int tempp=array[i];
            int sum1;
            set<int , greater<int>> answerset;
            answerset.insert(tempp);
            for (int j =N; j < 2*N; j++)
            {
                sum1=tempp+array[j];
                answerset.insert(array[j]);
                if(sum1==(sum2-sum1)){
                    set<int, greater<int> >::iterator itr;
                    for (itr = answerset.begin(); itr != answerset.end(); itr++) {
                        cout<<*itr << " ";
                    }
                    fflush(stdout);
                }

            }
        }
        }
    
    return 0;
    }

