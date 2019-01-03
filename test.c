#include <stdio.h>
#include <time.h>

#define FALSE 0
#define TRUE !FALSE

clock_t start, end;

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


// int main() {
//     char ch;

//     short sh;
//     int i;
//     long lo;

//     float fl;
//     double du;

//     printf("enter char type : ");
//     scanf("%c", &ch);

//     printf("enter short type : ");
//     scanf("%hd", &sh);
//     printf("enter int type : ");
//     scanf("%d", &i);
//     printf("enter long type : ");
//     scanf("%ld", &lo);

//     printf("enter float type : ");
//     scanf("%f", &fl);
//     printf("enter double type : ");
//     scanf("%lf", &du);

//     printf("char : %c, short : %d, int : %d ", ch, sh, i);
//     printf("long : %d, float : %f, double : %F \n", lo, fl, du);

//     return 0;
// }


// int main() {
//     int i;
    
//     printf("enter number! : ");
//     scanf("%d", &i);

//     if(i == 7) {
//         printf("you entered lucky number 7");
//     }

//     return 0;
// }


// int main() {
//     double i, j;
//     printf("enter two numbers to divide : ");
//     scanf("%lf %lf", &i, &j);

//     if(j == 0) {
//         printf("cannot divide by zero. \n");
//         return 1;
//     }
//     printf("%f is divided by %f : %f \n", i, j, i / j);

//     return 0;
// }


// int main() {
//     int score;

//     printf("enter your mathematics score : ");
//     scanf("%d", &score);

//     if(score >= 90) {
//         printf("you passed! \n");
//     }

//     if(score < 90) {
//         printf("you failed! \n");
//     }

//     return 0;
// }


// int main() {
//     int i, sum = 0;
//     for(i = 1; i < 21; ++i) {
//         sum += i;
//     }
//     printf("sum of 1~20 : %d \n", sum);

//     return 0;
// }


// int main() {
//     int N, i, j;

//     printf("enter a number : ");
//     scanf("%d", &N);
//     for(i = 1; i < N+1; ++i) {
//         for(j = 0; j < N-i; ++j)
//             printf(" ");
//         for(j = 0; j < 2*i-1; ++j)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }


// int main() {
//     int N, i, j;
    
//     printf("enter a number : ");
//     scanf("%d", &N);
//     for(i = 1; i < N+1; ++i) {
//         for(j = 0; j < i-1; ++j)
//             printf(" ");
//         for(j = 0; j < 2*(N-i)+1; ++j)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }


// int main() {
//     int sum = 0, count = 0;
//     for(int i = 0; i <= 1000; ++i) {
//         if(i%3==0 || i%5==0)
//             sum += i;
//     }
//     printf("sum : %d \n", sum);

//     return 0;
// }


// int main() {
//     int i, sum = 0;
    
//     for(i = 1; 3*i <= 1000; ++i) {
//         sum += 3*i;
//     }

//     for(i = 1; 5*i <= 1000; ++i) {
//         if((5*i)%15 != 0)
//             sum += 5*i;
//     }
//     printf("sum : %d \n", sum);

//     return 0;
// }


// int main() {
//     int first = 0, second = 1, n = 0, sum = 0;
//     while(1) {
//         if(n == 0) {
//             n = 1;
//         }
//         else {
//             n = first + second;
//             if(n > 1000000)
//                 break;
//             first = second;
//             second = n;
//         }
//         printf("n = %d \n", n);
        
//         if(n % 2 == 0)
//             sum += n;
//     }
//     printf("sum : %d \n", sum);

//     return 0;
// }


// int main() {
//     int n;
//     long long result = 1;
    
//     printf("enter a number : ");
//     scanf("%d", &n);

//     for(int i = 1; i < n+1; i++) {
//         result *= i;
//     }
//     printf("result : %lld", result);
//     return 0;
// }


// int main() {
//     int a, b, c, count = 0;
//     for(a = 3; a < 1998 ; a++) {
//         for(b = 2; a > b ; b++) {
//             for(c = 1 ; b > c ; c++) {
//                 if(a+b+c == 2000) {
//                     printf("a: %d, b: %d, c: %d \n", a, b, c);
//                     count++;
//                 }
//             }
//         }
//     }
//     printf("count : %d \n", count);
//     return 0;
// }


// int main() {
//     int i = 2, n = 0;

//     printf("enter a number : ");
//     scanf("%d", &n);

//     printf("%d =", n);
//     while(n != 1) {
//         if(n % i == 0) {
//             n /= i;
//             if(n == 1)
//                 printf(" %d\n", i);
//             else {
//                 printf(" %d *", i);
//                 i = 2;
//             }
//         }
//         else
//             i++;
//     }
//     return 0;
// }


// int main() {
//     int i = 2;
//     unsigned long long n = 9223372036854775808;
//     // printf("enter a number : ");
//     // scanf("%d", &n);

