#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check if the input values can form a triangle
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valido-");
        
        // Determine triangle type
        if (a == b && b == c) {
            printf("Equilatero\n");
        } else if (a == b || b == c || a == c) {
            printf("Isoceles\n");
        } else {
            printf("Escaleno\n");
        }
        
        // Check if it's a right-angled triangle
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }
    } else {
        printf("Invalido\n");
    }

    return 0;
}

