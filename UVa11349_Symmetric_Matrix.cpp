#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times,num;
    int count = 0;
    string str1, str2;

    cin >> times;

    while(times--)
    {
        cin.ignore();
        cin >> str1 >> str2 >> num;
        
        bool flag = true;
        bool nonnegative = false;
        long long arr[num][num];
        
        count++;

        for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                cin >> arr[i][j];
                if (arr[i][j] < 0){
                    nonnegative = true;
                }
            }
        }

        if (nonnegative){
            cout << "Test #" << count <<": Non-symmetric." << endl;
            continue;
        }   

        for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                if (arr[i][j] != arr[num - i - 1][num - j - 1]){
                    flag = false;
                    break;
                }
            }
        } 

        if (flag) cout << "Test #" << count <<": Symmetric." << endl;
        else cout << "Test #" << count <<": Non-symmetric." << endl;
    }
}