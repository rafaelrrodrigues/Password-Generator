#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();
void roll1();
void roll2();
void roll3();

int main(int argc, char *argv[]) {
	
	int i, j, now, x, y;
	
	srand(time(0));
	
	printf("=================Programa gerador de senhas=================\n\n");
	printf("Digite a quantidade de senhas desejadas: ");
	scanf("%i", &y);
	printf("\nDigite a quantidade de digitos desejada: ");
	scanf("%i", &x);
	printf("\n\n");
	
	for(i=0; i<y; i++){
		for(j=0; j<x; j++){
		
		now = dado();
		
		if(now==1 || now==2){
		
		roll1();
			}
		
		else if(now==3 || now==4){
		
		roll2();
			}
		
		else if(now==5 || now==6){
		
		roll3();
			}
		}
	printf("\n\n");
  	}
  	
  	
  getch();
  return 0;
	
}

int dado(){
	int i;
	i = rand() % 6+1;
}


void roll1(){
	
	char op[6][6]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};
	int n2, n3;
	
	n2 = dado() - 1;
	n3 = dado() - 1;
	
	printf("%c ", op[n2][n3]);
	
}

void roll2(){
	
	int op[5][6]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','~','_',' '};
	int n2, n3;
	
	do{
		n2 = dado() - 1;
		}while(n2==5);
	
	do{	
		n3 = dado() - 1;
		}while(n2 == 4 && n3 == 5);
	
	printf("%c ", op[n2][n3]);
	
}

void roll3(){
	
	int op[5][6]={'!','@','#','$','%','^','&','*','(',')','-','=','+','[',']','{','}','|','`',';',':','"','<','>','/','?','.',','};
	int n2, n3;
	
	do{
		n2 = dado() - 1;
		}while(n2==5);
	
	do{	
		n3 = dado() - 1;
		}while(n2 == 4 && n3 > 3);
	
	printf("%c ", op[n2][n3]);
}
