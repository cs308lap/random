#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    int x=98, y=56;
    cout<<"The gcd of x and y is "<< nr_gcd(x,y)<< endl;
    return 0;
}
