#include <stdio.h>





int main(int argc, char* argv[]) {
    if (argc != 2){
        printf("Wrong number of inputs\n");
        return 1;
    }

    if (argv[1][0] == 'A') {
        printf("No beginning A's are allowed\n");
    } 
    else {
        printf("%s\n",argv[1]);
    }




}