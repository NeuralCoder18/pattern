#include<iostream>
using namespace std;
void pb14(int n){
    
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        
        cout<<endl;
        
    }
        
    }

int main(){ 
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb14(n);
    return 0;
}