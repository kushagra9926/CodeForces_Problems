#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int l = 1, r = 3 * n;

        while (l < r) {
            cout << l << " " << r-1 << " " << r << " ";
            l++;
            r -= 2;
        }
        cout << "\n";
    }
}