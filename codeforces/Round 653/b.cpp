#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i) {
		int n;
		cin>>n;
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		int fac2=0,fac3=0;
		while(n%2==0){
			n/=2;
			++fac2;
		}
		while(n%3==0){
			n/=3;
			++fac3;
		}
		if(n!=1||fac2>fac3){
			cout<<-1<<endl;
			continue;
		}
		cout<<2*fac3-fac2<<endl;
	}
	return 0;
}
