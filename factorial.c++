#include<iostream>
using namespace std;
int Factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int ans=Factorial(n);
    cout<<"Factorial is: "<<ans<<endl;
return 0;
}