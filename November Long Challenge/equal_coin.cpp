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
	    int x,y;
	    cin>>x>>y;
	    
	    if(x==0 && y%2==0)
	    {
	        cout<<"YES"<<endl;
	        continue;
	    }
	    else if(x==0 && y%2!=0)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    if((x+2*y)%2==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
