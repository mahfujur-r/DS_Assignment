#include <bits/stdc++.h>
using namespace std;
int countDigits(int n) {
    if (n < 0)
        n = -n;
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main() {
    int num;
    cin >> num;

    if (num == 0)
        cout << "Number of digits: 1" << endl;
    else
        cout << "Number of digits: " << countDigits(num) << endl;

    return 0;
}
