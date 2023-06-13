// [C_MM30-易] 質數判別
#include <iostream>

using namespace std;

int main(){
    int num, prime=1;
    cin >> num;
    for(int i=2;i<num;i++){
        if(num%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}