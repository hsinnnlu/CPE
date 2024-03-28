#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    bool openQuote = true;

    while (getline(cin, line)) {

        for (char& c : line) {
            if (c == '"') {
                if (openQuote) {
                    cout << "``";
                } else {
                    cout << "''";
                }
                openQuote = !openQuote;
            }
            
            else {
                cout << c;
            }
        }

        cout << endl;
    }

    return 0;
}
