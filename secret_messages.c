#include <stdio.h>
#include <string.h>

void encrypt_message();
void decrypt_mesage();

int vowels(char vowelLetters){
  switch(vowelLetters){
    case'a':
    case'A':
    case'i':
    case'I':
    case'e':
    case'E':
    case'u':
    case'U':
    case'o':
    case'O':
  return 1;
  }
return 0;
}

int main()
{

  char userInput[150];
  char choosingED;
  while( choosingED == 0){
  printf("What would you like to do? (Enter E for encrypt or D for decrypt): ");
  scanf("%s", &choosingED);
  fgetc(stdin);

  if (choosingED == 'E'){
     encrypt_message();
 }else if(choosingED == 'D'){
     decrypt_mesage();
}
}
}
void encrypt_message(){
   
   char userInput[150];
   int i = 0;
   printf("Enter message: ");
   fgets(userInput, 150, stdin);
   printf("original message: %s", userInput);
   printf("The encrypted messages: ");
   while(userInput[i] != '\0'){
   printf("%c", userInput[i]);
   if(userInput[i] && vowels(userInput[i]))printf("p");
   i+=1;
   }
      printf("\n");
}
void decrypt_mesage(){

   char userInput[150];
   int i = 0;
   printf("Enter message: ");
   fgets(userInput, 150, stdin);
   printf("original message: %s ", userInput);
   printf("The encrypted messages: ");
   while(userInput[i]!='\0'){
   if(userInput[i]=='p' && vowels(userInput[i-1]));
   else printf("%c", userInput[i]);
   i +=1;
   }
      printf("\n");
}

