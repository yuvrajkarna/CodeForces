#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c=0;;
    cin>>a>>b;
    while(1){
        if(a>b) break;
        a*=3;
        b*=2;
        c++;
    }
    cout<<c;
    return 0;
}