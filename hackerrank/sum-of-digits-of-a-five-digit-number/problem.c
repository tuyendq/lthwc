/**
* Sum of Digits of a Five Digit Number
* Given a five digit integer, print the sum of its digits.
*/

#include <stdio.h>

int main() {
	
    int n = 0;
    while (n < 10000 || n > 99999) {
      printf("Enter a 5-digit number: ");
      scanf("%d", &n);
      printf("You enter this number: %d\n", n);
    }

    //Complete the code to calculate the sum of the five digits on n.
    
    int sum = 0;
    int remainder = n;
    int last_digit = 0;
    
    while (remainder >= 10) {
        last_digit = remainder % 10;
        sum = sum + last_digit;
        remainder = (remainder - last_digit) / 10;
    }

    sum = sum + remainder;
    printf("%d", sum);
    
    return 0;
}