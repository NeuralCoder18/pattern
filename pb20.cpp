#include<iostream>
using namespace std;
void pb20(int n){
    
    for(int i=0;i<n;i++){
        for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++){
            cout<<ch<<" ";
            
            
        }
        cout<<endl;
    }
}

int main(){ 
    int n;
    cout<<"Enter the number n";
    cin>>n;
    pb20(n);
    
    return 0;
}