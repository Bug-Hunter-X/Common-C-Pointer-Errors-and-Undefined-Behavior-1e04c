#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifies x
  int y = *ptr; // y becomes 20

  int arr[] = {1, 2, 3, 4, 5};
  int *arrPtr = arr; // arrPtr points to the first element of arr
  *arrPtr = 10; // Modifies the first element of arr (arr[0])
  int z = *(arrPtr + 2); // z becomes 3 (arr[2])

  //Safe pointer usage
  int *p = (int *)malloc(sizeof(int)); // Allocate memory dynamically
  if (p == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  *p = 5; 
  free(p); // Free dynamically allocated memory
  p = NULL; // Set pointer to NULL after freeing

  return 0;
}