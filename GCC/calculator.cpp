# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    
    cout << "Enter two mumbers: ";
    cin >> num1 >> num2;
    cout << "Enter operation to perform [+, -, *, /] : ";
    cin >> op;
    
    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }
    
    return 0;
}
