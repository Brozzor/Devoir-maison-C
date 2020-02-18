#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

// prototypage des fonctions
void askQuestion(char question[], char answer1[], char answer2[]);
void initial(int *theme);
void checkInput(int nb);
void choiceTheme(int theme);
void themeDateWithNoemie();
void loadTheme(char name[]);

int main()
{
    int theme = 0;

    initial(&theme);    // affiche un mini tuto , le nom du jeu et les noms des créateurs
    choiceTheme(theme); // suite a la réponse du choix du theme on choisit le theme et ont l'affiche

    return (0);
}

void choiceTheme(int theme)
{
    // ont choisit le theme
    if (theme == 1)
    {
        themeDateWithNoemie();
    }
    else if (theme == 2)
    {
        //themeTheCatNeighbors();
    }
}

void checkInput(int nb)
{
    // ici ont verifie que le numero entrée correspond bien a une action
    if (nb == 3)
    {
        printf("Vous avez decider de quitter !\nAurevoir\n");
        system("exit");
    }
    else if (nb != 1 && nb != 2)
    {
        printf("Je te demande un simple chiffre et toi tu sais meme pas me répondre correctement !\n\"l'ordinateur alt f4 le programme\"\n");
        system("exit");
    }
}

void askQuestion(char question[], char answer1[], char answer2[])
{
    // cette fonction permet de ne pas redonder la manière de demander une réponse
    printf("%s\n", question);
    printf("1. %s\n", answer1);
    printf("2. %s\n", answer2);
    printf("3. Quitter\n");
}

void initial(int *theme)
{
    // fonction initial permettant l'affichge d'information basique et de choisir le theme
    printf("-------------------------------------------------------\n");
    printf("               Bienvenue sur ZorkV2                    \n");
    printf("             Par B.Romain et G.Ilyass                  \n");
    printf("              Le principe est simple                   \n");
    printf("Répondez au questions et survivez jusqu'a la fin du jeu\n");
    printf("                   Bonne chance !                      \n");
    printf("-------------------------------------------------------\n\n");
    askQuestion("Quelle thème voulez vous ?", "Rencard avec noémie", "Le chat des voisins");
    scanf("%i", theme);
    checkInput(*theme);
}

void loadTheme(char name[])
{
    printf("\n\n-------------------------------------------------------\n");
    printf("            Vous avez choisit comme theme :            \n");
    printf("                 %s                  \n", name);
    printf("-------------------------------------------------------\n\n");
}

void themeDateWithNoemie()
{
    char name[] = "Rencard avec noémie";
    int answer[7] = {0};
    int goodAnswer[7] = {1, 1, 2, 1, 2, 2, 1};
    loadTheme(name);
    askQuestion("Ludovik comme beaucoup rechercha l'amour d'un soir ou de sa vie ,il ce renda donc\nsur une application de rencontre ce nomant tinder \nil eu rapidement un match avec une dénommer noémie 23 ans ayant comme biographie \nun simple emoji peche puis aubergine suivie de l'emoji interdit au moins de 18ans \nludovik vu tout de suite en elle la femme de sa vie mais ce demanda si ce n'était pas trop beau\n",
                "Engager la conversation",
                "Ne pas engager la conversation");
    scanf("%i", &answer[0]);
    checkInput(answer[0]);
}