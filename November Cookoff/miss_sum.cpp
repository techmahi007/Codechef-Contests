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
	    int n;
	    cin>>n;
	    
	    if(n==1) cout<<1<<endl;
	    else
	    {
	        for(int i=1; i<=n; i++)
	        {
	            cout<<2*i-1<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
