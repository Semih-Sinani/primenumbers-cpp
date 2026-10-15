#include <iostream>

using namespace std;

int main () {

    int arr[100];
    int n;
    cin>>n;
    bool prime;
    for (int i = 0 ;i  < n ; i++) {
        cin>>arr[i];
    }


    for (int i = 0 ;i  < n ; i++) {
        int num = arr[i];
        prime = true;
        if (num <=1) {
            prime = false;
        }else {
            for (int j = 2; j < num; j++) {
                if (num % j == 0) {
                    prime = false;
                    break;
                }
            }
        }

        if (prime == true) {
            cout<<num<<" ";
        }
    }
    return 0;
}