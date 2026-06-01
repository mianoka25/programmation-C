// somme de deux vecteurs
#include <stdio.h>
int main ()
{
  int ordo[2],abscisse[2];
  int vecteur1,vecteur2;
  int *pta,i;
  //TABLEAU
  printf ("adresse de tableau a :%p\n",&a);
  for (i=0;i<5;i++)
  {
    printf ("a[%d] = %d\n", i,a[i]);
    printf ("adresse de a[%d] :%p\n",i,&a[i]);
    pta = &a[i];
    printf ("adresse portée par pta : %p \n",pta);
    printf ("Valeur dans l'adresse portée par pta : %d \n",*(a+i));
  }
  putchar ('\n');
  printf ("adresse finale portée par pta : %p \n",pta);
  printf ("Valeur finale dans l'adresse portée par pta : %d \n",*pta);
  
  
return(0);
}
