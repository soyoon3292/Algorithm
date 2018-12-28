#include <stdio.h>

// int main() {
//     printf("Hello, World! \n");

//     return 0;
// }


// int main() {
//     int a;
//     a = 10;

//     printf("value of a : %d \n", a);

//     return 0;
// }


// int main() {
//     int a;
//     a = 127;

//     printf("octal value of a is : %o. \n", a);
//     printf("decimal value of a is : %d. \n", a);
//     printf("hex value of a is : %x. \n", a);

//     return 0;
// }


// int main() {
//     float a = 3.141592f;
//     double b = 3.141592;

//     printf("a : %f \n", a);
//     printf("b : %f \n", b);

//     return 0;
// }


// int main() {
//     float a = 3.141592f;
//     double b = 3.141592;
//     int c = 123;

//     printf("a : %.2f \n", a);
//     printf("c : %5d \n", c);
//     printf("b : %6.3f \n", b);

//     return 0;
// }


// int main() {
//     int a;
//     a = 1;
//     printf("a : %d", a);
//     int b;

//     return 0;
// }


// int main() {
//     int a, A;
//     // int 1hi; // error
    
//     int hi123, h123i, h1234324;
//     // int 한글이좋아; // error

//     // int space bar; // error

//     int space_bar;
//     // int enum, long, double, int; // error

//     return 0;
// }


// int main() {
//     int a, b;
//     a = 10;
//     b = 3;

//     printf("a + b : %d \n", a + b);
//     printf("a - b : %d \n", a - b);
//     printf("a * b : %d \n", a * b);
//     printf("a / b : %d \n", a / b);
//     printf("a %% b : %d \n\n", a % b);

//     printf("a / b : %f \n", (double)a / (double)b);

//     return 0;
// }


// int main() {
//     int a = 3;
//     a += 3;
//     printf("value of a : %d \n", a);
    
//     return 0;
// }


// int main() {
//     int a, b, c, d;
//     a = b = c = d = 1;

//     a = a + 1;
//     printf("a : %d \n", a);
//     b += 1;
//     printf("b : %d \n", b);
//     ++c;
//     printf("c : %d \n", c);
//     d++;
//     printf("d : %d \n", d);

//     return 0;
// }


// int main() {
//     int a = 1;

//     printf("++a : %d \n", ++a);

//     a = 1;
//     printf("a++ : %d \n", a++);
//     printf("a : %d \n", a);

//     return 0;
// }


// int main() {
//     int a = 0xAF;
//     int b = 0xB5;

//     printf("%x \n", a & b);
//     printf("%x \n", a | b);
//     printf("%x \n", a ^ b);
//     printf("%x \n", ~a);
//     printf("%x \n", a << 2);
//     printf("%x \n", b >> 3);

//     return 0;
// }


// int main() {
//     char a;
//     a = 'a';

//     printf("value of a : %d , character : %c \n", a, a);
    
//     return 0;
// }


// int main() {
//     double celsius;

//     printf("this program changes celsius to fahrenheit. \n");
//     printf("enter celsius : ");
//     scanf("%lf", &celsius);

//     printf("celsius %f equal fahrenheit %f \n", celsius, 9 * celsius / 5 + 32);

//     return 0;
// }


int main() {
    char ch;

    short sh;
    int i;
    long lo;

    float fl;
    double du;

    printf("enter char type : ");
    scanf("%c", &ch);

    printf("enter short type : ");
    scanf("%hd", &sh);
    printf("enter int type : ");
    scanf("%d", &i);
    printf("enter long type : ");
    scanf("%ld", &lo);

    printf("enter float type : ");
    scanf("%f", &fl);
    printf("enter double type : ");
    scanf("%lf", &du);

    printf("char : %c, short : %d, int : %d ", ch, sh, i);
    printf("long : %d, float : %f, double : %F \n", lo, fl, du);

    return 0;
}