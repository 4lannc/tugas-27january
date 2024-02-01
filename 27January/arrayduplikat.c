#include <stdio.h>

int main() {
  int arr[] = {20, 20, 10, 3, 6, 7, 8, 10, 3, 5, 5};
  int i, j, count;

  for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    count = 1;

    for (j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }

    if (count > 1) {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}
