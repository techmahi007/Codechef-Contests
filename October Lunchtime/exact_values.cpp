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
	    
	    ll temp = pow(2,n);
	    ll count = 1;
	    cout<<"1 ";
	    for(int i=1; i<n; i++)
	    {
	        cout<<i<<" ";
	        count += i;
	    }
	    cout<<(temp-count)<<endl;
	}
	return 0;
}
