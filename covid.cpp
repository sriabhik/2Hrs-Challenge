/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n;
	cin >> n;
	
	fflush(stdin);
	while(n--)
	{
		string str;
		getline(cin,str);
        fflush(stdin);
		vector<int> arr(str.size(),0);
		int k = 0;
		for(int i = 0 ; i < s.size();i++)
		{
			if(s[i] == str[k])
			{
				arr[k++] = 1;
			}
		}
		
		int it = find(arr.begin(),arr.end(),0);
		if(it != arr.end())
		{
			cout << "NEGATIVE"<< endl;
		}
		else
			cout << "POSITIVE" << endl;

	}
	return 0;
}

