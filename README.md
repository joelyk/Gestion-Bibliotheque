### **README.md**

```markdown
# 📚 Gestion des Livres dans une Bibliothèque

Bienvenue dans le projet **Gestion des Livres** ! Ce programme en C permet de gérer efficacement une bibliothèque. Il offre des fonctionnalités comme l'ajout de livres, la recherche, l'affichage, et la sauvegarde dans un fichier.

## 📋 Fonctionnalités

1. 🖊️ **Ajouter un livre** : Enregistrez un livre avec un code, un titre et un nombre de pages.
2. 📚 **Gérer une liste de livres** : Créez et stockez plusieurs livres simultanément.
3. 🔍 **Trouver les livres avec le plus ou le moins de pages**.
4. 💾 **Sauvegarder les livres** dans un fichier (`Livres.data`).
5. 📂 **Lire et afficher les livres enregistrés** dans le fichier.

---

## 🛠️ Structure du Projet

- **`struct Livre`** : Structure représentant un livre avec un code, un titre, et un nombre de pages.
- **Fichiers** :
  - `main.c` : Contient le code source du programme.
  - `Livres.data` : Fichier texte contenant les livres sauvegardés.

---

## 🚀 Comment Utiliser ?

### ⚙️ Pré-requis
- Un compilateur C (par exemple : GCC).
- Un éditeur de texte (VS Code, Notepad++, etc.).
- Un terminal (Linux/Mac) ou CMD (Windows).

### 📦 Compilation et Exécution
1. **Compilation** :
   ```bash
   gcc main.c -o gestion_livres
   ```
2. **Exécution** :
   ```bash
   ./gestion_livres
   ```

---

## 📂 Exemple de Fichier `Livres.data`
Voici un exemple de contenu du fichier généré :
```
11152 Langage-C 270
12135 Apprendre-Java 412
```

---

## 🖥️ Étapes pour Mettre ce Projet sur GitHub

### 1️⃣ Créez un Dépôt GitHub
1. Connectez-vous à [GitHub](https://github.com/).
2. Cliquez sur le bouton **New repository**.
3. Donnez un nom au dépôt, par exemple : `Gestion-Bibliotheque`.
4. Cliquez sur **Create repository**.

### 2️⃣ Initialisez Git Localement
1. Dans votre terminal, naviguez vers le dossier contenant votre projet :
   ```bash
   cd /chemin/vers/votre-projet
   ```
2. Initialisez Git dans ce dossier :
   ```bash
   git init
   ```

### 3️⃣ Ajoutez vos Fichiers
1. Ajoutez tous les fichiers au suivi Git :
   ```bash
   git add .
   ```
2. Faites un commit pour enregistrer les changements localement :
   ```bash
   git commit -m "Initial commit : Gestion des Livres"
   ```

### 4️⃣ Poussez sur GitHub
1. Associez votre dépôt local au dépôt distant :
   ```bash
   git remote add origin https://github.com/VotreNomUtilisateur/Gestion-Bibliotheque.git
   ```
2. Poussez les fichiers vers GitHub :
   ```bash
   git push -u origin main
   ```

---

## 📞 Contact

- Auteur : **Mr Joel YK**
- 🌐 Site Web : [PandaCodeur.com](https://PandaCodeur.com)
- 📱 WhatsApp : **+237 652027193**

---

### 🏆 N'hésitez pas à :
- ⭐ **Star** le projet si vous le trouvez utile !
- 🐛 **Signaler un problème** via les Issues.
- 🛠️ **Contribuer** pour l'améliorer.

---

## 🎯 Objectif

Ce projet est conçu pour aider les étudiants et les passionnés de programmation à mieux comprendre la manipulation des structures en C et la gestion des fichiers.
```

---

### **Instructions pour mettre ce projet sur GitHub**

1. **Créez un compte GitHub** (si ce n'est pas déjà fait).
   - Rendez-vous sur [GitHub](https://github.com/) et inscrivez-vous.

2. **Créez un nouveau dépôt GitHub**.
   - Cliquez sur le bouton vert **New repository** sur la page d'accueil.
   - Nommez le dépôt (par exemple : `Gestion-Bibliotheque`).
   - Laissez l'option "Public" sélectionnée pour que tout le monde puisse voir votre projet.
   - Cliquez sur **Create repository**.

3. **Initialisez votre dépôt local** :
   - Ouvrez votre terminal ou CMD et naviguez jusqu'à votre projet avec `cd`.
   - Tapez :
     ```bash
     git init
     ```
     Cela initialise un dépôt Git dans votre projet.

4. **Ajoutez les fichiers au dépôt Git** :
   - Ajoutez tous les fichiers dans le suivi avec :
     ```bash
     git add .
     ```
   - Faites un commit pour enregistrer vos changements localement :
     ```bash
     git commit -m "Initial commit : Gestion des Livres"
     ```

5. **Associez votre dépôt local au dépôt GitHub** :
   - Liez le dépôt local au dépôt distant sur GitHub :
     ```bash
     git remote add origin https://github.com/VotreNomUtilisateur/Gestion-Bibliotheque.git
     ```
   - Remplacez `VotreNomUtilisateur` par votre nom d'utilisateur GitHub.

6. **Poussez vos fichiers sur GitHub** :
   - Envoyez vos fichiers vers GitHub avec :
     ```bash
     git push -u origin main
     ```

7. **Vérifiez votre projet sur GitHub** :
   - Rendez-vous sur votre dépôt GitHub, et vous verrez vos fichiers en ligne.

---

Avec ces étapes, vous pourrez facilement héberger votre projet sur GitHub et le partager avec d'autres ! 😊
