#include <stdio.h>

int main(int argc, char **argv) {
    int n;
    sscanf(argv[1], "%d",&n);
    for (int i = 0; i < n; i++){
        int num = 2 * n - 2 * i;
        for (int j = 0; j < num/2; j++){
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++){
            printf("*");
        }
        puts("");
    }
    return 0;
}