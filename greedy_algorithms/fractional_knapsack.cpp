#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using std::vector;

class loot
{
public:
  double value, weight;
};
bool compare(loot a, loot b)
{
  double ratio = a.value / a.weight;
  double ratio1 = b.value / b.weight;

  return ratio > ratio1;
}
double fractional_knapsack(int mw, loot l[], int n)
{

  std::sort(l, l + n, compare);
  double finalvalue = 0;
  double currentweight = 0;
  for (int i = 0; i < n; i++)
  {

    if (currentweight + l[i].weight <= mw)
    {
      currentweight += l[i].weight;
      finalvalue += l[i].value;
    }
    else
    {
      double remaning = mw - currentweight;
      finalvalue += l[i].value * ((double)remaning / l[i].weight);
      break;
    }
  }
  return finalvalue;
}
int main()
{

  int n, mw;
  std::cin >> n >> mw;
  loot l[n];
  for (int i = 0; i < n; i++)
  {
    double val, wei;
    std::cin >> val >> wei;
    l[i].value = val;
    l[i].weight = wei;
  }
  std::cout << std::setprecision(3) << std::fixed << fractional_knapsack(mw, l, n);
}
