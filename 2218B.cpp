#include <iostream>
using namespace std;

int MaxArrayValue(int *arr, int n){
    int MaxValue = 0;
    int idx = 0;
    for(int i = 0; i <= n; i++){
        if(MaxValue < arr[i]){
            MaxValue = arr[i];
            idx = i;
        }
    }
    return idx;
}

int main(){
    int n;
    cin >> n;
    while(n--){
    int arr[7];
    int sum = 0;

    for(int i = 0; i < 7; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 7; i++){
        if(i == MaxArrayValue(arr, 7)){
            sum += arr[i];
        }
        else{
            sum += arr[i] * (-1);
        }
    }
        cout << sum << endl;
    }
    return 0;
}