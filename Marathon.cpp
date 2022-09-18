#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int x=a[0],c=0;
        for(int i=1;i<4;i++){
            if(x<a[i])
            c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}