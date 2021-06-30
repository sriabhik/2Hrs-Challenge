 #include<bits/stdc++.h>
using namespace std;

bool Jump(vector<string> &num){
    int n1 = num.size();
            int reach = 0;
            for(int i = 0;i < n;i++)
            {
                if(reach < i)
                    return false;
                int val = stoi(num[i]);
                reach = max(reach,i+val);
            }
        }
        return true;
}
int main()
{
    vector<string> num;
    int n;
    cin >>n;
    for(int i = 0;i < n i++)
    {
        string s ;
        getline(cin,s);
        num.push_back(s);
    }
    cout << Jump(num);
}
