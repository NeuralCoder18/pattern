#include<iostream>
using namespace std;
void pb_4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb_4(n);
    return 0;
}