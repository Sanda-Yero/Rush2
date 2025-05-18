#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Fonction pour vérifier si un nombre est premier
bool estPremier(int nombre) {
    if (nombre <= 1) return false;
    if (nombre == 2) return true;
    if (nombre % 2 == 0) return false;
    
    // On vérifie jusqu'à la racine carrée du nombre
    for (int i = 3; i <= sqrt(nombre); i += 2) {
        if (nombre % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int nombre;
    
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nombre);
    
    if (estPremier(nombre)) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }
    
    return 0;
}
