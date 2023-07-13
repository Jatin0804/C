/*#include<stdio.h>
#include<string.h>
//#include<f.h>

int main(void)
{
   char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;

   FILE *filep;
   filep=fopen("Test.txt","a");

   char str[100];
   printf("Enter strings : ");
   scanf("%s",str);

   if(filep==NULL)
   {
       printf("Test.c failed to open.");
   }
   else
   {
       printf("The file is opened .");

       if(strlen(str)>0)
       {
           fputs(str,filep);
           fputs("\n",filep);
       }
       printf("Data Successfully written.");
   }
   fclose(filep);

   fileo=fopen("Test.txt","r");
   int flag=0,i;
   for(i = 0; i < 32; i++)
    {
      if(strcmp(str,keyword[i])==0)
      {
         flag++;

      }
   }
   printf("Total number of keywords : %d",flag);

   fclose(filep);
}

int Search_in_File(char *fname, char *str) {
	FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];

	gcc users
	if((fp = fopen(fname, "r")) == NULL) {
		return(-1);
	}

	//Visual Studio users
	if((fopen_s(&fp, fname, "r")) != NULL) {
		return(-1);
	}

	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
			printf("A match found on line: %d\n", line_num);
			printf("\n%s\n", temp);
			find_result++;
		}
		line_num++;
	}

	if(find_result == 0) {
		printf("\nSorry, couldn't find a match.\n");
	}

	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
   	return(0);
}
*/

