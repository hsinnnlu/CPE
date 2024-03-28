#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    int len;

    cin >> times;
    while(times--){
        cin >> len;
        int arr[len];
        int count = 0;
        for (int i = 0; i < len; i++) cin >> arr[i];
        for (int i = 0; i < len; i++){
            for (int j = i + 1; j < len; j++){
                if (arr[i] > arr[j]){
                    int flag = arr[i];
                    arr[i] = arr[j];
                    arr[j] = flag;
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
}