#include<stdio.h>
#include<math.h>
float drugipierwiastek(float x,float y, float z);
float pierwszypierwiastek(float x,float y, float z);
int main ()
{
    float a,b,c;
    printf("Program obliczajacy pierwiastki rownania kwadratowego ax^2+bx+c\n");
    printf("Podaj wartosc a: ");
    scanf("%f",&a);
    while(a==0)
    {
    printf("wartosc 'a' nie moze byc 0. Podaj wartosc a: ");
    scanf("%f",&a);
    }
    printf("Podaj wartosc b: ");
    scanf("%f",&b);
    printf("Podaj wartosc c: ");
    scanf("%f",&c);
    printf("Twoje rownanie kwadratowe to %.fx^2+%.fx+%.f\n",a,b,c);


    float wynikx1= pierwszypierwiastek(a,b,c);
    printf("x1 = %f\n",wynikx1);
    float wynikx2= drugipierwiastek(a,b,c);
    printf("x2 = %f",wynikx2);

}

float pierwszypierwiastek(float x,float y,float z)
{
    float delta= y*y - 4*x*z;
    float pierw_delta= sqrt(delta);
    float pierw = (-y + pierw_delta)/2*x;
    return pierw;

}
float drugipierwiastek(float x,float y, float z)
{
     float delta= y*y - 4*x*z;
     float pierw_delta= sqrt(delta);
     float drugi = (-y - pierw_delta)/2*x;
     return drugi;
}
