#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool can(int x, int y, int n) {
  x = abs(x);
  y = abs(y);
  return (x + y) % 2 == n % 2 && x + y <= n;
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int x, y;
  cin >> x >> y;
  if (!can(x, y, n)) {
    cout << "-1" << endl;
    return 0;
  }
  int r = n;
  int l = -1;
  while (r - l > 1) {
    int m = (l + r) / 2;
    int lx = 0;
    int ly = 0;
    int rx = 0;
    int ry = 0;
    for (int i = m; i < n; i++) {
      if (s[i] == 'U') ry++;
      if (s[i] == 'D') ry--;
      if (s[i] == 'L') rx--;
      if (s[i] == 'R') rx++;
    }
    bool ok = false;
    for (int i = 0; i + m <= n; i++) {
      ok |= can(x - lx - rx, y - ly - ry, m);
      if (s[i] == 'U') ly++;
      if (s[i] == 'D') ly--;
      if (s[i] == 'L') lx--;
      if (s[i] == 'R') lx++;
      if (i + m < n) {
        if (s[i+m] == 'U') ly--;
        if (s[i+m] == 'D') ly++;
        if (s[i+m] == 'L') lx++;
        if (s[i+m] == 'R') lx--;
      }
    }
    if (ok) {
      r = m;
    } else {
      l = m;
    }
  }
  cout << r << endl;
}
