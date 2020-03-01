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
void checkAnswer(int answer, int goodAnswer, char falseAnswer[]);
void trevorTalent();

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
        trevorTalent();
    }
}

void checkInput(int nb)
{
    // ici ont verifie que le numero entrée correspond bien a une action
    if (nb == 3)
    {
        printf("Vous avez decider de quitter !\nAurevoir\n");
        exit(EXIT_SUCCESS);
    }
    else if (nb != 1 && nb != 2)
    {
        printf("Je te demande un simple chiffre et toi tu sais meme pas me répondre correctement !\n\"l'ordinateur alt f4 le programme\"\n");
        exit(EXIT_SUCCESS);
    }
}

void checkAnswer(int answer, int goodAnswer, char falseAnswer[])
{
    if (answer == goodAnswer)
    {
        return;
    }
    else
    {
        printf("%s\n", falseAnswer);
        exit(EXIT_SUCCESS);
    }
}

void askQuestion(char question[], char answer1[], char answer2[])
{
    // cette fonction permet de ne pas redonder la manière de demander une réponse
    printf("\n");
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
    askQuestion("Quelle thème voulez vous ?", "Rencard avec noémie", "TrevorDream(English)");
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
    int answer[5] = {0};
    int goodAnswer[5] = {1, 2, 2, 2, 1};
    loadTheme(name);
    // start question 1
    askQuestion("Ludovik comme beaucoup rechercha l'amour d'un soir ou de sa vie ,il ce renda donc\nsur une application de rencontre ce nomant tinder \nil eu rapidement un match avec une dénommer noémie 23 ans ayant comme biographie \nun simple emoji peche puis aubergine suivie de l'emoji interdit au moins de 18ans \nludovik vu tout de suite en elle la femme de sa vie mais ce demanda si ce n'était pas trop beau\n",
                "Engager la conversation",
                "Ne pas engager la conversation");
    scanf("%i", &answer[0]);
    checkInput(answer[0]);
    checkAnswer(answer[0], goodAnswer[0], "Noemie n'a pas fais le premier pas , vous etes seul jusqu'a votre mort !");
    // end question 1
    // start question 2
    askQuestion("Vous venez d'engager la conversation avec noemie \n, elle vous a envoyer l'adresse d'un restaurant très chic de la capital mais vous etes pauvres \n",
                "faire un crédit à la banque",
                "lui proposer un macdo ");
    scanf("%i", &answer[1]);
    checkInput(answer[1]);
    checkAnswer(answer[1], goodAnswer[1], "Vous etes déjà a découvert de plusieurs milliers d'euros la banque vous a refuser le crédit");
    // end question 2
    // start question 3
    askQuestion("Noemie:\"Va pour un macdonald demain soir 19h\"\nTout emoustiller vous , vous préparez pour cette soirée pleine d'amour avec noemie mais une question vous trotte dans la tete que va telle pensez de vous .\nc'est vrai après tout cela fais bien longtemps que vous n'avez pas approcher de femelle comme celle ci \n",
                "Vous mettre sur votre 31",
                "Le jogging c'est pas si mal");
    scanf("%i", &answer[2]);
    checkInput(answer[2]);
    checkAnswer(answer[2], goodAnswer[2], "Vous etes passer pour un minable et vous etes enfuis en courrant bouuuuuuuu");
    // end question 3
    // start question 4
    askQuestion("Ouaaaa j'aime trop ta degaine , tu prend un mcfirst poulet ou mcfirst boeuf\n",
                "l'impressionner en prenant mcfirst poisson",
                "lui dire que vous avez mal au ventre");
    scanf("%i", &answer[3]);
    checkInput(answer[3]);
    checkAnswer(answer[3], goodAnswer[3], "Vous avez contracter une apindicite et vous etes mort\n");
    // end question 4
    // start question 5
    askQuestion("Elle vous accompagna au urgence du a votre mal de ventre\n Vous avez contracter une apindicite et vous avez été operer \nnoémie vous a trouver courageux",
                "lui faire une demande en mariage",
                "lui faire un enfant");
    scanf("%i", &answer[4]);
    checkInput(answer[4]);
    checkAnswer(answer[4], goodAnswer[4], "Elle ne voulait pas d'enfant de vous elle a avorter et vous a quitter\n");
    printf("Bravo vous etes marier a noemie");
    // end question 5
}
void trevorTalent()
{
    char name[] = "Football talent";
    int answer[7] = {0};
    int goodAnswer[7] = {1, 2, 2, 1, 2, 2, 1};
    loadTheme(name);
    // First question
    askQuestion("Trevor is a highschool student, but not like any other student, he got a godgiven talent in soccer not has ever \nwitnessed something like it before, at first he enjoyed playing football more than anything else when he was a kid, but when he reached highschool his parents and everyone close to him started obligating him to be a very good football player \nfor the sake a scholarship to a good university to the point where he couldn't enjoy his teen years, one day he was helping his parents move some old stuff from the attic, and when he was alone he got the idea to\n",
                "jump off the attic without ladder",
                "not speak with other students");
    scanf("%i", &answer[0]);
    checkInput(answer[0]);
    checkAnswer(answer[0], goodAnswer[0], "Trevor is having depression");
    // end first questions
    // Second Question
    askQuestion("Trevor did not jump and he surivied \nto live another day playing what he loves \nis he gonna play football for the sake of his love to the game \n",
                "play because he love the game ",
                "to get what his parents wants");
    scanf("%i", &answer[1]);
    checkInput(answer[1]);
    checkAnswer(answer[1], goodAnswer[1], "trevor start working hard to reach his dream goals which is join a profesional Team");
    askQuestion("while Trevor was working hard to reach his dream\n his parents annoying him to give up on his dreams and start working on real goals\n because they dont belive in something called football \nthey care only about his scholarship",
                "follow his parents path",
                "keep pushing to reach his dreams");
    scanf("%i", &answer[2]);
    checkInput(answer[2]);
    checkAnswer(answer[2], goodAnswer[2], "Trevor made it to the top and became a Football\n star this is a happy ending so wake up and work your ass off to be like Trevor");
}
