#include <iostream>

using namespace std;

float radius, height;

int main(){

  cout << "Please enter the radius:" << endl;
  cin >> radius;
  cout << "Please enter the height:" << endl;
  cin >> height;

  cout << "The volume is: " << (3.1416*(radius*radius)*height) << endl;

  return 0;


}
