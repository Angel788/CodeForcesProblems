#include <bits/stdc++.h>
#include  <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        deque<int> cola;
        int mini=1e9;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mini=min(mini,num);
            if(mini==num) cola.push_front(num);
            else cola.push_back(num);
        }
        for(auto num:cola) cout<<num<<" ";
        cout<<endl;
    }
    return 0;
}