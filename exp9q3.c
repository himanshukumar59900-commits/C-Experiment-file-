#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256];  // Buffer to store each line (adjust size as needed)
    
    // Open file in read mode (change "input.txt" to your filename)
    file = fopen("input.txt", "r");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }
    
    // Read and display each line
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    // Close the file
    fclose(file);
    return 0;
}
