#include <bits/stdc++.h>


using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    //Transform string to lower case with STL
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a<b){
        cout<<-1;
    }else if(b<a){
    cout<<1;
    }else{
    cout<<0;
    }

}
