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
            case 't':
                etat = 1;
                break;
            case '{':
                etat = 17;
                break;
            case '}':
                etat = 18;
                break;
            case '[':
                etat = 19;
                break;
            case ']':
                etat = 20;
                break;
            case ':':
                etat = 21;
                break;
            case ',':
                etat = 22;
                break;
            case 'f':
                etat = 6;
                break;
            case 'n':
                etat = 12;
                break;
            case '"':
                etat = 23;
                break;
            case '1' ... '9':
                etat = 29;
                break;
            case '-':
                etat = 27;
                break;
            case '0':
                etat = 28;
                break;
            default:
                fini = 1;
            }
            break;
        case 1:
            switch (symbole)
            {
            case 'r':
                etat = 2;
                break;
            default:
                fini = 1;
            }
            break;
        case 2:
            switch (symbole)
            {
            case 'u':
                etat = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 3:
            switch (symbole)
            {
            case 'e':
                etat = 4;
                break;
            default:
                fini = 1;
            }
            break;
        case 4:
            switch (symbole)
            {
            case 'sep': /*utiliser la fonction pour savoir si c'est un sep*/
                etat = 5;
                break;
            default:
                fini = 1;
            }
            break;
        case 5:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 6:
            switch (symbole)
            {
            case 'a':
                etat = 7;
                break;
            default:
                fini = 1;
            }
            break;
        case 7:
            switch (symbole)
            {
            case 'l':
                etat = 8;
                break;
            default:
                fini = 1;
            }
            break;
        case 8:
            switch (symbole)
            {
            case 's':
                etat = 9;
                break;
            default:
                fini = 1;
            }
            break;
        case 9:
            switch (symbole)
            {
            case 'e':
                etat = 10;
                break;
            default:
                fini = 1;
            }
            break;
        case 10:
            switch (symbole)
            {
            case 'sep': /*utiliser la fonction pour savoir si c'est un sep*/
                etat = 11;
                break;
            default:
                fini = 1;
            }
            break;
        case 11:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 12:
            switch (symbole)
            {
            case 'u':
                etat = 13;
                break;
            default:
                fini = 1;
            }
            break;
        case 13:
            switch (symbole)
            {
            case 'l':
                etat = 14;
                break;
            default:
                fini = 1;
            }
            break;
        case 14:
            switch (symbole)
            {
            case 'l':
                etat = 15;
                break;
            default:
                fini = 1;
            }
            break;
        case 15:
            switch (symbole)
            {
            case 'sep': /*utiliser la fonction pour savoir si c'est un sep*/
                etat = 16;
                break;
            default:
                fini = 1;
            }
            break;
        case 16:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 17:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 18:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 19:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 20:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 21:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 22:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 23:
            switch (symbole)
            {
            case '\\':
                etat = 25;
                break;
            case '"':
                etat = 26;
                break;
            case '\0':
                fini = 1;
                break;
            default:
                etat = 23;
            }
            break;
        case 24:
            switch (symbole)
            {
                /*Y'a pas de 24 ?-?*/
            }
            break;
        case 25:
            switch (symbole)
            {
            case '\0':
                fini = 1;
                break;
            default:
                etat = 23;
            }
            break;
        case 26:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 27:
            switch (symbole)
            {
            case '1' ... '9':
                etat = 29;
                break;
            case 0:
                etat = 28;
                break;
            default:
                fini = 1;
            }
            break;
        case 28:
            switch (symbole)
            {
            case 'sep':
                etat = 31;
                break;
            case '.':
                etat = 30;
                break;
            case 'e':
                etat = 32;
                break;
            case 'E':
                etat = 32;
                break;
            default:
                fini = 1;
            }
            break;
        case 29:
            switch (symbole)
            {
            case '0' ... '9':
                etat = 29;
                break;
            case 'sep':
                etat = 31;
                break;
            case '.':
                etat = 30;
                break;
            case 'e':
                etat = 32;
                break;
            case 'E':
                etat = 32;
                break;
            default:
                fini = 1;
            }
            break;
        case 30:
            switch (symbole)
            {
            case '0' ... '9':
                etat = 33;
                break;
            default:
                fini = 1;
            }
            break;
        case 31:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 32:
            switch (symbole)
            {
            case '0' ... '9':
                etat = 35;
                break;
            case '+':
                etat = 35;
                break;
            case '-':
                etat = 35;
                break;
            default:
                fini = 1;
            }
            break;
        case 33:
            switch (symbole)
            {
            case '0' ... '9':
                etat = 33;
                break;
            case 'sep':
                etat = 34;
                break;
            case 'e':
                etat = 32;
                break;
            case 'E':
                etat = 32;
                break;
            default:
                fini = 1;
            }
            break;
        case 34:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
            }
            break;
        case 35:
            switch (symbole)
            {
            case '0' ... '9':
                etat = 35;
                break;
            case 'sep':
                etat = 36;
                break;
            default:
                fini = 1;
            }
            break;
        case 36:
            switch (symbole)
            {
            case '\0':
                fini = 3;
                break;
            default:
                fini = 1;
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