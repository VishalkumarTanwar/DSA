class Solution {
public:
   double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    vector<int> c;

    for (int x : a) c.push_back(x);
    for (int x : b) c.push_back(x);

    sort(c.begin(), c.end());

    int n = c.size();
    if (n % 2 == 1)
        return c[n / 2];
    else
        return (c[n/2 - 1] + c[n/2]) / 2.0;
}

};