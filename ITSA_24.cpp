// [C_MM24-易] 計算薪水
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hour, money = 0;
    double salary;//薪水
    
    cin >> hour >> money; //工時，時薪
    if(hour <= 60){
        salary = money*hour;
    }
    else if(hour > 60 && hour <= 120){
        salary = (60*money) + ((hour-60)*money*1.33);
    }
    else if(hour >= 121){
        salary = (60*money) + (60*money*1.33) + ((hour-120)*money*1.66);
    }
    //取到小數點後一位
    cout << fixed << setprecision(1) << salary << endl;
    return 0;
}