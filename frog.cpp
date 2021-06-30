#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > t(5,vector<int>(2,-1));
int solve(vector<int> arr,int n,int k)
{
	if(n <= 0)
		t[n][k] = 0;
	int res = min(abs(arr[n]-arr[n-1])+solve(arr,n-1,1),abs(arr[n]-arr[n-2])+solve(arr,n-2,2));
	if(t[n][k] >= res)
		t[n][k] = res;
	return t[n][k];
}
int main(){
	int t;cin>>t;
	while(t--)
	{
		int n ;
		cin >> n;
		vector<int> arr;
		int val;
		for(int i = 0;i< n ;i++){
			cin >> val;
			arr.push_back(val);
		}
		cout<<"\nMin Cost:: " << solve(arr,n-1,1)<<endl;
	}
	return 0;
}
