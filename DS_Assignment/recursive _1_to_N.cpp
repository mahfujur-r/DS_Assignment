#include <bits/stdc++.h>
using namespace std;
void rescursive(int n){

    if(n==0){
        return;
    }
    cout << n << " ";
     rescursive(n-1);
}
int main () {
    int n;cin>>n;
    rescursive(n);

 return 0;
}
