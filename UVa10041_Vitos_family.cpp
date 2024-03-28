#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times, size;
    cin >> times;

    while(times--)
    {
        cin >> size;
        int arr[size];
        int ans = 0;
        
        for (int i = 0; i < size; i++) cin >> arr[i];
        sort(arr, arr + size);
        int mid = arr[size / 2];
        
        for(int j = 0; j < size; j++) ans += abs(arr[j] - mid);
        cout << ans << endl; 
    }
}