#include<iostream>
#include<vector> 
#include<algorithm> 
using namespace std;
int main(){
	long long num;
	cin>>num;
	vector<int>s;
	while(num){
		if(num%26){
			s.push_back(num%26);
		}else{
			s.push_back(26);
			num-=26;
		}
		num/=26;
	}
	reverse(s.begin(),s.end());
	string ans;
	for(int &n:s){
		char b='a'+n-1; 
		ans+=b;
	}
	cout<<ans<<endl;
	return 0;
}
