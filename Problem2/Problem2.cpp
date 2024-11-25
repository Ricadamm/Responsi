#include <iostream>
using namespace std;

int factorial(int x){
    if (x<=1){ // checks if x is lower or equal to 1
        return 1; // return back to int factorial
    }
    else
    return x*factorial(x-1); // calculate x*factorial(x-1)
}  
int main(){
    int x; 
    cout << "Enter number you want to be factorised: "; // Displays a question to the user
    cin >> x; // Inputs as x
    cout << "The factorial of " << x << " is " << factorial(x) << endl; // Displays the result of the factorial
    
    return 0;
}
