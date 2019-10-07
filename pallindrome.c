#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR F0");
   char text[20], reverse_text[20];
   int i,n, length = 0;

   printf("Enter text: ");
   gets(text);

   for (i = 0; text[i] != '\0'; i++)
   {
      length++;
   }
   for (i = length - 1; i >= 0; i--)
   {
      reverse_text[length - i - 1] = text[i];
   }

   for (n = 1, i = 0; i < length; i++)
   {
      if (reverse_text[i] != text[i])
      n = 0;
   }

   if (n == 1)
      printf("%s is a palindrome.", text);
   else
      printf("%s is not a palindrome", text);

   return 0;
}
