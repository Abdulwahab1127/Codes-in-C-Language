#include <stdio.h>
void reverseSentence();
int main() {
    char str[1000], ch;
    int count = 0;
      char line[150];
  int vowels, consonant, digit, space;

  vowels = consonant = digit = space = 0;
  //frequency
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nEnter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("\nFrequency of %c = %d", ch, count);

 //white spaces and others
  printf("\nEnter a line of string: ");
  fgets(line, sizeof(line), stdin);

  for (int i = 0; line[i] != '\0'; ++i) {


    line[i] = tolower(line[i]);

    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {


      ++vowels;
    }
    else if ((line[i] >= 'a' && line[i] <= 'z')) {
      ++consonant;
    }

    else if (line[i] >= '0' && line[i] <= '9') {
      ++digit;
    }


    else if (line[i] == ' ') {
      ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);

  //reverse
   printf("\n\nEnter a sentence: ");
    reverseSentence();
    //removing characters
    printf("\n\nEnter a string: ");
   fgets(line, sizeof(line), stdin);


   for (int i = 0, j; line[i] != '\0'; ++i) {

      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {


            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(line);

    return 0;
}
void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
