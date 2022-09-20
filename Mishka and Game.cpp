#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m=0,r=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            m++;
        }
        else if(a==b){
            m++;
            r++;
        }
        else{
            r++;
        }
    }
    if(m>r){
        cout<<"Mishka";
    }
    else if(m==r){
        cout<<"Friendship is magic!^^";
    }
    else{
        cout<<"Chris";
    }
    
    return 0;
}