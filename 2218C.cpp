#include <iostream>
using namespace std;

int main(){
    // int t;
    // cin >> t;

    int n;
    cin >> n;
        
    int arr[3*n];
    for(int i = 0; i < 3 * n; i++){
        arr[i] = i + 1;
    }
    for(int i = 0; i < 3 * n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}