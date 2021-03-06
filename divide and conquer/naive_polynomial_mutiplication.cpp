#include <iostream>

int main()
{
    int n = 3;

    int a[3] = {3, 2, 5};
    int b[3] = {5, 1, 2};

    int product[2 * n - 1];

    for (int i = 0; i <= 2 * n - 2; i++)
    {
        product[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            product[i + j] = product[i + j] + (a[i] * b[j]);
        }
    }

    for (int i = 0; i < 2 * n - 1; i++)
        std::cout << product[i] << std::endl;
}
