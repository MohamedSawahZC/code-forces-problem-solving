#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> temp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}
