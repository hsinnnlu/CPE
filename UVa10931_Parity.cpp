#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        if (num == 0) break;
        string str = "";
        int count = 0;
        while(num != 0)
        {
            str = to_string(num % 2) + str;
            num /= 2;
        }
        for (int i = 0; i < str.size(); i++){
            if (str[i] == '1') count++;
        }
        cout << "The parity of " << str << " is " << count << " (mod 2)." << endl;
    }
}