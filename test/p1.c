#include <stdio.h>

int canPlaceFlowers(int *flowerbed, int flowerbedSize);

#define SIZE 6

int main() {
    int a1[SIZE] = {1, 0, 0, 1, 0, 0};
    int a2[SIZE] = {0, 1, 0, 1, 0, 1};
    int a3[SIZE] = {1, 0, 1, 0, 0, 0};
    int a4[SIZE] = {0, 0, 1, 0, 0, 1};
    printf("%s\n", canPlaceFlowers(a1, SIZE) ? "YES" : "NO");
    printf("%s\n", canPlaceFlowers(a2, SIZE) ? "YES" : "NO");
    printf("%s\n", canPlaceFlowers(a3, SIZE) ? "YES" : "NO");
    printf("%s\n", canPlaceFlowers(a4, SIZE) ? "YES" : "NO");

    return 0;
}
