#include<bits/stdc++.h>

using namespace std;
string decimalToBinary(int n)
{
    //finding the binary form of the number and
    //coneverting it to string.
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurance of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
int main()
{
    int n = 17;
     
    //Function call
    cout << decimalToBinary(n);
 
    return 0;
}
