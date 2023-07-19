#include <bits/stdc++.h>
using namespace std;
long long ans=0,t[25],n,x;
int main()
{
	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>x;
		for(int j=0;j<20;j++) t[j]+=(x>>j)&1;
	}

	for(int i=1;i<=n;i++){
        x=0;
		for(int j=0;j<20;j++) if(t[j]) t[j]--,x+=1<<j;
		ans+=x*x;
	}
	cout<<ans<<endl;
	return 0;
}


