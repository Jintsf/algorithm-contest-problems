#include<iostream>
#include<string> 
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i) {
		int c;
		cin>>c;
		string s;
		cin>>s;
		int u=0,v=0;
		for(int j=0;j<s.size();++j){
			if(s[j]=='('){
				++u;
			}
			else{
				--u;
				v=min(v,u);
			}
		}
		cout<<-v<<endl;
	}
	return 0;
}
