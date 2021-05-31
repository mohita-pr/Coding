#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &a)
{
    
    int max_so_far = a[0], max_tn = a[0], min_tn = a[0];
    for (int i = 1; i < a.size(); i++)
    {

        max_tn = max(a[i], max_tn + a[i]);

        max_so_far = max(max_so_far, max_tn);
    }
    return max_so_far;
}

int main()
{
    vector<int> vect{-2, -3, 4, -1, -2, 1, 5, -3} ;
    int res = maxSum(vect);
    cout << res;
    return 0;
}