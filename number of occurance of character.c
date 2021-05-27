//number.






#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,integer,character[100],ch;
	scanf("%s",character);
	for(integer=0;integer<strlen(character);integer = integer+2)
	{
		if(character[integer]>='A')    // checking for the character or number 
		{
			ch = character[integer];
		}
		if(character[integer]>='0' && character[integer]<='9') //if the string is number then count the number
		{
			count = (count*10)+ (character[integer]-'0');
		}
		if(character[integer+1]>='0' && character[integer+1]<='9') // checking for the next character is number or not
		{
			count = (count*10)+(character[integer+1] - '0');
		}
		while(count--)  // based on the count printing the number of occurance of charactere
		{
			printf("%c",ch);
		}
		count=0;
	}
	return 0;
}