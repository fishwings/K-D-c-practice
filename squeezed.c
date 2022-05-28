#include <stdio.h>


void dtls (char s[], int i);
void squ(char s1[], char s2[]);
int main()
{
   char s1[] = "12345";
   char s2[] = "34";
   squ(s1,s2);
   printf("%s",s1);
   return 0;
}

void squ(char s1[], char s2[]) 
{
  int i , j;
  int instr2 = 0;
  for (int i = j = 0; s1[i] != '\0'; i++)
  {
    instr2 = 0; 
    for (int k = 0; s2[k] != '\0' && !instr2; k++)
    {
        if (s2[k] == s1[i])
        {
            instr2 = 1;
        }

        
    }
    if (!instr2)
    {
        s1[j++] = s1[i];
    }
       
  }
  s1[j] = '\0';
}
