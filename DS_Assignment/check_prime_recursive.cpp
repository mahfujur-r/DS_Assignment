#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n <= 2)
        return n == 2;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);
}

int main() {
    int num;
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number ";
    else
        cout << num << " is not a prime number ";
        cout << "/n";

    return 0;
}
