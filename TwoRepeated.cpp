#include <vector>

std::vector<int> twoRepeated (int arr[], int n){
    std::vector<int> repeated;
    for(int i=1; i<n+2; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                repeated.push_back(arr[i]);
            }
        }
    }
}