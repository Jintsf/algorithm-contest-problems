#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	long long n,m,k;
	cin>>n>>m>>k;
	vector<long long>a(n+1,0),b(m+1,0);
	for(int i=1;i<n+1;++i){
		long long t;
		cin>>t;
		a[i]=a[i-1]+t;
	}
	for(int i=1;i<m+1;++i){
		long long t;
		cin>>t;
		b[i]=b[i-1]+t;
	}
	if(k>=a[n]+b[m]){
		cout<<n+m<<endl;
		return 0;
	}
	a.push_back(a[n]+k);
	b.push_back(b[m]+k);
	int ai=upper_bound(a.begin(),a.end(),k)-a.begin()-1;
	int bi=upper_bound(b.begin(),b.end(),k-a[ai])-b.begin()-1;
	int u=ai+bi;
	while(ai>0){
		--ai;
		bi=upper_bound(b.begin(),b.end(),k-a[ai])-b.begin()-1;
		u=max(u,ai+bi);
	}
	cout<<u<<endl;
	return 0;
}
