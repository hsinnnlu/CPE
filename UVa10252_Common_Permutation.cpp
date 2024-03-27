#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    
    while (getline(cin, str1) && getline(cin, str2)) {
        map<char, int> freq1, freq2;

        for (char ch : str1) freq1[ch]++;
        for (char ch : str2) freq2[ch]++;

        string result = "";
        
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            int cnt = min(freq1[ch], freq2[ch]);
            result += string(cnt, ch);
        }

        cout << result << endl;
    }

    return 0;
}
