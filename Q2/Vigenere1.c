#include <stdio.h> 
#include <string.h> 

int main() {
    int i;
    char ciphertext[100];
    char key[25];
    int key1[25];
    printf("key 값 입력: ");
    gets(key);
    for (i = 0; i < strlen(key); i++) {
        if (key[i] >= 'a' && key[i] <= 'z') {
            key1[i] = key[i] - 'a';
        }
        else if (key[i] >= 'A' && key[i] <= 'Z') {
            key1[i] = key[i] - 'A';
        }
        else key1[i] = key[i] % 26;
    }
    printf("평문 입력 : ");
    gets(ciphertext);
    for (i = 0; i < strlen(ciphertext); i++) {
        if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
            ciphertext[i] = ((ciphertext[i] - 'a' + key1[i % strlen(key)]) % 26) + 'a';
        }
        else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
            ciphertext[i] = ((ciphertext[i] - 'A' + key1[i % strlen(key)]) % 26) + 'A';
        }
    }
    printf("암호문 = %s\n", ciphertext);
    return 0;
}