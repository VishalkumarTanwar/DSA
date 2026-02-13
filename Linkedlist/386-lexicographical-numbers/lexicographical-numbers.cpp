class Solution {
public:
    vector<int> result;

    void solve(int curr, int n) {
        if (curr > n) return;   
          result.push_back(curr);

    for (int i = 0; i <= 9; i++) {
        int appended = curr * 10 + i;
        if (appended > n) return;
       solve(appended, n);
        }
    }

    vector<int> lexicalOrder(int n) {
          for (int i = 1; i <= 9; i++) {
           solve(i, n);
        }
        return result;
    }
};