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
	    string s;
	    cin>>s;
	    
	    int count = 0;
	    int maxdays = 0;
	    int ans = 0;
	    
	    for(int i=0; i<30; i++)
	    {
	        if(s[i]=='1')
	        {
	            ans += x;
	            count++;
	        }
	        else
	        {
	            maxdays = max(count, maxdays);
	            count=0;
	        }
	    }
	    maxdays = max(count, maxdays);
	    
	    ans += maxdays * y;
	    cout<<ans<<"\n";
	}
	return 0;
}
