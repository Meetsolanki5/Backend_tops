#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
   	gets(str);

    while (str[i] != '\0') {
        char ch = str[i];

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        else if (ch >= '0' && ch <= '9') {
            digits++;
        }

        else {
            special++;
        }

        i++;
    }

    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
