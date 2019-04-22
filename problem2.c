#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char* easy_flag();
//char flag[35];



int main()
{
	char hint[] = "As a rule, men worry more about what they can't see than about what they can.\n";
	printf(hint);
	//printf(easy_flag());

	char *flag;
	flag = malloc (sizeof (char) * 35);
	
	strcpy(flag, "flag{rzq wkh qhw}");
	int key = 315 % 26;
	printf("%d", key);
	/*
	for(int i = 4; (i < 35 && flag[i] != '\0'); i++)
	{
			
		if(flag[i] != '{' && flag[i] != '}' && flag[i] != '!' && flag[i] != ' ')
		{
        		flag[i] = (flag[i] - key) - 26; 
		}
	}
	*/

	
	for(int i = 4; flag[i] != '\0'; ++i){
		if(flag[i] != '{' && flag[i] != '}' && flag[i] != '!' && flag[i] != ' ')
		{
			char ch = flag[i];
			
			if(ch >= 'a' && ch <= 'z'){
				ch = ch - key;
				
				if(ch < 'a'){
					ch = ch + 'z' - 'a' + 1;
				}
				
				flag[i] = ch;
			}
			else if(ch >= 'A' && ch <= 'Z'){
				ch = ch - key;
				
				if(ch < 'A'){
					ch = ch + 'Z' - 'A' + 1;
				}
				
				flag[i] = ch;
			}
		}
		
	}
  
	//printf(flag);

	return 0;
}


	

