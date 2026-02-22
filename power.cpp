// Iterative vs Recursion (Power Function)
// For small values → both work fine, difference is negligible.
// For large exponent → iterative is better.
// Recursion uses extra stack space O(e), may cause stack overflow.
// Iterative uses O(1) space, safer and more practical.

#include <bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0) return 1;
    return 2*power(n-1);
} 
// any power 
//     int power(int b,int e){
//     if(e==0) return 1;
//     return b*power(b,e-1);

// int power(int b,int e){ iterative
//     int result=1;
//     for(int i=1;i<=e;i++){
//         result*=b;
//     }
//     return result;
// }
// }


int main(){
    int n; cin>>n;
    cout<<power(n);
}