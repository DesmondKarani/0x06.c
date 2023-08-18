#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char password[7] = "aaaaaa";
    char command[50] = "./crackme2 ";
    int result;

    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = 'a'; b <= 'z'; b++) {
            for (char c = 'a'; c <= 'z'; c++) {
                for (char d = 'a'; d <= 'z'; d++) {
                    for (char e = 'a'; e <= 'z'; e++) {
                        for (char f = 'a'; f <= 'z'; f++) {
                            password[0] = a;
                            password[1] = b;
                            password[2] = c;
                            password[3] = d;
                            password[4] = e;
                            password[5] = f;

                            strcpy(command + 10, password);
                            result = system(command);

                            if (result == 0) {
                                printf("Password found: %s\n", password);
                                return 0;
                            }

                            for (int i = 0; i < 6; i++) {
                                if (password[i] >= 'a' && password[i] <= 'z') {
                                    password[i] = '0';
                                } else if (password[i] >= '0' && password[i] <= '9') {
                                    password[i]++;
                                    break;
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
