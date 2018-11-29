#include <stdio.h>
int main()
{
	int cont=0,i;
	float obj[10],menor_peso=1000000;
	//Aluno: Nathan Lins Rodrigues
	 //matricula 0050016005 
	for(i=0;i<10;i++){
	
	printf("peso do objeto %d:",i);
	scanf("%f",&obj[i]);
	
}
	for(i=0;i<10;i++)
	{
		if(obj[i]<=menor_peso)
		{
		
		menor_peso=obj[i];
		cont++;
	}
	  
	
		}
	printf("O menor peso eh de %.2f e sal %d objetos",menor_peso,cont);
system("pause");
return 0;
}
