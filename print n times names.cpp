#include <bits/stdc++.h>
using namespace std;

// void printName(int x) {
//     if (x == 0) return;

//     cout << "Nayana" << endl;
//     printName(x - 1);
// }
void printName(int i,int x){
        if(i>x) return;
        cout<<"Nayana"<<endl;
        printName(i+1,x);
        
}

int main(){
        int x;
        cin>>x;
        printName(1,x);
        return 0;
}

// //#include <iostream>
// using namespace std;

// int add(int x, int y) {
//     return x + y;
// }

// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << add(a, b);
//     return 0;
// }
