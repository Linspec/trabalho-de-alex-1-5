#include <stdio.h>
int main()
{
	int i,j,soma1=0,soma2=0,resultado=0; // Aluno: Nathan Lins Rodrigues  
	int matriz[4][4];                    //matricula 0050016005
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("valores para matriz[%d]{%d}",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			//matriz[i][j]=i;
		}
	/* 2 2 2 2 
	   2 2 2 2
	   2 2 2 2
	   2 2 2 2	*/  
	}
	for(j=0;j<4;j++)
	{
		 soma1=soma1+matriz[2][j];
		 //printf("%d +",matriz[2][j]);
		if (j != 3) printf("%d + ",matriz[2][j]);
		if (j == 3) printf("%d = %d", matriz[2][j], soma1);
	  
	   
	} 
	
printf("\n \n");

    for(i=0;i<4;i++)
    {
    	soma2=soma2+matriz[i][1];
    	
    	if(i==3)
    	  printf("%d= %d",matriz[i][1],soma2);
    	else
    	
    	printf("%d +",matriz[i][1]);
    	}
    	resultado=soma1+soma2;
    	
    printf("\n \n soma da 3 linha e 2 coluna, %d+%d=%d",soma1,soma2,resultado);
	system("pause");
	return 0;
}
