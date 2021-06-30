#include<bits/stdc++.h>
using namespace std;
int n;
int k_s(vector<int> val,int sum,vector<vector<int> > t ,int n )
{
	if (t[n][sum] != -1 )
		return t[n][sum];
	else if(sum == 0)
		t[n][sum] = 1;
	else if(n == 0 ) 
		t[n][sum] = 0 ;
	else if(val[n-1]<= sum)
		t[n][sum] =  max(k_s(val,sum-val[n-1],t,n-1),k_s(val,sum,t,n-1));
	else
		t[n][sum] =  k_s(val,sum,t,n-1); 
	return t[n][sum];
		
}
int main()
{
	while("a")
	{
		vector<int> val;
		cin >> n ;
		for(int i = 0 ; i < n ; i++)
		{
			int v;
			cin >> v ;
			val.push_back(v);
	
		}
		int sum;
		cin >> sum;
		vector<vector<int> > t(n+1,vector<int>(sum+1,-1));
		cout << "Answer   ::  " << k_s(val,sum,t,n);
		cout << endl;
	}
	return 0;
}
