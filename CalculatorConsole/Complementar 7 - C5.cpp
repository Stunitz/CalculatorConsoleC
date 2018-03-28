#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>


void menu (void){
	setlocale(LC_ALL,"C");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218, 196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
		printf("\n%c                         MENU                             %c\n", 179,179);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195, 196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
		printf("\n%c 1 - SOMAR                                                %c", 179,179);
		printf("\n%c 2 - SUBTRAIR                                             %c", 179,179);
		printf("\n%c 3 - MULTIPLICAR                                          %c", 179,179);
		printf("\n%c 4 - DIVIDIR                                              %c", 179,179);
		printf("\n%c                                                          %c", 179,179);
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195, 196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
		printf("\n%c                                                          %c\n", 179,179);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192, 196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
		setlocale(LC_ALL,"Portuguese");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
}


int menu_selecao (void){
	int opcao;
	do{	
		menu();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
	
		printf("ESCOLHA UMA OPÇÃO: ");    
		scanf("%d", &opcao);
		system("cls");
		if(opcao<1||opcao>4){
			setlocale(LC_ALL,"C");
			menu();
			setlocale(LC_ALL,"Portuguese");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
		
			printf("ESCOLHA UMA OPÇÃO: OPÇÃO INVALÍDA!");    
			getch();
			system("cls");	
		}else{
			break;
		}	
	}while(1);
	
	return opcao;	
}
 
int soma (int a, int b){
	return a+b;
}

int subtrair (int a, int b){
	return a-b;
}

int multiplicar (int a, int b){
	return a*b;
}

float dividir (int a, int b){
	float x=0, y=0;
	x=a;
	y=b;
	x/=y;
	return x;
}


int main (){
	int a=0,b=0,c=0;
	c=menu_selecao();
	do{	
		menu();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
	
		printf("DIGITE O 1º VALOR: ");    
		scanf("%d", &a);
		system("cls");
		if(a<0){
			setlocale(LC_ALL,"C");
			menu();
			setlocale(LC_ALL,"Portuguese");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
		
			printf("DIGITE O 1º VALOR: VALOR INVALÍDA!");    
			getch();
			system("cls");	
		}else{
			break;
		}	
	}while(1);
	
	do{	
		menu();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
	
		printf("DIGITE O 2º VALOR: ");    
		scanf("%d", &b);
		system("cls");
		if(b<0){
			setlocale(LC_ALL,"C");
			menu();
			setlocale(LC_ALL,"Portuguese");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
		
			printf("DIGITE O 2º VALOR: VALOR INVALÍDA!");    
			getch();
			system("cls");	
		}else{
			break;
		}	
	}while(2);		
	
	if(c==1){
		menu();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
		printf("RESULTADO DA SOMA: %d", soma(a,b));
	}
	if(c==2){
		menu();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
		printf("RESULTADO DA SUBTRAIR: %d", subtrair(a,b));
	}
	if(c==3){
		menu();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
		printf("RESULTADO DA MULTIPLICAR: %d", multiplicar(a,b));
	}
	if(c==4){
		menu();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,9});
		printf("RESULTADO DA DIVIDIR: %.2f", dividir(a,b));
	}
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){2,15});
	
	system("pause");
	return 0;	
}
