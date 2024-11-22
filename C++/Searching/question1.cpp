#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin>>testCase;
    int *n = new int[testCase];

    for(int i = 0; i < testCase ; i++){
        cin>>n[i];
    }
    for(int j = 0; j < testCase; j++){
        int weeks = n[j] / 7;
        if(n[j] % 7 > 1){
            weeks += 1;
        }
        cout<< weeks << endl;
    }
}