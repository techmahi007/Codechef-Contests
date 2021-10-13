Problem Link:- https://www.codechef.com/START15C/problems/CARRYGOLD


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;

	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    
	    if(x<=y) cout<<"YES"<<endl;
	    else
	    {
	        if(y*(n+1)<x) cout<<"NO"<<endl;
	        else cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
