#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq(arr, arr + k);

        // Using Min Heap, at any time the heap will contain the max k elements seen at that time.
        // O(k + (n - k) * log k) Time Complexity
        for (int i = k; i < n; i++)
        {
            if (pq.top() < arr[i])
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }

        vector<int> res;
        while (!pq.empty())
        {
            res.push_back(pq.top());
            pq.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}