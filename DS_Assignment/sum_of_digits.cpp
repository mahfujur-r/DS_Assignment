#include <bits/stdc++.h>
using namespace std;
int sumdigit(int n)
{
    if (n == 0)
    return 0;
    return (n % 10 + sumdigit(n / 10));
}
int main()
{
    int num ;cin>>num;
    int result = sumdigit(num);
    cout<<"sum of digit " << result << endl;
    return 0;
}

