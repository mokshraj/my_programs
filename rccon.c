#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <command>\n", argv[0]);
        return 1;
    }
    // Calculate required buffer size
    size_t len = strlen("mcrcon -H localhost -P 25575 -p 1969 ");
    for (int i = 1; i < argc; ++i) {
        len += strlen(argv[i]) + 1; // +1 for space or null terminator
    }
    char *command = malloc(len);
    if (!command) {
        perror("malloc");
        return 1;
    }
    strcpy(command, "mcrcon -H localhost -P 25575 -p 1969 ");
    for (int i = 1; i < argc; ++i) {
        strcat(command, argv[i]);
        if (i < argc - 1) strcat(command, " ");
    }
    int ret = system(command);
    free(command);
    return ret;
}