#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* encryptFun(const char* text, int shift);
char* decryptFun(const char* text, int shift);

int main() {
  int shift = 3; // Example shift value
  char inputText[2000];
  printf("Enter text: ");
  fgets(inputText, sizeof(inputText), stdin);
  printf("\n");

  inputText[strcspn(inputText, "\n")] = 0;

  //Function call to encrypt data
  char* encryptKey = encryptFun(inputText, shift);
  printf("Encrypted key: %s\n", encryptKey);

  //Function call to decrypt data
  char* decryptKey = decryptFun(encryptKey, shift);
  printf("Decrypted key: %s\n", decryptKey);

  return 0;
}

char* encryptFun(const char* text, int shift) {
  static char result[2000];

  for (int i = 0; text[i] != '\0'; i++) {
    char c = text[i];
    if (isalpha(c)) {
      if (isupper(c)) {
        result[i] = ((c - 'A' + shift) % 26) + 'A'; // Encrypt uppercase
      } else {
        result[i] = ((c - 'a' + shift) % 26) + 'a'; // Encrypt lowercase
      }
    } else {
      result[i] = c; // Non-alphabetic characters remain unchanged
    }
  }
  result[strlen(text)] = '\0'; // Null-terminate the result
  return result;
}

char* decryptFun(const char* text, int shift) {
  static char result[2000];

  for (int i = 0; text[i] != '\0'; i++) {
    char c = text[i];
    if (isalpha(c)) {
      if (isupper(c)) {
        result[i] = ((c - 'A' - shift + 26) % 26) + 'A'; // Decrypt uppercase
      } else {
        result[i] = ((c - 'a' - shift + 26) % 26) + 'a'; // Decrypt lowercase
      }
    } else {
      result[i] = c; // Non-alphabetic characters remain unchanged
    }
  }
  result[strlen(text)] = '\0'; // Null-terminate the result

  return result;
}
