/* stocké les données à propos d'un utilisateur en demandant son login, mdp, rôle (root/ simple utilisateur). */
/* ALGORITHME */

#include <stdio.h>

struct user
{
  char login [50] ;
  char pwd [50] ;
  char role [50] ;
};
struct user u[3];  //déclaration de variables
//nombre d'utilisateur =3

char info ()
{
  int i;
  for (i=1;i<=3;i++)
  {
    printf (" utilisateur n* %d \n",i);
    printf ("Entrer le nom de l'utilisateur \n");
    scanf("%s",u[i].login);
    printf ("Entrer le mot de passe de l'utilisateur\n");
    scanf("%s",u[i].pwd);
    printf ("Entrer le rôle de l'utilisateur\n");
    scanf("%s",u[i].role);
  }
}
char afficher ()
{
  int i;
  printf ("\n Les utilisateurs enregistrés sont: \n");
  for (i=1;i<=3;i++)
  {
    printf (" utilisateurs%d\n",i);
    printf ("\t login= %s\n", u[i].login);
    printf ("\t mot de passe= %s\n", u[i].pwd);
    printf ("\t rôle: %s\n", u[i].role);
 
  }
}

int main ()
{
  info ();
  afficher ();
return (0)
}
