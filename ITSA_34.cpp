// [C_MM34-易] 因數問題
#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            if(i == 1)
                cout << i;
            else
                cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}