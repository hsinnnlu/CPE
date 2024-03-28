#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    while(cin >> num1 >> num2){
        int count = 0;
        if(num1 == 0 && num2 == 0) break;
        for (int i = num1; i <= num2; i++)
        {
            if(pow(int(sqrt(i)), 2) == i) count++;
        }
        cout << count << endl;
    }
}