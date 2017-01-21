#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Please enter your first name and age:\n";
  string first_name;        // first_name is a variable of type string
  int age;
  cin >> first_name;        // read characters into first_name
  cin >> age;
  cout << "Hello, " << first_name << " (age " << age << ")!\n";
}