//     start = clock();
//     printf("%llu =", n);
//     while(n != 1) {
//         if(n % i == 0) {
//             n /= i;
//             if(n == 1)
//                 printf(" %d\n", i);
//             else {
//                 printf(" %d *", i);
//                 i = 2;
//             }
//         }
//         else
//             i++;
//     }
//     end = clock();
//     printf("elapsed time %ld ms. \n", end-start);

//     return 0;
// }


// int main() {
//     start = clock();
//     int a, b, c, count = 0;
//     for(a = 3; a < 1998 ; a++) {
//         for(b = 2; a > b ; b++) {
//             for(c = 1 ; b > c ; c++) {
//                 if(a+b+c == 2000) {
//                     count++;
//                 }
//             }
//         }
//     }
//     end = clock();
//     printf("count : %d \n", count);
//     printf("elapsed time %ld ms. \n", end-start);
//     return 0;
// }


// int main() {
//     int a;
//     double b;

//     b = 2.4;
//     a = (int)b;

//     printf("%d", a);
    
//     return 0;
// }


// int main() {
//     float f;
//     int i;

//     printf("enter a real number : ");
//     scanf("%f", &f);
//     if(f < 0)
//         f = -f;
//     i = (int)(f * 100) % 100;
//     printf("i = %d \n", i);

//     return 0;
// }


// int main() {
//     int prime[1000];
//     int i, index = 1, n = 3, flag = TRUE;

//     prime[0] = 2;
//     prime[1] = 3;
//     start = clock();
//     while(index != 1000) {
//         for(i = 1; i <= index; i++) {
//             if((2*n-1) % prime[i] == 0) {
//                 flag = FALSE;
//                 break;
//             }
//             flag = TRUE;
//         }
//         if(flag != FALSE && i > index)
//             prime[++index] = 2*n-1;
//         n++;
//     }
//     for(i = 0; i < index; i++) {
//         printf("#%d prime number : %d \n", i+1, prime[i]);
//     }
//     end = clock();
//     printf("elapsed time %ld ms. \n", end-start);

//     return 0;
// }


// int main() {
//     int a = 2;

//     printf("%p \n", &a);
    
//     return 0;
// }


// int main() {
//     int a, b;
//     const int* pa = &a;

//     // *pa = 3; // error
//     pa = &b;

//     return 0;
// }


// int main() {
//     int a, b;
//     int* const pa = &a;

//     *pa = 3; 
//     // pa = &b; // error

//     return 0;
// }


// int main() {
//     int *arr[3];
//     int a = 1, b = 2, c = 3;
//     arr[0] = &a;
//     arr[1] = &b;
//     arr[2] = &c;

//     printf("a : %d, *arr[0] : %d \n", a, *arr[0]);
//     printf("b : %d, *arr[1] : %d \n", b, *arr[1]);
//     printf("c : %d, *arr[2] : %d \n", c, *arr[2]);

//     printf("&a : 0x%p, arr[0] : 0x%p \n", &a, arr[0]);

//     return 0;
// }


// int countPrime(int num, int *prime) {
//     int i, index = 1, n = 3, flag = TRUE, count = 2;

//     prime[0] = 2;
//     prime[1] = 3;

//     while(index <= 1000 && 2*n-1 <= num) {
//         for(i = 1; i <= index; i++) {
//             if((2*n-1) % prime[i] == 0) {
//                 flag = FALSE;
//                 break;
//             }
//             flag = TRUE;
//         }
//         if(flag != FALSE && i > index) {
//             prime[++index] = 2*n-1;
//             count++;
//             }
//         n++;
//     }

//     return count;
// }

// int main() {
//     int num, count;
//     int prime[1000];

//     printf("enter a number : ");
//     scanf("%d", &num);

//     count = countPrime(num, prime);

//     printf("prime numbers between 1~%d : %d", num, count);
//     return 0;
// }


// void descOrder(int *arr);

// int main() {
//     int arr[10];
    
//     printf("enter 10 numbers : ");
//     for(int i = 0; i < 10; i++)
//         scanf("%d", &arr[i]);
    
//     descOrder(arr);

//     return 0;
// }

// void descOrder(int *arr) {
//     int i, j, max, temp;

//     for(i = 0; i < 10; i++) {
//         for(j = i + 1; j < 10; j++) {
//             if(arr[i] < arr[j]) {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
  
//     for(i = 0; i < 10; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }


// void addOne(int (*arr)[2]);

// int main() {
//     int arr[2][2] = {{1, 1}, {2, 2}};

//     addOne(arr);

//     return 0;
// }

// void addOne(int (*arr)[2]) {

//     for(int i = 0; i < 2; i++)
//         for(int j = 0 ; j < 2; j++) {
//             arr[i][j]++;
//             printf("%d ", arr[i][j]);
//             }
// }


int max(int a, int b);
int main() {
    int a, b;
    int (*pmax)(int, int);
    
    pmax = max;

    scanf("%d %d", &a, &b);
    printf("max(a, b) : %d \n", max(a, b));
    printf("pmax(a, b) : %d \n", pmax(a, b));

    return 0;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}