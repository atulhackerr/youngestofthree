/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.
*/





#include <stdio.h>

int main() {
    int ramAge, shyamAge, ajayAge;

    // Taking input from the user
    printf("Enter the age of Ram: ");
    scanf("%d", &ramAge);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyamAge);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ajayAge);

    // Determine the youngest among Ram, Shyam, and Ajay
    if (ramAge <= shyamAge && ramAge <= ajayAge) {
        printf("Ram is the youngest.\n");
    } else if (shyamAge <= ramAge && shyamAge <= ajayAge) {
        printf("Shyam is the youngest.\n");
    } else {
        printf("Ajay is the youngest.\n");
    }

    return 0;
}

