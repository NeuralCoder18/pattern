#include<iostream>
using namespace std;
void pb17(int n){
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
           cout<<" ";
        }
        char ch='A';
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=i){
               
                ch+=1;
            }
            else{
                 ch-=1;
                
               
            }
        }
        cout<<endl;
    }
}
int main(){ 
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb17(n);
    return 0;
}