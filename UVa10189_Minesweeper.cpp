#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    int count = 0;
    while(cin >> num1 >> num2)
    {
        if (num1 == 0 && num2 == 0) break;
        count++;
        char arr[num1 + 2][num2 + 2];
        char ans[num1 + 2][num2 + 2];

        for (int i = 1; i < num1 + 1; i++){
            for (int j = 1; j < num2 + 1 ; j++){
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < num1 + 1; i++){
            for (int j = 0; j < num2 + 1 ; j++){
                ans[i][j] = '0';
            }
        }
        
        for (int i = 1; i < num1 + 1; i++){
            for (int j = 1; j < num2 + 1 ; j++){
                if (arr[i][j] == '*'){
                    ans[i-1][j-1]++;
                    ans[i-1][j]++;
                    ans[i-1][j+1]++;
                    ans[i][j-1]++;
                    ans[i][j+1]++;
                    ans[i+1][j-1]++;
                    ans[i+1][j]++;
                    ans[i+1][j+1]++;
                }
            }
        }
        if (count > 1) cout << endl;
        cout << "Field #" << count << ":" << endl;
        for (int i = 1; i < num1 + 1; i++){
            for (int j = 1; j < num2 + 1 ; j++){
                if (arr[i][j] == '*') ans[i][j] = '*';
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
}