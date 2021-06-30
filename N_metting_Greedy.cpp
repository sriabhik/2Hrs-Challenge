#include<bits/stdc++.h>
using namespace std;
vector< pair<int, int> > p;

bool sortbysec(const pair<int,int> &a , const pair<int,int> &b)
{
	return (a.second < b.second);
}

int main()
{
	int t ;
	cin >> t;
	while(t--)
	{
		int n ;
		cin >> n;
		vector< pair<int,int> >arr;
		int val_1 , val_2;
		for(int i = 0;i < n ;i++)
		{
			cin >> val_1>>val_2;
			arr.push_back(make_pair(val_1,val_2));
		}
		sort(arr.begin(),arr.end(),sortbysec);
	
		int f_t = arr[0].second;
		int count = 1;
		for(int i = 1 ; i < n ;  i++)
		{
			if(f_t < arr[i].first )
				{
					count += 1;
					f_t    = arr[i].second;
				}
		}
		cout << count <<endl;
	}
	return 0;
}
