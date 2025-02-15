int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifies x
  int y = *ptr; // y becomes 20

  int arr[] = {1, 2, 3, 4, 5};
  int *arrPtr = arr; // arrPtr points to the first element of arr
  *arrPtr = 10; // Modifies the first element of arr (arr[0])
  int z = *(arrPtr + 2); // z becomes 3 (arr[2])

  // Example of undefined behavior
  int *p = NULL; 
  *p = 5; // Dereferencing a NULL pointer leads to undefined behavior

  return 0;
}