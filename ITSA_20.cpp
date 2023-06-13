// [C_MM20-易] 十進位轉十六進位
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    cin >> a;
    //hex 16進位，uppercase大寫
    cout << hex << uppercase << a << endl;
    
    return 0;
}