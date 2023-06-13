// [C_MM09-易] 計算 i 次方的值
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, ans = 1;
    cin >> i;
    if(i > 31){
        cout << "Value of more than 31" << endl;
    }
    else{
        //位移，往左移一位即值乘2一次
        ans = ans << i;
        cout << ans << endl;
    }
    
    return 0;
}