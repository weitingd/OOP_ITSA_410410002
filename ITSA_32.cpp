// [C_MM32-易] Armstrong數
// 即三位數其各位數字之立方和等於該數本身
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num, armstrong, a, b, c;
    cin >> num;
    a = num / 100;//百位數
    b = (num%100) / 10;//十位數
    c = num % 10;//個位數
    armstrong = pow(a,3) + pow(b,3) + pow(c,3);
    if (armstrong == num){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }        
    
    return 0;
}