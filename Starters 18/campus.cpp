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
	    float n,k;
	    cin>>n>>k;
	    float x = n/k;
	    //cout<<ceil(x)<<endl;
	    if(n<=k) cout<<1<<endl;
	    else cout<<ceil(x)<<endl;
	}
	return 0;
}
