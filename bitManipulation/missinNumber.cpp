#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int sum = (n)*(n+1)/2;
        for(const int& it: nums) ans += it;

        return sum-ans;
}
int main() {
  vector<int> vec = {3,2,1,4,6};
  cout << missingNumber(vec);
}

