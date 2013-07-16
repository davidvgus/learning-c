#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  if (c == EOF){
    printf("End of File\n");
  }

  printf("%d\n", EOF);
}
