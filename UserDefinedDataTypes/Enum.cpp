#include <stdio.h>
enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    enum Weekday today;
    today = Wednesday;

    printf("Day %d\n", today);
    return 0;
}
