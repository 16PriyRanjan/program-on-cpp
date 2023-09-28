#include <string>

using namespace std;

string longestPalindrome(string s) {
  int n = s.length();
  bool dp[n][n];
  string ans = "";

  // Initialize the dp table.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      dp[i][j] = false;
    }
  }

  // Fill up the dp table.
  for (int l = 0; l < n; l++) {
    for (int i = 0; i < n - l; i++) {
      int j = i + l;

      if (s[i] == s[j] && (l <= 1 || dp[i + 1][j - 1])) {
        dp[i][j] = true;

        if (l + 1 > ans.length()) {
          ans = s.substr(i, l + 1);
        }
      }
    }
  }

  return ans;
}

int main() {
  string s = "babad";

  string longestPalindrome = longestPalindrome(s);

  cout << "The longest palindromic substring is: " << longestPalindrome << endl;

  return 0;
}
