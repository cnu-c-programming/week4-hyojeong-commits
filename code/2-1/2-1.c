#include <stdio.h>

int main() {
    const char* date = "2026-03-24";
    char buffer[64];
    int year, month, day;

    sscanf(date, "%d-%d-%d", &year, &month, &day);
    sprintf(buffer, "%02d/%02d/%02d", month, day, year % 100);

    printf("%s\n", buffer);  
    return 0;
}
