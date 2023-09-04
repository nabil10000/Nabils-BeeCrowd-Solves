#include<stdio.h>
int main ()
{
char a,b,c,d,e,f;
scanf("%c %c%*c%c%c%*c%c %c",&a,&b,&c,&d,&e,&f);
printf("%c%c/%c%c/%c%c\n",c,d,a,b,e,f);
printf("%c%c/%c%c/%c%c\n",e,f,c,d,a,b);
printf("%c%c-%c%c-%c%c\n",a,b,c,d,e,f);
return 0 ;
}
