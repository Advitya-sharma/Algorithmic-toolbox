#include <iostream>

using namespace std;

int main()
{

    int array[5] = {3, 4, 1, 6, 2};

    int n = 5;

    for (int i = 0; i < n; i++)
    {

        int minidx = i;

        for (int j = i; j < n; j++)
        {
            if (array[j] < array[minidx])
            {
                minidx = j;
            }
        }
        int temp = array[minidx];
        array[minidx] = array[i];
        array[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}
