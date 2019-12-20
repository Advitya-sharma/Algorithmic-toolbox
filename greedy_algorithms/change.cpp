#include <algorithm>
#include <iostream>

int get_change(int m)
{

  int sum = 0;
  int arr[3]{1, 5, 10};
  int i = 2;
  while (i >= 0)
  {
    while (m >= arr[i])
    {
      m = m - arr[i];
      sum += 1;
    }
    i -= 1;
  }
  return sum;
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
