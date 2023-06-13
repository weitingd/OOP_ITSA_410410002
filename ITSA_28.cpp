// [C_MM28-易] 計算1到N之間屬於5和7的倍數
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=1;i<=N;i++){
        if(i%35 == 0){
            if(i == 35)
                cout << i;
            else
                cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}