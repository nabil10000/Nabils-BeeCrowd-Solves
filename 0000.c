#include<stdio.h>
int main() {
   int letters[26];

  letters[0] = 97;

  for (int i = 1; i < 26; i++) {
    letters[i] = letters[i - 1] + 1;
  }

for (int i = 0; i < 26; i++) {
    printf("%d  e %c\n", letters[i], letters[i]);
  }

  return 0;
}
