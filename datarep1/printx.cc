#include <cstdio>
#include "hexdump.hh"

/*
int main() {
    int x = 0;
    fprintf(stdout, "%d\n", x);

    x = x + 1;
    fprintf(stdout, "%d\n", x);
}
*/

int main() {
    int x = 0;
    fprintf(stdout, "%d\n", x);
    hexdump_object(x);

    x += 15;
    fprintf(stdout, "%d\n", x);
    hexdump_object(x);
} 

