#include<iostream>
using namespace std;
void pb8(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
           cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"* "; 
        }
        cout<<endl;
    }
}
int main(){ 
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb8(n);
    return 0;
}