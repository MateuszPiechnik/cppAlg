#include <algorithm>

int kthSmallest(int arr[], int l, int r, int k)
{
    std::sort(arr, arr + r + 1);
    return arr[k - 1];
}