#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    while(cin >> num)
    {
        if (num == 0) break;
        int flag = 11;
        while(flag >= 10){
            int temp = num;
            flag = 0;
            while(temp != 0){
                flag += temp % 10;
                temp /= 10;
            }
            num = flag;
        }
        cout << flag << endl;
    }
}