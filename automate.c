#include <stdio.h>

int automate(char *_str)
{
    int etat = 0;
    int fini = 0;
    char symbole = ' ';
    while (!fini)
    {
        symbole = *_str;
        switch (etat)
        {
        case 0:
            switch (symbole)
            {
            
            }
            break;
        case 1:
            switch (symbole)
            {
            
            }
            break;
        case 2:
            switch (symbole)
            {
            
            }
            break;
        case 3:
            switch (symbole)
            {
            
            }
            break;
        case 4:
            switch (symbole)
            {
            
            }
            break;
        case 5:
            switch (symbole)
            {
            
            }
            break;
        case 6:
            switch (symbole)
            {
            
            }
            break;
        case 7:
            switch (symbole)
            {
            
            }
            break;
        case 8:
            switch (symbole)
            {
            
            }
            break;
        case 9:
            switch (symbole)
            {
            
            }
            break;
        case 10:
            switch (symbole)
            {
            
            }
            break;
        case 11:
            switch (symbole)
            {
            
            }
            break;
        case 12:
            switch (symbole)
            {
            
            }
            break;
        case 13:
            switch (symbole)
            {
            
            }
            break;
        case 14:
            switch (symbole)
            {
            
            }
            break;
        case 15:
            switch (symbole)
            {
            
            }
            break;
        case 16:
            switch (symbole)
            {
            
            }
            break;
        case 17:
            switch (symbole)
            {
            
            }
            break;
        case 18:
            switch (symbole)
            {
            
            }
            break;
        case 19:
            switch (symbole)
            {
            
            }
            break;
        case 20:
            switch (symbole)
            {
            
            }
            break;
        case 21:
            switch (symbole)
            {
            
            }
            break;
        case 22:
            switch (symbole)
            {
            
            }
            break;
        case 23:
            switch (symbole)
            {
            
            }
            break;
        case 24:
            switch (symbole)
            {
            
            }
            break;
        case 25:
            switch (symbole)
            {
            
            }
            break;
        case 26:
            switch (symbole)
            {
            
            }
            break;
        case 27:
            switch (symbole)
            {
            
            }
            break;
        case 28:
            switch (symbole)
            {
            
            }
            break;
        case 29:
            switch (symbole)
            {
            
            }
            break;
        case 30:
            switch (symbole)
            {
            
            }
            break;
        case 31:
            switch (symbole)
            {
            
            }
            break;
        case 32:
            switch (symbole)
            {
            
            }
            break;
        case 33:
            switch (symbole)
            {
            
            }
            break;
        case 34:
            switch (symbole)
            {
            
            }
            break;
        case 35:
            switch (symbole)
            {
            
            }
            break;
        case 36:
            switch (symbole)
            {
            
            }
            break;
        default:
            fini = 2; /* erreur */
        }
        _str++;
    }
    /* gestion de la sortie */
    switch (fini)
    {
    case 1:
        fprintf(stderr, "Erreur : caractere %c inconnu (etat %d)\n", symbole, etat);
        return -1;
    case 2:
        fprintf(stderr, "Erreur : etat %d inconnu\n", etat);
        return -1;
    default:
        return etat;
    }
}
int main()
{
    /*char *test1 = "aaacaccabbb#";
    char *test2 = "aaa";
    char *test3 = "aaacfaccabbb#";
    printf("automate(%s)=%d\n", test1, automate(test1));
    printf("automate(%s)=%d\n", test2, automate(test2));
    printf("automate(%s)=%d\n", test3, automate(test3));*/
    return 0;
}