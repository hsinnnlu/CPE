#include <iostream>
using namespace std;

int main(){
    string str;
    while (getline(cin, str)){
        int num1 = 0;
        int num2 = 0;
        bool flag = true;
        if (str.size() == 1 && str[0] == '0') break;

        for (int i = str.size() - 1; i >= 0; i-- ){
            if (flag){
                num1 += str[i];
                flag = false;
            }
            else{
                num2 += str[i];
                flag = true;
            }
        }
        if ((num1 - num2) % 11 == 0) cout << str << " is a multiple of 11." << endl;
        else cout << str << " is not a multiple of 11." << endl;
    }
    return 0;
}