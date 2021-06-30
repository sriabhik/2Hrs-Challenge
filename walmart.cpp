#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s[n];
		string  res = "";
		for(int i = 0 ; i < n ; i++)
		{
			string ins;
			cin >> ins;
			s[i] = ins;
			res += ins;
		}
		
		for(int i = 0 ; i < n ; i++)
		{
			cout << res<< " ";
		}
		int num1 = stoi(res) ;
		cout <<endl<< num1;
	}
	int arr[4];
	
	
	return 0;
}
