#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long start, target;
    
    while(cin >> start >> target)
    {
        long long flag = start;
        while(target > 0)
        {
            if(target - flag > 0){
                target -= flag;
                flag++;
            }
            else break;
        }
        cout << flag++ << endl;
    }
}