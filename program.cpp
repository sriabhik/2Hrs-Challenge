#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    map<int,int> cnt;
    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ;i++){
        cnt[arr[i]]++;
    }
    for(int i = 0 ; i < n ;i++){
        if(cnt[i] == 2){
            cout << "REPEAT " << cnt[i];
        }
         if(cnt[i]-1 == -1){
            cout << "Missing " << cnt[i];
        }
    }
    return 0;
}
