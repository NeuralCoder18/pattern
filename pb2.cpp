#include<iostream>
using namespace std;
void pb_2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb_2(n);
    return 0;
}