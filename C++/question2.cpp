#include<iostream>
using namespace std;

int main() {
    int testCase;
    cin>> testCase;

    for(int i = 0; i < testCase; i++) {
        int n, flag = 0;
        cin>>n;
        int *arr = new int[n];

        for(int j = 0; j < n; j++) {
            cin>>arr[j];
        }

        for(int k = 0; k < n; k++) {
            if(arr[k]%2 == 0) {
                flag += arr[k]/2;
            } else
                flag += arr[k]/2 + 1;
        }
        cout<<flag<<endl;
    }
}