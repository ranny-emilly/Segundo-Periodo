#include <stdio.h>
#include <stdlib.h>

typedef struct{
int dia, mes, ano;
}DataNas;

typedef struct{
  DataNas dataNas;
  int idade;
  char sexo;
  char nome[100];
}Pessoa;

void imprimirPessoa(Pessoa p) {
  printf("\tNome: %s", p.nome);
  printf("\tIdade: %d", p.idade);
  printf("\tSexo: %c", p.sexo);
  printf("\tSexo: %s", p.sexo);
  printf("\tDigite sua data de nascimento no formato dd mm aaaa: ", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);

}
//função para ler os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa(){
  Pessoa p;
  printf("Digite seu nome: ");
  fgets(p.nome, 100, stdin);
  printf("Digite sua idade: ");
  scanf("%d", &p.idade);
  scanf("sexo %c", p.sexo);
  scanf("%d %d %d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
  return p;
  

}

int main(){
  int i;
  Pessoa pessoas[3];
  
  for(i=0; i < 3; i++){
  pessoas[i] = lerPessoa();
  }
  for(i=0; i < 3; i++){
  imprimirPessoa(pessoas[i]);
  }


return 0;
}
