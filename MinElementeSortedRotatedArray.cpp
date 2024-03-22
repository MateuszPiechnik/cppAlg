#include <algorithm>

int minNumber(int arr[], int low, int high)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    return *std::min_element(arr, arr + high + 1);
}