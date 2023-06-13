// [C_MM10-易] 攝氏溫度轉華式溫度
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double c, f;//攝氏，華氏
    cin >> c;
    f = (c * (9.0/5.0)) + 32;
    //四捨五入取至小數點後一位
    cout << fixed << setprecision(1) << f << endl;
    
    return 0;
}