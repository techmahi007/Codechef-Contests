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
	    int n,x,p,cor,incor,tot;
	    cin>>n>>x>>p;
	    
	    cor = x*3;
	    incor = (n-x)*(1);
	    tot = cor-incor;
	    
	    if(tot>=p) cout<<"PASS"<<endl;
	    else cout<<"FAIL"<<endl;
	}
	return 0;
}
