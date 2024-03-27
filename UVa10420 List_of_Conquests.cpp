#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    string str;
    map<string, int> count;
    cin >> times;
    cin.ignore();

    while(times--)
    {
        cin >> str;
        count[str]++;
        getline(cin, str);
    }
    for (auto i = count.begin(); i != count.end(); i++){
        cout << i -> first << " " << i -> second << endl;
    }
}