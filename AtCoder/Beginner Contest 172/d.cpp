#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long s=-(n/2)*(n/2+1)/2;
	for(int i=1;2*i<n+1;++i){
		long long p=n/i;
		long long c=p*(p+1)/2;
		s+=i*c;
	}
	s+=n*(n+1)/2;
	cout<<s<<endl;
	return 0;
}
