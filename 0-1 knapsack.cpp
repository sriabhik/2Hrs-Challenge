#include<bits/stdc++.h>
using namespace std;
int W,n;
int k_s(vector<int> val,vector<int>wt ,int W ,vector<vector<int> > t ,int n )
{
	if(n == 0 || W <= 0)
		t[n][W] = 0;
	else if(t[n][W] != -1)
		return t[n][W];
	else if(wt[n-1] <= W)
		t[n][W] =  max(val[n-1]+k_s(val,wt,W-wt[n-1],t,n-1),k_s(val,wt,W,t,n-1));
	else
		 t[n][W] = k_s(val,wt,W,t,n-1);
	return t[n][W];
}
int main()
{
	while("a")
	{
		vector<int> val;
		vector<int> wt;
	
		cin >> n ;
		for(int i = 0 ; i < n ; i++)
		{
			int v ,w;
			cin >> v >> w;
			val.push_back(v);
			wt.push_back(w);
		}
		cin >> W ;
		vector<vector<int> > t(n+1,vector<int>(W+1,-1));
		cout << "\n Maximum weight is ::  " << k_s(val,wt,W,t,n);
		cout << endl;
	}
	
	return 0;
}
