#include <stdio.h>
int main()
{
  char c;
  c = getchar();
  int i, k;
  for(i=0, k=65;i<26;i++,k++){
      if(c==k){
        break;
      }
  }
  printf("%d\n",++i);
  return 0;
}
