#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;++i) {
		int x,y,n;
		cin>>x>>y>>n;
		if(x==1){
			cout<<n<<endl;
		}else{
			y=y%x;
			int s=(n-y)/x*x+y;
			while(s>n){
				s-=n;
			}
			cout<<s<<endl;
		}
	}
	return 0;
}
