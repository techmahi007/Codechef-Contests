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
	    string s;
	    cin>>s;
	    bool flag = false;
	    for(int i=0; i<n-1; i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            flag = true;
	            break;
	        }
	        else flag =false;
	    }
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
