#include <iostream>
#include <string>

using namespace std;
int main()
{
  cout << "Please enter your first and second names\n";
  string first;
  string second;
  cin >> first >> second;
  if (first == second) cout << "That's the same name twice!\n";
  if (first < second)
    cout << first << " is alphabetical before " << second << '\n';
  if (first > second)
    cout << first << " is alphabetical after " << second << '\n';
  string name = first + ' ' + second;
  cout << "Hello, " << name << '\n';
}
