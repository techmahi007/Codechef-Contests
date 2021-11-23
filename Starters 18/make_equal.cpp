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
	    int a[n],maximum, minimum;
	    
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    /*
	    for(int i=1; i<n; i++)
	    {
	        if(a[i]>a[0]) a[0]=a[i];
	    }
	    maximum = a[0];  // maximum element in array
	    for(int i=1; i<n; i++)
	    {
	        if(a[i]<a[0]) a[0]=a[i];
	    }
	    minimum = a[0];  // minimum element in array
	    
	    cout<<maximum - minimum<<endl;
	    */
	    
	    sort(a, a+n);
	    
	    cout<<(a[n-1]-a[0])<<endl;
	}
	return 0;
}
