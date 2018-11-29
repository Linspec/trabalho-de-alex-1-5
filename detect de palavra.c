#include <stdio.h>
#include <string.h>
int main()
{
	char palavra[30],letra; //Aluno: Nathan Lins Rodrigues
	int i=0,tam,cont=0;    //matricula 0050016005 
	printf("entre com uma palavra: ");
	gets(palavra);
	printf("escolha a uma letra: ");
	scanf("%c",&letra);
	tam=strlen(palavra);
	for(i=0;i<tam;i++)
	{
		if(palavra[i]==letra)
		{
		cont++;
	    }
	}
	printf("a letra '%c' apareceu  '%d' vezes na plavra '%s''\n",letra,cont,palavra);
	
	
	system("pause");	
	return 0;
	}
