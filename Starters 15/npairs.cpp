Problem Link:- https://www.codechef.com/START15C/problems/NPAIRS


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
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    map<int,int> mp1,mp2;
	    
	    for(int i=0; i<s.size(); i++)
	    {
	        int temp = s[i]-'0';
	        mp1[temp-i]++;
	        mp2[temp+i]++;
	    }
	    ll ans=0;
	    
	    for(auto it:mp1)
	    {
	        ll x = it.second;
	        ans = ans + (ll)x*(x-1)/2;
	    }
	    for(auto it:mp2)
	    {
	        ll x = it.second;
	        ans = ans + (ll)x*(x-1)/2;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
