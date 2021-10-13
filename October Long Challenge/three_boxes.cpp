Problem Link:- https://www.codechef.com/OCT21C/problems/THREEBOX

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
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int sum = a+b+c;
	    if(sum<=d) cout<<1<<endl;
	    else if(((a+b)>d) && ((b+c)>d) && ((a+c)>d)) cout<<3<<endl;
	    else cout<<2<<endl;
	    
	}
	return 0;
}
