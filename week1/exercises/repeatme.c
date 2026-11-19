#include <stdio.h>

int main() {

    char word[100];

    printf("Enter a word\n");

    if (scanf("%99s", word) ==1) {
        printf("Here is your word twice\n");
        for (int i=0; i<2; i++) {
            printf("%s\n", word);
        }
    }
    else {
        printf("Wrong number of arguments\n");
    }
}