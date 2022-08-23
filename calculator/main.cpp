# include <iostream>
using namespace std;
class Student{
    public:
string name;
int roll_no;
};

int main() {
        Student object;
        object.name="John";
        object.roll_no=2;
        cout<<object.name<<endl;
        cout<<object.roll_no<<endl;

  char mehedi;
  float num1, num2;

  cout << "Enter operator: +, -, *, /   : ";
  cin >> mehedi;

  cout << "Enter two Number: ";
  cin >> num1 >> num2;

  switch(mehedi) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
