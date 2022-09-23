#include <bits/stdc++.h>
#include <string>

using namespace std;



int main(){

    int n,h,m=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>h){
            m+=2;
        }else{
            m+=1;
        }
    }
    cout<<m<<endl;
}
