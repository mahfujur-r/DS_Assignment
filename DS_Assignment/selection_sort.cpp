#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){

    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[min]>arr[j]){
                min=j;

            }
        }
        int tem=arr[min];
        arr[min]=arr[i];
        arr[i]=tem;


    }
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] <<" ";
    }


}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionsort(arr, n);

    return 0;
}



