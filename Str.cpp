#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char dest[50];

    strcpy(dest, "コピーされたやつ");
    printf("cpy: %s\n", dest);
    printf("length: %lu\n", strlen(dest));

    strcat(dest, dest);
    printf("cat: %s\n", dest);

    printf("length: %lu\n", strlen(dest));

    char* x = strcat(dest, "abc");
    printf("cat: %s\n", dest);
    printf("x: %s\n", x);

    printf("length: %lu\n", strlen(dest));

    char* y = strchr(dest, 'a');
    printf("y: %s\n", y);

    char* z = strstr(dest, "され");
    printf("z: %s\n", z);

}
