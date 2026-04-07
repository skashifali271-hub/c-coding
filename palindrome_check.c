#include <stdio.h>

int main() {
    printf("Enter number: ");
    int num, i = 0;
    scanf("%d", &num);

    int a[10];

    while (num != 0) {
        a[i] = num % 10;
        num = num / 10;
        i++;
    }

    int isPalindrome = 1;

    for (int j = 0; j < i / 2; j++) {
        if (a[j] != a[i - 1 - j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
