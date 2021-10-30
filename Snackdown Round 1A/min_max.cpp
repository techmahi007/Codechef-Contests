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
	    ll x,k;
	    cin>>x>>k;
	    ll term1 = x;
	    ll term2 = 2*x;
	    ll minimum = (term1*term2)/__gcd(term1,term2);
	    
	    ll term3 = (x*k)-1;
	    ll term4 = x*k;
	    ll maximum = (term3*term4)/__gcd(term3,term4);
	    
	    cout<<minimum<<" "<<maximum<<endl;
	}
	return 0;
}
