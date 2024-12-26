#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: "); // Use straight quotation marks
    scanf("%d", &age); // Use straight quotation marks
    
    if (age < 0 || age > 150)
    {
        printf("Your age is not valid!\n"); // Use straight quotation marks
    }
    
    printf("Goodbye\n"); // Use straight quotation marks
    return 0;
}
