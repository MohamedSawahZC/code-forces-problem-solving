#include <bits/stdc++.h>


using namespace std;

int main()
{
string a;
    cin>>a;
    int upper=0,lower=0;
    for(int i=0 ; i<a.length();i++){
        if(isupper(a[i])){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper>lower){
        transform(a.begin(), a.end(), a.begin(), ::toupper);
    }else{
        transform(a.begin(), a.end(), a.begin(), ::tolower);
 
    }
    cout<<a<<endl;
}
