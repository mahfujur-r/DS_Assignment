#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int n, target;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cin >> target;

    int idx = binarysearch(arr, n, target);

    if (idx >= 0)
        cout << target << " is at index " << idx << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
