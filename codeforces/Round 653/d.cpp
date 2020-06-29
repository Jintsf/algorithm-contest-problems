#include<iostream>
#include<map> 
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i) {
		int n,k;
		cin>>n>>k;
		int a;
		map<int,long long>rec;
		for(int j=0;j<n;++j){
			cin>>a;
			++rec[a%k];
		}
		long long x=0;
		for(auto it=rec.begin();it!=rec.end();++it){
			if(it->first==0)continue;
			long long temp=k*it->second-it->first+1;
			x=max(x,temp);
		}
		cout<<x<<endl;
	}
	return 0;
}
