#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    char str[100];
    int i,vowCount=0,consCount=0, numCount=0;
    cout<<"Enter string:\n";
    gets(str);//store the input from user
    for(i=0; str[i]; i++)
	{
    	if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'
   		||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' )
			{
        		vowCount++;//vowel counter incremented by 1
  			}
    	else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' ))
			{
     		   consCount++;//consonant counter incremented by 1
    		}
   		else if(str[i] == '0'|| str[i] == '1'|| str[i] == '2'|| str[i] == '3'|| str[i] == '4'
    	||str[i] == '5'|| str[i] == '6'|| str[i] == '7'|| str[i] == '8'|| str[i] == '9' )
    		{
    			numCount++;
			}
	}

  
cout<<"Vowel/s: "<<vowCount<<endl;
cout<<"Consonant/s: "<<consCount<<endl;
cout<<"Number/s: "<<numCount<<endl;
getch();
    return 0;
}
