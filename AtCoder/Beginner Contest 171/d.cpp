#include<iostream>
#include<vector> 
#include<map>
#include<algorithm> 
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>nums(n);
	map<int,int>rec;
	long long s=0;
	for(int i=0;i<n;++i){
		cin>>nums[i];
		s+=nums[i];
		++rec[nums[i]];
	}
	int q;
	cin>>q;
	for(int i=0;i<q;++i){
		int b,c;
		cin>>b>>c;
		s+=(c-b)*rec[b];
		rec[c]+=rec[b];
		rec[b]=0;
		cout<<s<<endl;
	}
	return 0;
}
