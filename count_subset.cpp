#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int N ;
        vector<int> arr;
        int val;
        for(int i = 0 ; i < N ; i++)
        {
       
            cin >> val;
            arr.push_back(val);
        }
        reverse(arr.begin(),arr.end());
        for(int i = 0 ;i < N ; i++)
        {
            cout << arr[i];
        }
         
        return 0;  
    }

}
