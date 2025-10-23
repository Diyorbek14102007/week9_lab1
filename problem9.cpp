#include <iostream>
using namespace std;
int multiply(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    if (b>0) {
        return a+multiply(a, b-1);
    }else {
        return -a + multiply(a, b+1);
    }
}
int main() {
    int a, b;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    cout<<"The sum is: "<<multiply(a, b)<<endl;
    return 0;
}