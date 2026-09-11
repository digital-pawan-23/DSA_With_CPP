#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int n = arr.size();
    int st = 0;
    int end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st)/2; // to avoid overflow
        if (target > arr[mid])
        {
            st = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> vec = {-1, 0, 3, 4, 5, 9, 12}; // Odd 
    int target = 12;
    int ans = binarySearch(vec, target);
    cout << ans;
}