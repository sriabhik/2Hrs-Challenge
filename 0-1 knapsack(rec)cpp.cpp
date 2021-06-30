#include<bits/stdc++.h>
using namespace std;
int knapsack(vector<int> wt,vector<int> val,int W,int n )
{
	if(n == 0 || W == 0)
		return 0;
	else if(W >= wt[n-1])
		return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
	else
		return knapsack(wt,val,W,n-1);
}
int main()
{
	vector<int> wt;
	vector<int> val;
	int n ;
	cin >> n;
	for(int i = 0 ; i < n ;i++)
	{
		int w,v;
		cin >> w >> v;
		wt.push_back(w);
		val.push_back(v);
	}
	int W;
	cin >> W;
	cout << knapsack(wt,val,W,n);
}
