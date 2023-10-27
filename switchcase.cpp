# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: "; 
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout <<  " Sum= " << num1 + num2;
      break;

    case '-':
      cout << " Diffrence= " << num1 - num2;
      break;

    case '*':
      cout  << " Product= " << num1 * num2;
      break;

    case '/':
      cout <<  " Quotient= " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}