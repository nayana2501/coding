#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
// int fib(int n){
//     if(n <= 1) return n;
//     int x = 0, y = 1;
//     for(int i = 2; i <= n; i++){
//         int next = x + y;
//         x = y;
//         y = next;
//     }
//     return y;
// }

// int fib(int n){ while loop
//     if(n <= 1) return n;

//     int x = 0, y = 1;
//     int i = 2;

//     while(i <= n){
//         int next = x + y;
//         x = y;
//         y = next;
//         i++;
//     }

//     return y;
// }



int main(){
    int n;
    cin >> n;
    cout << fib(n);
}

// | Method           | Time     | Space |
// | ---------------- | -------- | ----- |
// | Normal Recursion | O(2^n) ❌ | O(n)  |
// | Memoisation      | O(n) ✅   | O(n)  |
// | Iterative        | O(n) ✅   | O(1)  |
