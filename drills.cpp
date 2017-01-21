#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  double number1;
  double number2;
  double smallest;
  double largest;

  while (cin >> number1 >> number2)
    if (number1 < number2)
      cout << "The small number is: " << number1 << '\n'
           << "The larger number is: " << number2 << '\n';
    else if (number1 > number2)
    cout << "The small number is: " << number2 << '\n'
         << "The larger number is: " << number1 << '\n';
    else
      cout << "The numbers are equal.";

}
