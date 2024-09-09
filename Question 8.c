#include <stdio.h>

int main() {
    int hour;

    printf("Enter the hour (0-23): ");
    scanf("%d", &hour);
    if (hour < 0 || hour > 23) {
        printf("Invalid hour. Please enter a value between 0 and 23.\n");
    } else {
        if (hour >= 5 && hour < 12) {
            printf("Good Morning\n");
        } else if (hour >= 12 && hour < 19) {
            printf("Good Evening\n");
        } else {
            printf("Good Night\n");
        }
    }

    return 0;
}
