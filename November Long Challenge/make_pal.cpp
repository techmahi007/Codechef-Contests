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
	    int n,x,c=0;
	    cin>>n;
	    for(int i=0; i<n; i++)
	    {
	        cin>>x;
	        
	        if(x%2==1) c++;
	    }
	    if(c%2==1) c-=1;
	    
	    cout<<c/2<<endl;
	}
	return 0;
}
