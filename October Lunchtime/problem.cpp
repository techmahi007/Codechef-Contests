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
	    int x;
	    cin>>x;
	    
	    if(x>=1 && x<100) cout<<"Easy"<<endl;
	    else if(x>=100 && x<200) cout<<"Medium"<<endl;
	    else if(x>=200 && x<=300) cout<<"Hard"<<endl;
	}
	return 0;
}
