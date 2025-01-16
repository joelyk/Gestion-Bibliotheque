// Auteur : Mr Joel YK
// Site web : PandaCodeur.com
// WhatsApp : +237 652027193

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Définition de la structure Livre
struct Livre {
    int code;               // Code unique du livre
    char titre[100];        // Titre du livre
    int nombre_pages;       // Nombre de pages du livre
};

// Fonction pour lire les champs d'un livre
void lire_livre(struct Livre *L) {
    printf("Entrez le code du livre : ");
    scanf("%d", &L->code);
    printf("Entrez le titre du livre : ");
    scanf(" %s", L->titre); // Lire une chaîne avec des espaces
    printf("Entrez le nombre de pages : ");
    scanf("%d", &L->nombre_pages);
}

// Fonction pour lire une liste de n livres
struct Livre* lire_liste_livre(int n) {
    struct Livre* livres = (struct Livre*)malloc(n * sizeof(struct Livre)); // Allouer une zone mémoire pour n livres
    if (livres == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        exit(1); // Quitte le programme en cas d'erreur
    }

    for (int i = 0; i < n; i++) {
        printf("\n--- Livre %d ---\n", i + 1);
        lire_livre(&livres[i]);
    }
    return livres; // Retourne le tableau de livres
}

// Fonction pour afficher le titre du livre avec le plus grand et le plus petit nombre de pages
void afficher_min_max(struct Livre* livres, int taille) {
    if (taille == 0) {
        printf("La bibliothèque est vide.\n");
        return;
    }

    struct Livre* max = &livres[0]; // Livre avec le plus grand nombre de pages
    struct Livre* min = &livres[0]; // Livre avec le plus petit nombre de pages

    for (int i = 1; i < taille; i++) {
        if (livres[i].nombre_pages > max->nombre_pages) {
            max = &livres[i];
        }
        if (livres[i].nombre_pages < min->nombre_pages) {
            min = &livres[i];
        }
    }

    printf("\nLivre avec le plus grand nombre de pages : %s (%d pages)\n", max->titre, max->nombre_pages);
    printf("Livre avec le plus petit nombre de pages : %s (%d pages)\n", min->titre, min->nombre_pages);
}

// Fonction pour ajouter un livre dans le fichier Livres.data
void sauvegarder_livre(struct Livre L) {
    FILE* fichier = fopen("Livres.data", "a"); // Ouvrir le fichier en mode ajout
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }
    fprintf(fichier, "%d %s %d\n", L.code, L.titre, L.nombre_pages); // Écrire les données dans le fichier
    fclose(fichier); // Fermer le fichier
}

// Fonction pour lire et afficher le contenu du fichier Livres.data
void lire_fichier_livres() {
    FILE* fichier = fopen("Livres.data", "r"); // Ouvrir le fichier en mode lecture
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    printf("\n--- Contenu du fichier Livres.data ---\n");
    struct Livre L;
    while (fscanf(fichier, "%d %99s %d", &L.code, L.titre, &L.nombre_pages) == 3) { // Lire les données
        printf("Code: %d, Titre: %s, Nombre de pages: %d\n", L.code, L.titre, L.nombre_pages);
    }

    fclose(fichier); // Fermer le fichier
}

// Fonction principale
int main() {
    int choix, n;

    while (1) {
        printf("\n--- Gestion des livres ---\n");
        printf("1. Ajouter un livre\n");
        printf("2. Ajouter une liste de livres\n");
        printf("3. Afficher le livre avec le plus grand et le plus petit nombre de pages\n");
        printf("4. Sauvegarder un livre dans le fichier\n");
        printf("5. Lire et afficher le contenu du fichier Livres.data\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                struct Livre L;
                printf("\n--- Ajouter un livre ---\n");
                lire_livre(&L);
              //  sauvegarder_livre(L);
                printf("Livre ajouté : %s\n", L.titre);

                // Sous-menu après l'ajout
                int sous_choix;
                printf("\nQue souhaitez-vous faire ?\n");
                printf("1. Afficher tous les livres\n");
                printf("2. Retour au menu principal\n");
                printf("Votre choix : ");
                scanf("%d", &sous_choix);

                if (sous_choix == 1) {
                    lire_fichier_livres();
                }
                break;
            }
            case 2: {
                printf("\nCombien de livres souhaitez-vous ajouter ? ");
                scanf("%d", &n);
                struct Livre* livres = lire_liste_livre(n);

                for (int i = 0; i < n; i++) {
                    sauvegarder_livre(livres[i]); // Sauvegarder chaque livre dans le fichier
                }

                printf("%d livres ajoutés et sauvegardés.\n", n);
                free(livres); // Libérer la mémoire après utilisation
                break;
            }
            case 3: {
                printf("\nCombien de livres dans la bibliothèque ? ");
                scanf("%d", &n);
                struct Livre* livres = lire_liste_livre(n);
                afficher_min_max(livres, n);
                free(livres); // Libérer la mémoire après utilisation
                break;
            }
            case 4: {
                struct Livre L;
                printf("\n--- Sauvegarder un livre ---\n");
                lire_livre(&L);
                sauvegarder_livre(L);
                break;
            }
            case 5: {
                lire_fichier_livres();
                break;
            }
            case 6:
                printf("Au revoir !\n");
                return 0;
            default:
                printf("Choix invalide.\n");
        }
    }
}
