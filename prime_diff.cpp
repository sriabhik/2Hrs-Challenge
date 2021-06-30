 /*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        long long  L,R;
        cin >> L >> R;
        vector<long long int> arr;
        for(int i = L ; i <= R ; i++)
        {
            arr.push_back(i);
        }
        vector<long long int > p_n;
        for(int i = 0 ; i < arr.size() ; i++ )
        {
            if(isPrime(arr[i]))
                p_n.push_back(arr[i]);
        }
        if(p_n.size() == 1)
         {
             cout << 0 << endl;
         }
        else if(p_n.size() == 0)
            {
                cout << -1 << endl;
            }
        else{
            sort(p_n.begin(),p_n.end());
            cout << (p_n[p_n.size()-1] - p_n[0])<<endl;
        }
    }
    return 0;
}

