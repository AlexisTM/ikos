// SAFE
#include <stdint.h>

// all zeros

extern void __ikos_assert(int);
extern int __ikos_unknown();

int main() {
  int a[10];
  int64_t i;

  for (i = 0; i < 10; i++)
    a[i] = 0;

  __ikos_assert(a[9] == 0);
  return 42;
}
