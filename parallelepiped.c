#include <stdio.h>

int main()
{
    float a,b,c,S,V;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);
    if(a <= 0 || b <= 0 || c <= 0){
    printf("Invalid parallelepiped!\n");
    return 1;
    }
    S = 2 * (a * c + b * c);
    printf("The parallelepiped's area is %.2f!\n", S);
    V = a * b * c;
    printf("The parallelepiped's volume is %.2f!\n", V);
    return 0;
}
