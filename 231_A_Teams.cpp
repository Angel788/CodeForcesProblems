#include <bits/stdc++.h>
#include  <algorithm>
#define  endl "\n"

using namespace std;

struct Equipo
{
    int persona1;
    int persona2;
    int persona3;
};
int main(){
    cin.tie();
    ios_base::sync_with_stdio(0);
    int casos, n=0;
    cin>>casos;
    auto equipo= vector<Equipo>(casos);
    for(int i=0;i<casos;i++){
        cin>>equipo[i].persona1>>equipo[i].persona2>>equipo[i].persona3;
    }
   for(int i=0;i<casos;i++){
       if((equipo[i].persona1+equipo[i].persona2+equipo[i].persona3)>=2){ n++; continue;}
       
   }
   cout<<n<<endl;
    return 0;
}