// Aggressive cow problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> arr, int n, int c, int minPossible)
{
    int cows = 1, lastStallIndex = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastStallIndex >= minPossible)
        {
            cows++;
            lastStallIndex = arr[i];
        }
        if (cows == c)
            return true;
    }
    return false;
}

int getRange(vector<int> &arr, int n, int c)
{
    sort(arr.begin(), arr.end());

    int st = arr[0], end = arr[n - 1] - arr[0], ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, c, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = 5, c = 3;
    int ans = getRange(arr, n, c);
    cout << "the maximum possible distance in stall for" << c << " cows is: " << ans << endl;
}