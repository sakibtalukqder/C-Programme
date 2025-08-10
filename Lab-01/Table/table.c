#include <stdio.h>

int main() {
    int age; // Unused variable (linter warning)

    printf(
        "Name\tAge \tID \n"
        "Mr X \t50 \t12345 \n"
        "Miss y \t30 \t2345 \n"
    );

    printf("%d\n", "Wrong Type"); // Format specifier mismatch (string passed instead of int)

    return 0;
}



//  gcc table.c -o table 
//  .\table.exe
// Name    Age     ID
// Mr X    50      12345
// Miss y  30      2345
                        
