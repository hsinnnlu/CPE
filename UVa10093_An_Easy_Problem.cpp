#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int temp;
    
    while(getline(cin, s))
    {
        long long int sum = 0;
        int base = 1;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                temp = s[i] - '0';
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                temp = s[i] - 'A' + 10;
            }
            else if (s[i] >= 'a' && s[i] <= 'z') {
                temp = s[i] - 'a' + 36;
            }
            else continue;
 
            if (base < temp) base = temp;
            sum += temp;
        }

        for (int j = base; j <= 62; j++){
            if (j == 62){
                cout << "such number is impossible!" << endl;
                break;
            }
            
            if (sum % j == 0){
                cout << j + 1 << endl;
                break;
            }
        }
    }
}