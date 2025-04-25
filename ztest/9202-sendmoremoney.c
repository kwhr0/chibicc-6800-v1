//
// This code is based on the "SEND + MORE = MONEY" solution
// from Rosetta Code (https://rosettacode.org/wiki/SEND_%2B_MORE_%3D_MONEY).
//
// Copyright (C) [Year] [Author's Name or Your Name]
// This code is licensed under the GNU Free Documentation License (GFDL) v1.3
// You may copy, modify, and distribute this code under the terms of the GFDL v1.3.
//
// A copy of the GFDL v1.3 license is available at:
// https://www.gnu.org/licenses/old-licenses/fdl-1.3.html
//


#include "common.h"

#define	p(x)	putchar(x+'0');
#define	c(x)	putchar(x);

int main() {
  int m = 1, s, e, n, d, o, r, y, sum1, sum2;
//const char *f = "%d%d%d%d + %d%d%d%d = %d%d%d%d%d\n";
  for (s = 8; s < 10; ++s) {
    for (e = 0; e < 10; ++e) {
      if (e == m || e == s) continue;
      for (n = 0; n < 10; ++n) {
        if (n == m || n == s || n == e) continue;
        for (d = 0; d < 10; ++d) {
          if (d == m || d == s || d == e || d == n) continue;
          for (o = 0; o < 10; ++o) {
            if (o == m || o == s || o == e || o == n || o == d) continue;
            for (r = 0; r < 10; ++r) {
              if (r == m || r == s || r == e || r == n || r == d || r == o) continue;
              for (y = 0; y < 10; ++y) {
                if (y == m || y == s || y == e || y == n || y == d || y == o) continue;
                sum1 = 1000*s + 100*e + 10*n + d + 1000*m + 100*o + 10*r + e;
                sum2 = 10000*m + 1000*o + 100*n + 10*e + y;
                if (sum1 == sum2) {
//                  printf(f, s, e, n, d, m, o, r, e, m, o, n, e, y);
                  p(s);p(e);p(n);p(d);c('+');
		  p(m);p(o);p(r);p(e);c('=');
		  p(m);p(o);p(n);p(e);p(y);c('\n');
                }
              }
            }
          }
        }
      }
    }
  }
  cpu_counter();
  return 0;
}
