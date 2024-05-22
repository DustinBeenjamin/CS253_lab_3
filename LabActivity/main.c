#include <stdio.h>
#include <math.h>

int main(void) {

   float height, width, wall_area, num_gallons;
   int feet_squared_per_gallon = 350;

   printf("Enter the wall height (feet).\n");
   scanf("%f", &height);
   printf("Enter the wall width (feet).\n");
   scanf("%f", &width);

   wall_area = width * height;
   num_gallons = wall_area / feet_squared_per_gallon;

   printf("Wall Area: %0.2f ft^2\n", wall_area);
   printf("Gallons required: %0.2f\n", num_gallons);
   printf("%d can(s) are needed to paint the wall.\n", (int) roundf(num_gallons));
   
   return 0;
}