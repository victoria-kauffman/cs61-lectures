#include <cstdio>
#include <cassert>
#include <set>
#include "hexdump.hh"

int main() {
    std::set<int> ls;

    // read integers from stdin, storing them in sorted order
    int val;
    while (fscanf(stdin, "%d", &val) == 1) {
        ls.insert(val);
    }

    // print integers in sorted order
    for (auto v : ls) {
        fprintf(stdout, "%d\n", v);
    }
}
