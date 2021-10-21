#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alias Alias;
struct alias
{
    char alias[10];
    char comando[50];
    char descricao[150];
};

void Buscar(char comando[50])
{
    char cmd[256];
    sprintf(cmd, "cat ./database | grep -A 2 '%s'", comando);
    system(cmd);
}

void Register(Alias Item)
{
    char cmd[300];
    sprintf(cmd, "echo '\nComando: %s\nAlias: %s\nDescrição: %s' >> ./database", Item.comando, Item.alias, Item.descricao);
    system(cmd);
}

int main(int argc, char *argv[])
{
    if (argv[1] != NULL)
    {
        Buscar(argv[1]);
        return 0;
    }
    Alias Item;
    int option;
    do
    {
        system("clear");
        printf("Menu\n1-Registrar\n2-Abrir o editor\n3-Busca\n4-Sair\n5-Listar\nOpção: ");
        scanf("%i", &option);
        switch (option)
        {
        case 1:
            system("clear");
            printf("Modo de Inserção\n");
            setbuf(stdin, NULL);
            printf("Alias: ");
            scanf("%[^\n]s", Item.alias);
            setbuf(stdin, NULL);
            printf("Comando: ");
            scanf("%[^\n]s", Item.comando);
            setbuf(stdin, NULL);
            printf("Descrição: ");
            scanf("%[^\n]s", Item.descricao);
            setbuf(stdin, NULL);
            Register(Item);
            break;
        case 2:
            system("clear");
            printf("Modo de Busca");
            system("nano ./database");
            break;
        case 3:
            system("clear");
            printf("Modo de Busca");
            setbuf(stdin, NULL);
            printf("\nComando: ");
            scanf("%[^\n]s", Item.comando);
            Buscar(Item.comando);
            printf("\n");
            break;
        case 4:
            return 0;
            break;
        case 5:
            system("less ./database");
            break;
        default:
            setbuf(stdin, NULL);
            printf("\nOpção Inválida!!\n");
            getc(stdin);
            break;
        }
    } while (true);
    return 0;
}