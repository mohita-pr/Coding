#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &a)
{
    
    int max_so_far = a[0], max_tn = a[0], min_tn = a[0];
    for (int i = 1; i < a.size(); i++)
    {

        if(a[i]<0)
            swap(max_tn,min_tn);

        max_tn = max(a[i], a[i]*max_tn);
        min_tn = min(a[i],a[i]*min_tn);

        max_so_far = max(max_so_far, max_tn);
    }
    return max_so_far;
}

int main()
{
    vector<int> vect;
    vect.push_back(-2);
    vect.push_back(-3);
    vect.push_back(4);
    vect.push_back(-1);
    vect.push_back(-2);
    vect.push_back(1);
    vect.push_back(5);
    vect.push_back(-3);
    int res = maxSum(vect);
    cout << res;
    return 0;
}