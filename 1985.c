#include <stdio.h>

int main()
 {
    int menu[] = {1001, 1002, 1003, 1004, 1005},code, quantity;
    double prices[] = {1.50, 2.50, 3.50, 4.50, 5.50};

    int p;
    scanf("%d", &p);

    double total = 0.0;

    for (int i = 0; i < p; i++) {

        scanf("%d %d", &code, &quantity);

        for (int j = 0; j <4; j++) {
            if (code == menu[j]) {
                total += prices[j] * quantity;
                break;
            }
        }
    }

    printf("%.2lf\n", total);

    return 0;
}
