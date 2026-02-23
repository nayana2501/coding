#include <bits/stdc++.h>
using namespace std;

void reachome(int s,int d){
    if(s==d) {
        cout<<"pahuch gya";
        return;}
        cout<<"sorce "<<s<<"  destination "<<d<<endl;
    reachome(s+1,d);
    
}
int main(){
    int src=1;
    int des=10;
    reachome(src,des);
}