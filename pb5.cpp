#include<iostream>
using namespace std;
void pb_5(int n){
    for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb_5(n);
    return 0;
}