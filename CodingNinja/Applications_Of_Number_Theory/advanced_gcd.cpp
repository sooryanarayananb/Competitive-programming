#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    
    if(a<b)
        return gcd(b,a);
    
    if(b == 0)
        return a;
    gcd(b, a%b);
    
}

int main(){
	// Write your code here
    int t;
    cin>>t;

    while(t--){
        string a, b;
        cin>>a>>b;
        
        string big;
        ll small;
        
        if(a.size() > b.size()){
            big = a;
            small = stoll(b);
        }else{
            big = b;
            small = stoll(a);
        }
        
        ll aModb = 0;
        
        if(small == 0){
            cout <<big<<endl;
            continue;
        }
        
    	for(int i=0; i<big.size(); i++){
            
            aModb = ((10*aModb) + (int)(big[i]-'0'))%small;
            
        }
        
        if(aModb == 0){
            cout<<small<<endl;
            continue;
        }
        
        cout<<gcd(small, aModb)<<endl;
        
        
    }
    
	return 0;
}
