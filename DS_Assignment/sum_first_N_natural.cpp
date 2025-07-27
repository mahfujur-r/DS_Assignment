#include <bits/stdc++.h>
using namespace std;
int  sumN(int n)
{

    if(n==1)

        return 1;

    return n + sumN(n - 1);
    cout << n ;

}
int main ()
{
    int n;
    cin >> n;
     cout << "Sum of first " << " natural numbers is: " << sumN(n);


    return 0;
}
