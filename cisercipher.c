#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char plain[10], cipher[10];
	int key,i,x,l;
	int result;

	printf("\n Enter the Plain Text :");
	scanf("%s,plain");
	printf(" Enter the key value :");
	scanf("%d",&key);
	printf("\n \n \t PLAIN TEXT :%s",plain);
	printf("\n \n \t ENCRYPTED TEXT :");
	for(i = 0, x = strlen(plain); i<x; i++)
	{
		cipher[i]=plain[i]+ key;
		if (isupper(plain[i] ) &&(cipher[i] > 'z'))
		cipher[i]=cipher[i]-26;
		printf("\n \n \t AFTER DECRYPTION :");
		for(i=0;i<x;i++)
		{
			plain[i]-key;
			if(isupper(cipher[i])&&(plain[i]<'A'))
			plain[i] = plain[i]+26;
			if(islower(cipher[i])&&(plain[i]<'a'))
			plain[i]=plain[i]+26;
			printf("%c",plain[i]);

		}
		getch();
	}

}
