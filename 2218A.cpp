#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        
        if (x < 67)
            cout << x + 1 << endl;
        else
            cout << 67 << endl;
    }
    return 0;
}