// A "C" program to find the eigen values of the square matrix

#include <stdio.h>
#include <math.h>
int main(void)
{   
    void eigen2(double,double);
    void eigen3(double, double, double);
    int n, i, j;
    printf("+--------------------------------------------------------------------------------------------------------+\n");
    printf("|                                      FIND THE EIGEN VALUE OF A MATRIX                                  |\n");
    printf("+--------------------------------------------------------------------------------------------------------+\n");
    printf("\n\n");
    printf("\n\nNote : This program only works for 2x2 & 3x3 matrix !\n\n");
    printf("Enter the size of the sqaure matrix :");
    scanf("%d", &n);
    printf("\v");
    printf("Please enter the elements of the square matrix :-");
    printf("\n\n");
    int Mn[n][n];
    for (i = 0; i < n; i++) //getting values of square matrix
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &Mn[i][j]);
        }
    }
    printf("\v");
    printf("The square matrix is :-");
    printf("\n\n");
    for (i = 0; i < n; i++) // printing of square matrix
    {
        printf("|\t");
        for (j = 0; j < n; j++)
        {

            printf("%d\t", Mn[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("\n\n");
    double s1 = 0;
    for (i = 0; i < n; i++) // calculation of trace of matrix
    {
        s1 = s1 + Mn[i][i];
    }
    printf("The trace of the matrix = %.1lf\n\n", s1);

    double s3, s2;

    if (n == 3) // calculation of sum of minors of diagonal elements
    {
        int e[5];
        e[0] = ((Mn[1][1] * Mn[2][2]) - (Mn[2][1] * Mn[1][2]));
        e[1] = ((Mn[0][0] * Mn[2][2]) - (Mn[2][0] * Mn[0][2]));
        e[2] = ((Mn[0][0] * Mn[1][1]) - (Mn[1][0] * Mn[0][1]));
        s2 = e[0] + e[1] + e[2];
        printf("The sum of minors of the diagonal elements of the matrix = %.1lf\n\n", s2);
    }

    if (n == 2) // calculation of determinent for 2x2 matrix
    {
        s3 = ((Mn[0][0] * Mn[1][1]) - (Mn[1][0] * Mn[0][1]));
    }

    if (n == 3) // calculation of determinent for 3x3 matrix
    {
        int d[5];
        d[0] = (Mn[0][0] * ((Mn[1][1] * Mn[2][2]) - (Mn[2][1] * Mn[1][2])));
        d[1] = (-Mn[0][1] * ((Mn[1][0] * Mn[2][2]) - (Mn[2][0] * Mn[1][2])));
        d[2] = (Mn[0][2] * ((Mn[1][0] * Mn[2][1]) - (Mn[2][0] * Mn[1][1])));
        s3 = d[0] + d[1] + d[2];
    }

    printf("The determinent of the matrix  = %.1lf\n\n", s3);

    if (n == 3) // for 3x3 matrix
    {
        double r1, r3;
        r1 = -s1;
        r3 = -s3;
        printf("The characteristic polynomial equation of the given matix is λ^3 + (%.1lf)λ^2 + (%.1lf)λ + (%.1lf)\n\n", r1, s2, r3);
        eigen3(r1, s2, r3);
    }

    if (n == 2)// for 2x2 matrix
    {
        double r1;
        r1 = -s1;
        printf("The characteristic polynomial equation of the given matix is λ^2 + (%.1lf)λ + (%.1lf)\n\n", r1, s3);
        eigen2(r1,s3);
    }
    return 0;
}
void eigen3(double b, double c, double d)
{
    double a = 1;

    // a,b,c are the coefficents of the cubic equation

    double e, f, g, h, i, j, k, l, m, n, p, r, s, t, u, x1, x2, x3;//auxillary variables

    int w;

    e = 2.7182818284590;

    f = ((3 * c / a) - (b * b / (a * a))) / 3;

    g = ((2 * b * b * b / (a * a * a)) - (9 * b * c / (a * a)) + (27 * d / a)) / 27;

    h = (g * g / 4) + (f * f * f / 27);

    i = sqrt(((g * g / 4) - h));

    j = exp(log10(i) / log10(e) / 3);

    k = acos((-1) * (g / (2 * i)));

    l = j * (-1);

    m = cos(k / 3);

    n = sqrt(3) * sin(k / 3);

    p = (b / 3 * a) * (-1);

    r = (-1) * (g / 2) + sqrt(h);

    s = exp(log10(r) / log10(e) / 3);

    t = (-1) * (g / 2) - sqrt(h);

    u = exp(log10(t) / log10(e) / 3);

    if (h > 0)   
        {w = 1;}

    if (h <= 0)
        {w = 3;}

    if ((f == 0) && (g == 0) && (h == 0))
        {w = 2;}

    switch (w)
    {

    case 1: // when one root is real and the other roots are imaginary roots

        x1 = (s + u) - (b / 3 * a);

        x2 = (-1) * (s + u) / 2 - (b / 3 * a);

        x3 = (s - u) * sqrt(3) / 2;

        printf("The eigen values are :-\n");
        printf("\n");
        printf("λ1 = %.1lf\n\n",x1);
        printf("λ2 = %.1lf +i*%1.lf\n\n",x2,x3);
        printf("λ3 = %.1lf -i*%1.lf\n\n",x2,x3);
        printf("+-------------------------------------------------END----------------------------------------------------+\n\n");

        break;

    case 2: // when all three roots are real and euqal

        x1 = exp(log10(d / a) / log10(e) / 3) * (-1);

       printf("The eigen values are :-\n");
        printf("\n");
        printf("λ1 = %.1lf\n\n",x1);
        printf("λ2 = %.1lf\n\n",x1);
        printf("λ3 = %.1lf\n\n",x1);
        printf("+-------------------------------------------------END----------------------------------------------------+\n\n");
        break;

    case 3:// when all three roots are real and different

        x1 = 2 * j * cos(k / 3) - (b / 3 * a);

        x2 = l * (m + n) + p;

        x3 = l * (m - n) + p;

        printf("The eigen values are :-\n");
        printf("\n");
        printf("λ1 = %.1lf\n\n", x1);
        printf("λ2 = %.1lf\n\n", x2);
        printf("λ3 = %.1lf\n\n", x3);
        printf("+-------------------------------------------------END----------------------------------------------------+\n\n");
        break;
    }
}
void eigen2(double b, double c )
{
  double a=1;
  double x,y;
  x=(-b+sqrt((pow(b,2))-(4*a*c)))/2;
  y=(-b-sqrt((pow(b,2))-(4*a*c)))/2;
  printf("The eigen values are :-\n");
  printf("\n");
  printf("λ1 = %.1lf\n\n", x);
  printf("λ2 = %.1lf\n\n", y);
}
