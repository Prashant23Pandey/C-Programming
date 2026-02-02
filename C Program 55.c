#include <stdio.h>
int main() {
    int d;
    scanf("%d", &d);
    char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    if (d >= 1 && d <= 7) printf("%s", days[d-1]);
    return 0;
}