#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int g=a>b?(a>c?a:c):b>c?b:c;
    int max=g>d?g:d;
    if(max==a){
        cout<<max-b<<" "<<max-c<<" "<<max-d;
    }
    else if(max==b){
        cout<<max-a<<" "<<max-c<<" "<<max-d;
    }
    else if(max==c){
        cout<<max-b<<" "<<max-a<<" "<<max-d;
    }
    else{
         cout<<max-b<<" "<<max-c<<" "<<max-a;
    }

    return 0;
}