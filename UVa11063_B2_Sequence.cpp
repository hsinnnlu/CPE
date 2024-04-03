#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 1;

    while(cin >> n)
    {
        int arr[n];
        bool flag = true;
        map<int, bool> mymap;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] < 1) flag = false;
            if (i != 0 && arr[i-1] >= arr[i]) flag = false;
        }

        if (flag)
        {
            for (int i = 0; i < n; i++){
                for (int j = i; j < n; j++){
                    int temp = arr[i] + arr[j];
                    if (!mymap[temp]) mymap[temp] = true;
                    else flag = false;
                }
            }
        }

        if (flag) cout << "Case #" << count << ": It is a B2-Sequence." << endl;
        else cout << "Case #" << count << ": It is not a B2-Sequence." << endl;

        cout << endl;
        count++;
    }
}