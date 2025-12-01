#include <stdio.h>
int main() {
    FILE *fp = fopen("newfile.txt", "w");  
    if (fp == NULL) {                      
        printf("Error creating file.\n");
        return 1;
    }
    fputs("This is text written to the file.\n", fp); 
    fclose(fp);                                       
    printf("Text written to newfile.txt successfully.\n");
    return 0;
}
