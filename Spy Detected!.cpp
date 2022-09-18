#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a[n]=a[0],a[n+1]=a[1];
        for(int i=0;i<n+2;i++){
            if(a[i]!=a[i+1] && a[i]!=a[i+2]){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}