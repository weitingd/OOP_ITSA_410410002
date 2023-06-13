// [C_MM21-易] 算階乘
#include <iostream>

using namespace std;

int main(){
    int n;
    long long sum = 1;
    cin >> n;
    for(int i=1;i<=n;i++){
        sum *= i;
    }
    cout << sum << endl;
    return 0;
}