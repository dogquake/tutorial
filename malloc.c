#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
http://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm
*/
int main()
{
   char  *str;
   int   dwTest = 0x400;
   int   *pInteger;


   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = 0x%X\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = 0x%X\n", str, str);

   free(str);

   /* Now Integer */
   // Now pInteger has been assigned a value (address of dwTest),
   // where previously it was NULL
   printf("Pointer initialised? %x\n", pInteger);

   // Now pInteger has been assigned a value (address of dwTest),
   // where previously it was NULL
   pInteger = &dwTest;
   printf("Integer = 0x%X, Address = 0x%X\n", *pInteger, pInteger);

   *pInteger = 0x800;
   printf("Integer = 0x%X, Address = 0x%X\n", *pInteger, pInteger);
   
   return 0;
}