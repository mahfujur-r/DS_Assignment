#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int left, int right) {
    if (left >= right)
        return true;

    if (str[left] != str[right])
        return false;
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    string m;cin >> m;

        if (isPalindrome(m, 0, m.length() - 1))
        cout << "is a palindrome " << endl;
    else
        cout << "is not a palindrome " << endl;

    return 0;
}
