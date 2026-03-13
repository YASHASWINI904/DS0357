#include <stdio.h>

int main() {
    int n, i, num;

    // Ask the user how many numbers they want to enter
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Loop to read each number
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Check if the number is odd or even
        if(num % 2 == 0) {
            printf("%d is Even\n", num);
        } else {
            printf("%d is Odd\n", num);
        }
    }

    return 0;
}


