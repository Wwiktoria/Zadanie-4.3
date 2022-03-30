#include <stdio.h>
#include <time.h>

int main(void) {
  int a;
  int b;
  int c;
  int licznik=0;
  printf("Witaj w Za dużo! Za mało!\nWybierz zakres twojej gry: \n");
  scanf("%d%d",&a,&b);
  time_t t;
  srand((unsigned) time(&t));
  int liczba = a + rand() % (b - a);
  printf("Twoja liczba została wylosowana! Możesz rozpocząć grę!\n");
  printf("liczba %d", liczba);
  do 
  {
    printf("Wprowadź liczbę: ");
    scanf("%i", &c);
    licznik+=1;
      if (liczba==c)
      {
        printf("Wygrałeś udało ci się za %d razem!",licznik); 
      } 
      else if (liczba<c)
      {
        printf("Za dużo!"); 
      }
      else
      {
      printf("Za mało!");
      }
 }while (liczba!=c);
    
  return 0;
}