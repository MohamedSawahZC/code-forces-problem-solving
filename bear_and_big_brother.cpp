#include <bits/stdc++.h>
#include <string>

using namespace std;



int main(){
    int a,b,y=0;
    cin>>a>>b;
    while(true){

        if(a<b){
                     a*=3;
       b*=2;
            y++;

        }else if(a==b){
            y++;
            cout<<y;
            return false;
        }else{
         cout<<y;
            return false;
        }
    }
}
