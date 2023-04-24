#include <stdio.h>  
#include <string.h>
int main()      
{  
char ch;  
int lc=0;  
int uc=0;  
int dig=0; 
printf("Enter the charcters : ");
scanf("%s",ch); 
while(ch!='*')  
{  
if(ch>='a'&&ch<='z')
{  
lc++;  
}
else if(ch>='A'&&ch<='Z')  
{
uc++;  
}
else (ch>=0) 
{
dig++;  
}  
}
printf("lowercase: %d, uppercase: %d, digits: %d\n", lc, uc, --dig);  
return 0;  
}

