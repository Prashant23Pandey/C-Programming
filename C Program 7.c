#include <stdio.h>

int main() {
  float base, height, area;
  printf("Enter the base of the right-angled triangle: ");
  scanf("%f", &base);
  printf("Enter the height of the right-angled triangle: ");
  scanf("%f", &height);
  area = (base * height) / 2.0;
  printf("Area of the right-angled triangle is: %f\n", area);
  return 0;
}