#include <stdio.h>
#include <stdlib.h>

int main() {
    char operateur;
    double nombre1, nombre2, resultat;

    // Affichage du menu
    printf("CALCULATRICE SIMPLE\n");
    printf("------------------\n");
    printf("Opérations disponibles :\n");
    printf("+ : Addition\n");
    printf("- : Soustraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("q : Quitter\n\n");

    while (1) {
        // Demande à l'utilisateur de choisir une opération
        printf("Entrez l'opérateur (+, -, *, /) ou 'q' pour quitter : ");
        scanf(" %c", &operateur);

        // Condition pour quitter le programme
        if (operateur == 'q' || operateur == 'Q') {
            printf("Fin du programme.\n");
            break;
        }

        // Vérification de l'opérateur
        if (operateur != '+' && operateur != '-' && operateur != '*' && operateur != '/') {
            printf("Opérateur invalide. Veuillez réessayer.\n\n");
            continue;
        }

        // Demande des nombres
        printf("Entrez le premier nombre : ");
        scanf("%lf", &nombre1);
        printf("Entrez le deuxième nombre : ");
        scanf("%lf", &nombre2);

        // Calcul selon l'opérateur
        switch (operateur) {
            case '+':
                resultat = nombre1 + nombre2;
                printf("%.2lf + %.2lf = %.2lf\n\n", nombre1, nombre2, resultat);
                break;
            case '-':
                resultat = nombre1 - nombre2;
                printf("%.2lf - %.2lf = %.2lf\n\n", nombre1, nombre2, resultat);
                break;
            case '*':
                resultat = nombre1 * nombre2;
                printf("%.2lf * %.2lf = %.2lf\n\n", nombre1, nombre2, resultat);
                break;
            case '/':
                if (nombre2 != 0) {
                    resultat = nombre1 / nombre2;
                    printf("%.2lf / %.2lf = %.2lf\n\n", nombre1, nombre2, resultat);
                } else {
                    printf("Erreur : Division par zéro impossible.\n\n");
                }
                break;
            default:
                printf("Opérateur invalide.\n\n");
        }
    }

    return 0;
}
