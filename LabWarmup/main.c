#include <stdio.h>
#include <math.h>
#define MAX_STRING_SIZE 100

int main(void) {
   int i;
   double d;
   char c;
   char s[MAX_STRING_SIZE];
   
   printf("Enter an integer.\n");
   scanf("%d", &i);
   
   printf("Enter a double.\n");
   scanf("%lf", &d);

   printf("Enter a character.\n");
   getchar();
   scanf("%c", &c);

   printf("Enter a string.\n");
   scanf("%s", s);

   printf("You entered:\t%d\t%lf\t%c\t%s\n", i, d, c, s);
   printf("%lf as an int is %d\n", d, (int) d);
}

//An excellent exercise that shows the importance of error checking.