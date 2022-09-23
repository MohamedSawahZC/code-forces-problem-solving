#include <bits/stdc++.h>


using namespace std;

int main()
{
   string a;
    cin>>a;
    int cnt=0;
    sort(a.begin(),a.end());
    for(int i =0 ; i<a.length();i++){
        if(a[i] != a[i-1]){
            cnt++;
        }
    }
    if(cnt%2==0){
        cout<<"CHAT WITH HER!\n";
    }else{
        cout<<"IGNORE HIM!\n";
    }

}
