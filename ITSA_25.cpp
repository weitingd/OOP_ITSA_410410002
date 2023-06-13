// [C_MM25-易] 計算正整數被3整除之數值之總和
#include <iostream>

using namespace std;

int main(){
    int N,sum=0;
    cin >> N;
    for(int i=1;i<=N;i++){
        if(i%3 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}