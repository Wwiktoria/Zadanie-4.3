#include <stdio.h>
#include <time.h>

int main(void) {
  int a;
  int b;
  printf("Witaj w Za dużo! Za mało!\nWybierz zakres twojej gry: \n");
  scanf("%d%d",&a,&b);
  time_t t;
  srand((unsigned) time(&t));
  int liczba = a + rand() % (b - a);
  printf("Twoja liczba została wylosowana! Możesz rozpocząć grę!");
  do {
    printf()
  }

  
  
  return 0;
}