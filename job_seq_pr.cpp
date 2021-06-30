#include<bits/stdc++.h>
using namespace std;

struct meet{
	int job;
	int dd;
	int profit;
};
bool comparator(struct meet  j1,meet j2){
	return (j1.dd < j2.dd);
}
bool comparato(struct meet  j1,meet j2){
	return (j1.profit > j2.profit);
}
void cal(int j[],int d[],int p[],int n){
	struct  meet fill[n];
	int max_dd = 0;
	for(int i = 0 ; i < n ;i++)
	{
		fill[i].job 	 = j[i];
		fill[i].dd  	 = d[i];
		if(max_dd < d[i])
		{
			max_dd = d[i];
		}
		fill[i].profit   = p[i];
	}
	
	sort(fill,fill+n ,comparato);
	cout << "\n MAX_DD " << max_dd << endl ;
	for(int i = 0 ; i < n ; i++)
		{
			cout <<  fill[i].job<< " " << " " << fill[i].dd << " "<< fill[i].profit<<endl;
		}
	int pft[max_dd] ;
		for(int i = 0 ; i < max_dd ; i++)
			pft[i] = -1;
	int res = 0;
	for(int i = 0 ; i < n ; i++)
	{
		cout << "\n:: i ::  " << i << "\n ";
		for(int j = fill[i].dd - 1 ; j >= 0 ; j--)
		{
			cout << " \n j: " << j << " ::  dd " << fill[i].dd - 1 << " \n"; 
			if(pft[j] == -1 && j <= fill[i].dd - 1)
			{
				pft[j] = fill[i].job;
				cout << " \nInside\n";
				res += fill[i].profit;
				break;
			}
		}
	}
	cout << " \n" << res << "\n ";
	
	
}
int main()
{
	int t ; cin >>t;
	while(t--){
		int n; cin>> n;
		int j[n],d[n],p[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin >> j[i] >> d[i] >> p[i];
		}
	cal(j,d,p,n);
	}
}
