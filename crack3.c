#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char password[7] = "aaaaaa";
    char command[50] = "./crackme2 ";
    int result;

    char chars[] = {'a', 'b', 'c', '1', '2', '3', '4', '5'};

    for (int a = 0; a < 8; a++) {
        for (int b = 0; b < 8; b++) {
            for (int c = 0; c < 8; c++) {
                for (int d = 0; d < 8; d++) {
                    for (int e = 0; e < 8; e++) {
                        for (int f = 0; f < 8; f++) {
                            password[0] = chars[a];
                            password[1] = chars[b];
                            password[2] = chars[c];
                            password[3] = chars[d];
                            password[4] = chars[e];
                            password[5] = chars[f];

                            strcpy(command + 10, password);

                            result = system(command);

                            if (result == 0) {
                                printf("Password found: %s\n", password);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("Password not found\n");
    return 1;
}
