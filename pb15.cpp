#include<iostream>
using namespace std;
void pb15(int n){
    
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=n-i;j>=1;j--){
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
    pb15(n);
    return 0;
}