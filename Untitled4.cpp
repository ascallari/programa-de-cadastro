#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int cadastro(){
	
char nome [255];
int cpf ;
int telefone;
char endereco [50];
int numero;
char bairro [50];
char cidade [50];
char estado [50];
int cep;
int anonascimento;
char email [50];
char diagnostico;
char comorbidade;
int idade;
char doencas[255];
int anoatual = 2020;


printf("Insira nome: ");
fflush(stdin);
scanf("%s", &nome);
/*
printf("\nInsira cpf: ");
fflush(stdin);
scanf("%d", &cpf);

printf("\nInsira telefone: ");
fflush(stdin);
scanf("%d", &telefone);

printf("\nInsira endereco: ");
fflush(stdin);
scanf("%s", &endereco);

printf("\nInsira numero: ");
fflush(stdin);
scanf("%d", &numero);

printf("\nInsira bairro: ");
fflush(stdin);
scanf("%s", &bairro);

printf("\nInsira cidade: ");
fflush(stdin);
scanf("%s", &cidade);

printf("\nInsira estado: ");
fflush(stdin);
scanf("%s", &estado);

printf("\nInsira cep: ");
fflush(stdin);
scanf("%d", &cep);
*/
printf("\nInsira o ano de nascimento: ");
fflush(stdin);
scanf("%d", &anonascimento);
/*
printf("\nInsira email: ");
fflush(stdin);
scanf("%s", &email);

printf("\nInsira data diagnostico: ");
fflush(stdin);
scanf("%s", &diagnostico);
*/
printf("\nAlguma comorbidade? \t [S / N]");
fflush(stdin);
scanf("%c", &comorbidade);

if(comorbidade == 'S'){
	printf("\nDigite as comorbidades: ");
	fflush(stdin);
	scanf("%s", &doencas);
}

idade = anoatual - anonascimento;

if(idade >= 65 || comorbidade == 'S'){

	printf("Grupo de RISCO!!!");
	
} else {
	printf("Fora do grupo de Risco!");
}
}
int main(void){
int op;

setlocale(LC_ALL, "Portuguese");

	do{
		
cadastro();

printf("\nInsira\n [1] Novo Cadastro \n [2] Sair: ");
fflush(stdin);
scanf("%d", &op);

	}while(op == 1);

}

