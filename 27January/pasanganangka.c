#include <stdio.h>

int main() {
  int arr[] = {2, 4, 6, 8, 10, 12};
  int i, j, sum;

  for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    for (j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++) {
      sum = arr[i] + arr[j];

      if (sum == 16) {
        printf("%d + %d\n", arr[i], arr[j]);
      }
    }
  }

  return 0;
}
