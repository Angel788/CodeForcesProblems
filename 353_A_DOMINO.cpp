#include <bits/stdc++.h>
#define end1 "\n"
using namespace std;
int main(){
    cin.tie();
    ios_base::sync_with_stdio(0);
    int x,upp=0,down=0,par=0;
    cin>>x;
    for(int i=0;i<x;i++){
        int dom_upp,dom_down;
        cin>>dom_upp>>dom_down;
        if((dom_upp+dom_down)%2!=0) par++;
        upp+=dom_upp;
        down+=dom_down;
    }
    if(upp%2==0 & down%2==0) cout<<0<<end1;
    else if(upp%2!=0 & down%2!=0 & par>0) cout<<1<<end1;
    else cout<<-1<<end1<<end1;
    return 0;
}