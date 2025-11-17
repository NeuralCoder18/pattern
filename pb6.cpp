#include<iostream>
using namespace std;
void pb_6(int n){
    for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
            cout<<j ;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb_6(n);
    return 0;
}