#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char password[11] = "aaaaaaaaaa";

    // A string that will be used to run the crackme2 program
    char command[50] = "./crackme2 ";

    // A variable to capture the result of the system call
    int result;

    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = 'a'; b <= 'z'; b++) {
            for (char c = 'a'; c <= 'z'; c++) {
                for (char d = 'a'; d <= 'z'; d++) {
                    for (char e = 'a'; e <= 'z'; e++) {
                        for (char f = 'a'; f <= 'z'; f++) {
                            for (char g = 'a'; g <= 'z'; g++) {
                                for (char h = 'a'; h <= 'z'; h++) {
                                    for (char i = 'a'; i <= 'z'; i++) {
                                        for (char j = 'a'; j <= 'z'; j++) {
                                            password[0] = a;
                                            password[1] = b;
                                            password[2] = c;
                                            password[3] = d;
                                            password[4] = e;
                                            password[5] = f;
                                            password[6] = g;
                                            password[7] = h;
                                            password[8] = i;
                                            password[9] = j;

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
                }
            }
        }
    }

    printf("Password not found\n");
    return 1;
}
