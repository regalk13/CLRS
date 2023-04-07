#include <stdio.h>

void insertion_sort(int A[], int n) {
  for (int j = 1; j < n; j++) {
      int key = A[j];

      int i = j - 1;

      while (i >= 0 && A[i] > key) {
          A[i + 1] = A[i];
          i -= 1;
      }
      A[i + 1] = key;
  } 
}

void decre_insertion_sort(int A[], int n) {
  for (int j = 1; j < n; j++) {
      int key = A[j];

      int i = j - 1;

      while (i >= 0 && A[i] < key) {
          A[i + 1] = A[i];
          i -= 1;
      }
      A[i + 1] = key;
  } 
}
int main(void) {
    int A[] = {5, 2, 4, 6, 1, 3};

    insertion_sort(A, 6);

    for (int i = 0; i < 6; i++) {
        printf("Value in index[%d]: %d\n", i, A[i]);
    }

        
    decre_insertion_sort(A, 6);

    for (int i = 0; i < 6; i++) {
        printf("Value in index[%d]: %d\n", i, A[i]);
    }
    
    return 0;  
}
