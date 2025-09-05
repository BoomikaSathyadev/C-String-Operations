#include <stdio.h>
#include <string.h>

// Funtion to find length of string
int findLength(char str[]) {
    return strlen(str);
}

// Function to extract substring
void getSubstring(char str[], int start, int count) {
    char sub[100];
    int i;
    for (i = 0; i < count && (start + i) < strlen(str); i++) {
        sub[i] = str[start + i];
    }
    sub[i] = '\0';
    printf("Substring: %s\n", sub);
}

// Function to reverse string
void reverseString(char str[]) {
    int len = strlen(str);
    char rev[100];
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed String: %s\n", rev);
}

int main() {
    char str[100];
    int choice, start, count;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n--- MENU ---\n");
        printf("1. Find length of the string\n");
        printf("2. Get substring (start index & count)\n");
        printf("3. Reverse the string\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Length of the string: %d\n", findLength(str));
                break;
            case 2:
                printf("Enter start index: ");
                scanf("%d", &start);
                printf("Enter number of characters: ");
                scanf("%d", &count);
                getSubstring(str, start, count);
                break;
            case 3:
                reverseString(str);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;

}