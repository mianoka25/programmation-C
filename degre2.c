#include <stdio.h>
#include <math.h>
#include <complex.h>
int main()
{
  float a,b,c,d,z,x,y,imaginaire,reel;
  printf ("Pour résoudre Ax²+Bx+C=0,\n");
  printf ("veuillez entrer une valeur pour a puis appuyer sur la touche ""ENTRER"" \n");
  scanf ("%f",&a);
  printf ("veuillez entrer une valeur pour b puis appuyer sur la touche ""ENTRER""\n");
  scanf ("%f",&b);
  printf ("veuillez entrer une valeur pour c puis appuyer sur la touche ""ENTRER""\n");
  scanf ("%f",&c);
  if (a==0)
  {
    x=(c/b);
    printf ("La valeur de x est %f \n",x);
  }
  else
  {
    d=b*b-(4*a*c);
    if (d==0)
    {
      x=-b/(2*a);
      printf("l'equation admet une solution unique : %f\n",x);
       }
    else if (d>0)
    {
      z=sqrt (d);
      x= (-b+z)/(2*a);
      y= (-b-z)/(2*a);
      printf("l'equation admet deux solutions\n");
      printf ("première solution = %f\n",x);
      printf ("seconde solution =%f\n",y);
    }
    else
    {
     reel = -b/(2*a);
     imaginaire = sqrt(-d)/(2*a);
     printf("L'équation n'admet aucune solution réelle mais uniquement imaginaire:\n");
     printf("x= %f + %fi\n", reel, imaginaire);
     printf("y = %f - %fi\n", reel, imaginaire);
    }
  }
    return (0);
}
