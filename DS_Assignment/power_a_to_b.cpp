#include <bits/stdc++.h>
using namespace std;

double power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    cin >> a >>b;
    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}
