#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cout << "Enter the number of elements: ";
    cin >> k;

    // Create a vector array of size n
    vector<int> nums(k);

    // Input n elements into the vector array
    cout << "Enter " << k << " elements: ";
    for (int i = 0; i < k; ++i)
    {
        cin >> nums[i];
    }

    vector<int> ans;
    int n = nums.size();
    int first = -1;
    int last = -1;
    int s = 0;
    int e = n - 1;
    int target;
    cout << "enter the target element " << endl;
    cin >> target;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            last = mid;
            s = mid + 1;
        }
    }

    s = 0;
    e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            first = mid;
            e = mid - 1;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
}