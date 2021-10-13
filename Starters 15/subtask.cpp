Problem Link:- https://www.codechef.com/START15C/problems/SUBTASK


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
	    int n,m,k,cnt=0,freq=0;
	    cin>>n>>m>>k;
	    int a[n];
	    for(int i=1; i<=n; i++)
	    {
	        cin>>a[i];
	        if(a[i]==1) freq++;
	    }
	    for(int i=1; i<=m; i++)
	    {
	        if(a[i]==1) cnt++;
	        else break;
	    }
	    if(cnt==m && freq!=n) cout<<k<<endl;
	    else if(freq==n) cout<<100<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}
