#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;

	while(t--)
	{
	    ll a,b,p,q, alice=0, bob=0;
	    cin>>a>>b>>p>>q;
	    
        if((p%a==0) && (q%b==0)){
            ll x=p/a, y=q/b;
            if((x-y)==1 || (y-x)==1 || (x-y)==0 || (y-x)==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
	}
	return 0;
}
