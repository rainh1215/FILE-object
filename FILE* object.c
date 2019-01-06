#include <stdio.h>
#include <string.h>

int main() {

    char* fl_name;

   printf("Enter a file name to read: ");

   scanf("%s", fl_name);

    if(strncmp(fl_name, "cat.txt", 7) == 0) {
        FILE* ptr = fopen(fl_name, "r");

        char c;

        while((c = fgetc(ptr)) != EOF) {
            printf("%c", c);
        }

    }

    if(!strncmp(fl_name, "cat.txt", 7) == 0) {
        printf("no input file found\n");
    }

    if(fl_name = NULL) {
        printf("null\n");
    }

}
