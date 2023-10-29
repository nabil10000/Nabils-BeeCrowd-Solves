#include<stdio.h>

int main(){
    int a,b,c,temp, i,j;
    int n[3];

    scanf("%d %d %d", &a, &b, &c);
    n[0] = a;
    n[1] = b;
    n[2] = c;

    for(i = 0; i < 3; i++){
            for( j = 0; j < 3; j++){
                    if(n[i] < n[j]){
                            temp = n[j];
                            n[j] = n[i];
                            n[i] = temp;
                    }
            }
    }

    printf("%d\n%d\n%d\n", n[0], n[1], n[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
