#include <stdio.h>
#include <stdlib.h>

extern int func1(int, int);
extern int func2(int, int);
extern int func3(int, int);

void usage(char *argv0) {
    fprintf(stderr, "Usage: %s <x> <y>\n", argv0);
    return;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        usage(*argv);
        return EXIT_FAILURE;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = func2(x, y);
    printf("f(x,y) = %d\n", z);
    return EXIT_SUCCESS;
}
