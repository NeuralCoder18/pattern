#include <iostream>
using namespace std;

void pb22(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1 || i == 0 || i == n-1 || i == j || i + j == n - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){ 
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    pb22(n);
    return 0;
}
