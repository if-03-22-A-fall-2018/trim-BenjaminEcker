/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include "string.h"

 void trim(const char* source, char* trimmed_string	)
 {
   if(strcmp((source), "")==0)
   {
     strcpy(trimmed_string, "");
     return;
   }

   int start=0;
   int length=strlen(source);
   while ((source)[start]== ' ')
   {
     start++;
   }
   (source) +=start;
   if(start<length)
   {
     int end = strlen(source)-1;
     while ((source)[end]== ' ')
     {
       end--;
     }
     (source)[end+1] = 0;
   }
   strcpy(trimmed_string,source);
 }
