#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char , int >cnt;
	vector<int> s {<1,2,3,4,4,3,3,4,3,4,3>};
	for(int i = 0 ;i < s.length();i++)
	{
		cnt[i]++;
	}
	cout << cnt[1] << " " << cnt[3] << " ";
	return 0;
}
