#include <iostream>
using namespace std;

void Merge(int A[], int l, int m, int r)
{

    int i = l, j = m + 1, in = l;
    int arr[r + 1];
    while (i <= m && j <= r)
    {
        if (A[i] < A[j])
        {
            arr[in++] = A[i++];
        }
        else
        {
            arr[in++] = A[j++];
        }
        for (; i <= m; i++)
        {
            arr[in++] = A[i];
        }
        for (; j <= r; j++)
        {
            arr[in++] = A[j];
        }
        for (int i = l; i <= r; i++)
        {
            A[i] = arr[i];
        }
    }
}
void MergeSort(int A[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        MergeSort(A, l, m);
        MergeSort(A, m + 1, r);
        Merge(A, l, m, r);
    }
}

int main()
{

    int ar[] = {1, 3, 4, 5, 6, 7, 3, 1, 56};

    MergeSort(ar, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        cout << ar[i] << endl;
    }
}