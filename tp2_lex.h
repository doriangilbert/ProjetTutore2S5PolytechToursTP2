/**
 * \file tp2_lex.h
 * \brief header pour analyseur lexical pour le langage JSON
 * \author GILBERT Dorian et DHONDT Matheo
 * \version 0.1
 * \date 11/01/2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>

/**
 * \union TSymbole
 * \brief union permettant de  manipuler un entier/reel/chaine pour la table
 * des symboles
 */
typedef struct
{
    int type; /**< l'un des 3 types suivants : JSON_STRING/JSON_INT_NUMBER/JSON_REAL_NUMBER */
    union
    {
        int entier;
        float reel;
        char *chaine;
    } val; /**< valeur associer a un element de la table des symboles */
} TSymbole;

/**
 * \struct TLex
 * \brief structure contenant tous les parametres/donnees pour
 * l'analyse lexicale
 */
typedef struct
{
    char *data;              /**< chaine a parcourir */
    char *startPos;          /**< position de depart pour la prochaine analyse */
    int nbLignes;            /**< nb de lignes analysees */
    TSymbole *tableSymboles; /**< tableau des symboles : chaines/entier/reel */
    int nbSymboles;          /**<  nb de symboles stockes dans tableSymboles */
    int tailleTableSymboles; /**< taille memoire du tableau tableSymboles */
} TLex;


//Prototypes des fonctions
int isSep(const char _symb);
TLex *initLexData(char *_data);
void deleteLexData(TLex **_lexData);
void printLexData(TLex *_lexData);
void addIntSymbolToLexData(TLex *_lexData, const int _val);
void addRealSymbolToLexData(TLex *_lexData, const float _val);
void addStringSymbolToLexData(TLex *_lexData, char *_val);
int lex(TLex *_lexData);