#include<bits/stdc++.h>
using namespace std;
int max(int a , int b)
{
	return a > b ? a : b;
}
int t[1000][1000] = {-1};
int knapsack(vector<int> wt,vector<int> val,int W ,int n )
{
	if(n == 0 || W == 0)
		t[n][W] = 0 ;
	if(t[n][W] != -1)
		return t[n][W];
	else if(W >= wt[n-1])
		t[n][W] = max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
	else
		t[n][W] = knapsack(wt,val,W,n-1);
	return t[n][W];
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
		for(int i = 0 ; i < n ;i++)
		{
			cout << wt[i] << " ";
			cout<< val[i] << " ";
		}
		cout << endl;
	int W ;
	cin >> W ;
	cout <<  knapsack(wt,val,W ,n)<<endl;
	for(int i = 0 ; i <= n ;i++)
	{
		for(int j = 0 ; j <= W ; j++)
		{
			cout << " " << t[i][j];
		}
		cout << endl;
	}
}
