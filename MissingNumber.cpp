#include <vector>
#include <algorithm>

int missingNumber(std::vector <int>& array, int n){
    std::sort(array.begin(), array.end());

    for (int i = 0; i < n; i++){
        if(array[i] != i+1){
            return i+1;
        }
    }
}