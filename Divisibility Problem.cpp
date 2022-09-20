#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%b!=0){
            int m=a/b;
            int x=(m+1)*b;
            int ans=x-a;
            cout<<ans<<"\n";

        }
        else{
            cout<<"0"<<"\n";
        }
        
    }
    
    return 0;
}