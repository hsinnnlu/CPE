#include <iostream>
using namespace std;

int threenplusone(int num){
    int count = 1;
    while (num != 1){
        if (num % 2 == 1) num = num * 3 + 1;
        else num /= 2;
        count++;
    }
    return count;
}

int main(){
    int num1,num2;
    while(cin >> num1 >> num2){
        int ans = 0;
        if (num2 < num1){
            int flag = num1;
            num1 = num2;
            num2 = flag;
        }
        for (int i = num1; i < num2; i++){
            if (threenplusone(i) > ans) ans = threenplusone(i);
        }
        cout << ans << endl;
    }
}