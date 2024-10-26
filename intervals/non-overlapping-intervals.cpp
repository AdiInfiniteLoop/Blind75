#include <bits/stdc++.h>
using namespace std;

bool static cmp(const vector<int> &a, const vector<int> &b) {
        return a[1] < b[1]; 
    }
    int eraseOverlapIntervals(vector<vector<int>>& i) {
        sort(begin(i), end(i), cmp);
        int ans(0);
        if(i.empty()) return 0;
        int pend = i[0][1];
        for(int x = 1; x < size(i); ++x) {
            if(i[x][0] < pend) ans++;
            else pend = i[x][1];
        }
        return ans;
    }

int main() {
  vector<vector<int>> vec = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
  cout << eraseOverlapIntervals(vec);
}
