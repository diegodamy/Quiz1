#include <iostream>
using namespace std;

float a, b;

int main(){
  cout << "Please input the first number: " << endl;
  cin >> a;
  cout << "Please input the second number: " << endl;
  cin >> b;
  cout << endl;

  cout << "Multiplication gives: " << a*b << endl;
  cout << endl;
  cout << "Integer division gives: " << a/b << " [for first number / second number]." << endl;
  cout << endl;
  cout << "Integer division gives: " << b/a << " [for second number / first number]." << endl;
  cout << endl;
  cout << "Addition gives: " << a+b << endl;
  cout << endl;
  cout << "Subtracting first number minus second number gives: " << a-b << endl;
  cout << endl;
  cout << "Subtracting second number minus first number gives: " << b-a << endl;

}
