//
// Created by Aung Naing Thu on 12/29/2024.
//

#include <stdio.h>
#include <string.h>

char arr[20][4][20]={
  {"", "", "", ""}
};

void readFromFile();

int main() {
  readFromFile();


  return 0;
  }

void readFromFile() {
  FILE *file;
  file = fopen("contact.txt", "r");
  if (file == NULL) {
    printf("File not found\n");
  }

  int i = 1; // Start after the header row.
  while (i < 20 && fscanf(file, "%s %s %s %s", arr[i][0], arr[i][1], arr[i][2], arr[i][3]) == 4) {

    i++;
    }

  fclose(file); // Close the file.

  // Display the contents of the array.
  printf("Records in the array:\n");
  for (int j = 0; j < i; j++) {
    printf("%s %s %s %s\n", arr[j][0], arr[j][1], arr[j][2], arr[j][3]);
  }
}

//void writeToFile() {
//    FILE* file = fopen("contact.txt", "w");
//
//    if (file == NULL) {
//        printf("File does not exist!\n");
//        return;
//    }
//
//    printf("The file is created successfully.\n");
//
//    char arr[] = {'a', 'b', 'c', 'd'};
//    size_t arrSize = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements in the array
//
//    /// Write the array to the file as text
//    for (size_t i = 0; i < arrSize; i++) {
//        fprintf(file, "%c\t", arr[i]); // Write each number on a new line
//    }
//
//    printf("Data written to file successfully.\n");
//
//    fclose(file);
//}