#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,odd,even;
    long long max;
    cin>>n;
    if(n%2==1){
        odd=(n/2)+1;
    }
    else{
        odd=(n/2);
    }
    even=n-odd;
    max=(-(odd*odd)+(even*(even+1)));
    cout<<max;
    return 0;
}