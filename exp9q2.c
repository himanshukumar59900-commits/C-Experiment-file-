#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Ask user for file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // 1) Create a new file and write text into it
    fp = fopen(filename, "w");   // "w" = create for writing
    if (fp == NULL) {
        printf("Error: Cannot create file.\n");
        return 1;
    }

    // Clear input buffer (to ignore leftover newline from scanf)
    getchar();

    printf("Enter text to write (press ENTER to finish):\n");

    // Read characters from keyboard and write to file until user presses Enter
    while ((ch = getchar()) != '\n') {
        fputc(ch, fp);          // write one character to file
    }

    fclose(fp);                 // close the file after writing

    // 2) Open existing file and read its content character by character
    fp = fopen(filename, "r");  // open for reading
    if (fp == NULL) {
        printf("Error: Cannot open file for reading.\n");
        return 1;
    }

    printf("\nContents of the file:\n");

    // Read and display file contents character by character
    while ((ch = fgetc(fp)) != EOF) {   // EOF = end of file
        putchar(ch);                    // print character to screen
    }

    fclose(fp);   // close the file after reading

    return 0;
}
