#include<iostream>
#include<vector> 
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	vector<int>left(n,0);
	for(int i=0;i<n-1;++i){
		left[i+1]=left[i]^nums[i];
	}
	vector<int>right(n,0);
	for(int i=n-1;i>0;--i){
		right[i-1]=right[i]^nums[i];
	}
	for(int i=0;i<n-1;++i){
		cout<<(left[i]^right[i])<<' ';
	}
	cout<<(left[n-1]^right[n-1])<<endl;
	return 0;
}
