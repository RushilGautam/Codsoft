#include <iostream>
using namespace std;
int main() {
    double X,Y;
    char op;
    cout<<"Enter the value of operator\n";
    cin>>op;
    cout<<"Enter the values of X and Y\n";
    cin>>X>>Y;
    switch(op){
        case '+':
        cout<<"Addition is\n"<<X+Y;
        break;
        case '-':
        cout<<"Subtraction is\n"<<X-Y;
        break;
        case '*':
        cout<<"Multiplication is\n"<<X*Y;
        break;
        case '/':
        cout<<"Division is\n"<<X/Y;
        break;
        default:
        cout<<"Invalid operator\n";
        
    }
    return 0;
}