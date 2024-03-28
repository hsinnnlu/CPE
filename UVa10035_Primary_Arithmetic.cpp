#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    
    while(cin >> num1 >> num2)
    {
        if (num1 == 0 && num2 == 0) break;
        int count = 0;
        int flag = 0;
        int size1 = to_string(num1).length();
        int size2 = to_string(num2).length();

        while(num1 != 0 || num2 != 0)
        {
            if ((num1 % 10 + num2 % 10 + flag) >= 10) count++;
            flag = (num1 % 10 + num2 % 10 + flag) / 10;
            num1 /= 10;
            num2 /= 10;
        }
        if (count == 1) cout << count << " carry operation." << endl;
        else if (count > 1) cout << count << " carry operations." << endl;
        else cout << "No carry operation." << endl;
    }
}