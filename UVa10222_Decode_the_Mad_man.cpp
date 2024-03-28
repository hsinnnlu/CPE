#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while(getline(cin, line))
    {
        string str = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

        for(char c: line)
        {
            c = tolower(c);
            for (int i = 0; i < str.size(); i++){
                char flag = str[i];
                if (c == flag){
                    cout << str[i - 2];
                    break;
                }
                else if(c == ' '){
                    cout << ' ';
                    break;
                }
            }
        }
        cout << endl;
    }
}