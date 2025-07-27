#include <bits/stdc++.h>
using namespace std;
void rescursive(int n){

    if(n==0){
        return;
    }
    rescursive(n-1);
    cout << n << " ";
}
int main () {
    int n;cin>>n;
    rescursive(n);

 return 0;
}
