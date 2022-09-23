#include <bits/stdc++.h>
#include <string>

using namespace std;



int main(){

    int n,A=0,D=0;
    cin>>n;
    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        if(a=='A'){
            A++;
        }else{
            D++;
        }
    }
    if(A>D){
        cout<<"Anton";
    }else if(D>A){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}
