#include <stdio.h>

int main() {
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'a':
        case 'A': 
            printf("Very Good\n");
            break;
        case 'b':
        case 'B': 
            printf("Good\n");
            break;
        case 'c':
        case 'C': 
            printf("Fair\n");
            break;
        default: 
            printf("No good!\n");
    }
    
    return 0;
}
