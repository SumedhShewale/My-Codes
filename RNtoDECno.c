#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20


void main()
{ 
	
    char str[MAX_LIMIT],l;
    int i,x=0;
    printf("Enter the Roman Numeral\n"); // Take input in a string
    fgets(str, MAX_LIMIT, stdin);
    printf("%s",str);
	
	for(i=0 ; i<strlen(str) ; i++)
	{
	    l=str[i];
	    switch(l)
	    {
	        case 'M': x=x+1000; break;
	        
	        case 'C': if(str[i+1]=='M')
	                    {
	                        x=x+900;
	                        i++;
	                        break;
	                    }
                        else if(str[i+1]=='D')
                        {
                            x=x+400;
                            i++;
                            break;
                        }
                        else
                            x=x+100;
                            break;
            
            case 'D': x=x+500; break;
                            
	        case 'X': if(str[i+1]=='C')
	                    {
	                        x=x+90;
	                        i++;
	                        break;
	                    }
                        else if(str[i+1]=='L')
                        {
                            x=x+40;
                            i++;
                            break;
                        }
                        else
                            x=x+10;
                            break;
            
            case 'L': x=x+50; break;
            
            case 'I': if(str[i+1]=='X')
	                    {
	                        x=x+9;
	                        i++;
	                        break;
	                    }
                        else if(str[i+1]=='V')
                        {
                            x=x+4;
                            i++;
                            break;
                        }
                        else
                            x=x+1;
                            break;
            
            case 'V': x=x+5; break;
            
	    }
	}
	
	printf("The Conversion of Roman Numberal %s to Decimal is %d", str,x);
	

}
