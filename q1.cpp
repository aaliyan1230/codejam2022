#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int R[t]={};
    int C[t]={};
    for (int i = 0; i < t; i++)
    {
        cin>>R[i];
        cin>>C[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout<<"Case #"<<i+1<<":\n";
        int r=R[i];
        int c=C[i];
        for (int j = 0; j <= 2*r; j++)
        {
            if(j==0){
                cout<<"..";
                for (int k = 1; k<=2*c-1; k++)
                {
                    if(k%2==0){
                        cout<<"-";
                    }else{
                        cout<<"+";
                    }
                }
                cout<<endl;
                
            }
            else if (j==1)
            {
                cout<<"..";
                for (int k = 1; k<=2*c-1; k++)
                {
                    if(k%2==0){
                        cout<<".";
                    }else{
                        cout<<"|";
                    }
                }
                cout<<endl;
            }
            else if(j%2==0){
                for (int k = 1; k<=2*c+1; k++)
                {
                    if(k%2==0){
                        cout<<"-";
                    }else{
                        cout<<"+";
                    }
                }
                cout<<endl;

            }
            else{
                for (int k = 1; k<=2*c+1; k++)
                {
                    if(k%2==0){
                        cout<<".";
                    }else{
                        cout<<"|";
                    }
                }
                cout<<endl;

            }
            
        }
        
    }
    
//question of ascii art
    return 0;
}