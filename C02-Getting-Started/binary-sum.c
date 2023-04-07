#include <stdio.h>


void binary_sum(int A[], int B[], int C[], int n) {
  int carry = 0;
  int i = 0;

  for (i = 0; i < n; i++) {
    int sum = A[i] + B[i] + carry;
    C[i] = sum % 2;
    carry = sum / 2;
  }
  
  C[i-1] = carry;
}

int main() {
  int A[] = {1, 1, 1, 0};
  int B[] = {1, 1, 1, 1};
  int n = 4;
  int C[n+1];

  binary_sum(A, B, C, n);
  
  for (int i = 0; i < 5; i++) {
    printf("Element: %d\n", C[i]);
  }
  
  return 0;
}
