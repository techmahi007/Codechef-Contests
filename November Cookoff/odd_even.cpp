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
	    int a,b,sum;
	    cin>>a>>b;
	    sum = a+b;
	    if(sum%2==0) cout<<"Bob"<<endl;
	    else cout<<"Alice"<<endl;
	}
	return 0;
}
