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
	    int x,y,a,b,k;
	    cin>>x>>y>>a>>b>>k;
	    
	    int petrol = x+(a*k);
	    int diesel = y+(b*k);
	    
	    if(petrol<diesel) cout<<"PETROL"<<endl;
	    else if(diesel<petrol) cout<<"DIESEL"<<endl;
	    else cout<<"SAME PRICE"<<endl;
	}
	return 0;
}
