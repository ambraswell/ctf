#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* easy_flag();
//char flag[30];



int main()
{
	//printf(easy_flag());
	return 0;
}

char* easy_flag()
{
	char *flag;
	flag = malloc (sizeof (char) * 30);
	
	strcpy(flag, "iodj{\\rx#kdyh#irxqg#wkh#iodj}");
	for(int i = 0; (i < 30 && flag[i] != '\0'); i++)
	{
			
		if(flag[i] != '{' && flag[i] != '}')
		{
        		flag[i] = flag[i] - 3; 
		}
	}
      	//printf("\nDecrypted string: %s\n", flag);

	return flag;
}	

/*
char* easy_flag()
{
	strcpy(flag, "iodj{\\rx#kdyh#irxqg#wkh#iodj}");
	for(int i = 0; (i < 30 && flag[i] != '\0'); i++)
	{
			
		if(flag[i] != '{' && flag[i] != '}')
		{
        		flag[i] = flag[i] - 3; 
		}
	}
      	//printf("\nDecrypted string: %s\n", flag);

	return (char* )flag;
}
*/