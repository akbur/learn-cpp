// compute mean and median temperatures
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<double> temps;
  double temp;
  while (cin >> temp)
    temps.push_back(temp);

  // compute mean temperature
  double sum = 0;
  for (int i=0; i < temps.size(); ++i) sum += temps[i];
  cout << "Average temperature: " << sum/temps.size() << endl;

  // compute median temperature
  sort(temps.begin(), temps.end());
  cout << "Median temperature: " << temps[temps.size()/2] << endl;
}
