#include <iostream>
using namespace std;

int factorial(int x){
    if (x<=1){
        return 1;
    }
    else
    return x*factorial(x-1);
}  
int main(){
    int x;
    cout << "Enter number you want to be factorised: ";
    cin >> x;
    cout << "The factorial of " << x << " is " << factorial(x) << endl;
    
    return 0;
}
