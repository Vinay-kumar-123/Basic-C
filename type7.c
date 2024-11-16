// write a c program to convert decimal number to binary number using array.

#include <stdio.h>

int main(void){
  int binar[32];
  int i = 0;
  int n;
  while (n > 0) {
    binary[i] = n % 2;
    n = n / 2;
    i++;
  }
  // Print the binary array in reverse order
  printf("Binary representation: ");
  for (int j = i - 1; j >= 0; j--){
    printf("%d", binary[j]);
    printf("\n");
  }
}

int main() {
    int d;
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    
    
}
