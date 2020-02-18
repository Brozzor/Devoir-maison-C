#include <stdio.h>
#define TRUE 1
#define FALSE 0

// prototypage des fonctions
void askQuestion(char question[], char answer1[], char answer2[]);
void initial(int *theme);

int main()
{
    int theme = 0;
    int questionNb = 0;

    initial(&theme);

    return (0);
}

void checkInput(char *nb)
{
    if (*nb == 3)
    {
        printf("Vous avez decider de quitter !\nAurevoir\n");
        system("exit");
    }
    else if (*nb != 1 && *nb != 2)
    {
        printf("Je te demande un simple chiffre et toi tu sais meme pas me répondre correctement !\n\"l'ordinateur alt f+4 le programme\"\n");
        system("exit");
    }
}

void askQuestion(char question[], char answer1[], char answer2[])
{
    printf("%s\n", question);
    printf("1. %s\n", answer1);
    printf("2. %s\n", answer2);
}

void initial(int *theme)
{

    printf("-------------------------------------------------------\n");
    printf("               Bienvenue sur ZorkV2                    \n");
    printf("             Par B.Romain et G.Ilyass                  \n");
    printf("              Le principe est simple                   \n");
    printf("Répondez au questions et survivez jusqu'a la fin du jeu\n");
    printf("                   Bonne chance !                      \n");
    printf("-------------------------------------------------------\n\n");
    askQuestion("Quelle thème voulez vous ?", "Rencard avec noémie", "Enterrement de grand père");
    scanf("%i", theme);
    checkInput(theme);
}