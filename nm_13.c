#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;

    printf("Enter size in Bytes: ");
    scanf("%lf", &bytes);

    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);

    printf("\n%.2lf Bytes = %.2lf KB", bytes, kb);
    printf("\n%.2lf Bytes = %.2lf MB", bytes, mb);
    printf("\n%.2lf Bytes = %.2lf GB\n", bytes, gb);

    return 0;
}
