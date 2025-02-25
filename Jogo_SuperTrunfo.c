#include <stdio.h>

int main(){

char estado1[20], estado2[20], codigo1[20], codigo2[20];
char nome1[20], nome2[20];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontoturistico1, pontoturistico2;
float pibcapita1, pibcapita2;
float densidade1, densidade2;

/*nessa parte do codigo, criaremos a primeira carta do jogo, usando o printf e o scanf, apenas, o programa ira pegar seus dados para transmitilo eventualmente.*/

printf("Criaremos sua primeira carta para o jogo de super trunfo! \n");

printf("Escolha uma letra de A-H, esta representara 1 dos 8 Estados: \n" );
scanf("%c", &estado1);

printf("Digite um codigo para sua carta, este devera ser a letra escolhida seguida de um numero de 01-04, por exemplo A02: \n");
scanf("%s", &codigo1);

printf("Digite o nome da cidade, use o ifen no lugar do espaco: \n");
scanf("%s", &nome1);

printf("Agora, informe o numero de habitantes da cidade de sua escolha: \n");
scanf("%d", &populacao1);

printf("Digite aqui, a area da cidade em km²: \n");
scanf("%f", &area1);

printf("Estamos quase finalizando sua primeira carta! Agora informe o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Para finalizar, me diga quantos pontos turisticos a cidade tem: \n");
scanf("%d", &pontoturistico1);

printf("Sua primeira carta ficou pronta! agora criaremos a segunda \n");

/*partindo daqui, comeca a segunda etapa, de contrucao da segunda carta do jogo, seguindo o mesmo sistema de configuracao da criacao anterior*/

printf("Escolha mais uma letra de A-H: \n");
scanf("%s", &estado2);

printf("Digite outro codigo para sua segunda carta: \n");
scanf("%s", &codigo2);

printf("Digite o nome da segunda cidade escolhida, use o ifen no lugar do espaco: \n");
scanf("%s", &nome2);

printf("Agora, informe o numero de habitantes da cidade: \n");
scanf("%d", &populacao2);

printf("Digite aqui, a area dela em km²: \n");
scanf("%f", &area2);

printf("Estamos quase finalizando sua segunda carta! Agora informe o PIB: \n");
scanf("%f", &pib2);

printf("E por ultimo, me diga quantos pontos turisticos a cidade tem: \n");
scanf("%d", &pontoturistico2);
printf("\n");

/*descobriremos o PIB per capita e densidade populacional de ambas as cartas utilizando os valores de: PIB, populacao e area*/

/*carta 1:*/
pibcapita1 = pib1 / populacao1;
densidade1 = populacao1 / area1;

/*carta 2:*/
pibcapita2 = pib2 / populacao2;
densidade2 = populacao2 / area2;

/*agora, ao final das criacoes, serao passadas as informacoes coletadas, como dito anteriormente, aqui, a maquina o mostrara os dados dispostos, utilizando unicamente o sistema de printf.*/

printf("Suas 2 cartas foram criadas com sucesso! veja suas informacoes: \n");
printf("\n");
printf("Carta 1: \n");
printf("Estado: %s \n", estado1);
printf("Codigo: %s \n", codigo1);
printf("Nome da Cidade: %s \n", nome1);
printf("Populacao: %d \n", populacao1);
printf("Area: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Numeros de Pontos Turisticos: %d \n", pontoturistico1);
printf("PIB per Capita: %.2f \n", pibcapita1);
printf("Densidade Populacional: %.2f \n", densidade1);
printf("\n");

printf("Carta 2: \n");
printf("Estado: %s \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome da Cidade: %s \n", nome2);
printf("Populacao: %d \n", populacao2);
printf("Area: %f \n", area2);
printf("PIB: %f \n", pib2);
printf("Numeros de Pontos Turisticos: %d \n", pontoturistico2);
printf("PIB per Capita: %.2f \n", pibcapita2);
printf("Densidade Populacional: %.2f \n", densidade2);

return 0;


}
