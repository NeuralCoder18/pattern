#include<iostream>
using namespace std;
void pb_1(int n){
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }



    

}
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    pb_1(n);
    return 0;
}