#include<iostream>
#include<vector> 
#include<algorithm> 
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int t,a,b;
	vector<int>rab;
	vector<int>ra;
	vector<int>rb;
	for(int j=0;j<n;++j){
		cin>>t>>a>>b;
		if(a&&b){
			rab.push_back(t);
		}else if(a){
			ra.push_back(t);
		}else if(b){
			rb.push_back(t);
		}
	}
	if(rab.size()+min(ra.size(),rb.size())<k){
		cout<<-1<<endl;
		return 0;
	}
	sort(rab.begin(),rab.end());
	sort(ra.begin(),ra.end());
	sort(rb.begin(),rb.end());
	int ans=0,u=0,v=0;
	while(u+v<k){
		if(u<rab.size()&&v<ra.size()&&v<rb.size()){
			if(rab[u]<ra[v]+rb[v]){
				ans+=rab[u];
				++u;
			}else{
				ans+=ra[v]+rb[v];
				++v;
			}
		}
		else if(v<ra.size()&&v<rb.size()){
			ans+=ra[v]+rb[v];
			++v;
		}
		else{
		    ans+=rab[u];
			++u;
		}
	}
	cout<<ans<<endl;
	return 0;
}
