

#include <stdio.h>
int main()
{
    // kivabe print kora jai
    
    printf("hello world \ni am  a developer \nnew line hobe");
    printf("hello world \t\t new line hobe");
    printf("\n\n");
    int zubair = 1000;
    float karim = 10.5;
    char habib = 's';
    printf("%d %0.1f %c" , zubair , karim , habib);

    // // inpute 30% and 40%

    int numOne , numTwo ;
    char p ;
    scanf("%d%% %d%%" , &numOne,&p,&numTwo,&p );
    scanf("%d%% %d%%" , &numOne, &numTwo );
    printf("%d%% %d%%" , numOne , numTwo);

    // // long integer limition

    int a = 1234567890;
    long long int b = 12345678912345678;
    float c = 3.1234567;
    double d = 3.123456789123456;
    printf("%d , %lld , %0.15f ,%0.15lf" , a , b , c , d);

    // Arithmetic Operators  + - / %

    int a = 3 , b = 20;
    int one = 5;
    int five = 3;
    int two = 50;
    int sum = one + two ;
    int msm = one - two ;
    int div = two / one ;
    float div2 = one*1.0 / five ;
    float div3 = b*1.0 / a ;
    int mod = two % one ;

    printf("%d \n" , sum );
    printf("%d \n" , msm  );
    printf("%d \n" , div );
    printf("%0.2f \n" , div2 );
    printf("%0.2f \n" , div3 );
    printf("%d" , mod );

    // Relational Operators  > , < , <= , >= , == , != ,
    // Logical Operators && , ||
    // C te 0 mane false, 1 mane true.

    // Conditional Statement

    int conA = 200;
    int conB = 400;
    if ( conA == conB)
    {
        printf("hello world");
    }else{
        printf("nothing to do");
    }

    printf("\n");

    int tk;
    scanf("%d" , &tk);
    if (tk >= 100)
    {
       printf("khabo ami kacchi khabo");
    }else if ( tk >= 50)
    {
        printf("ami barbag khabo");
    }else if (tk >= 20)
    {
      printf("ok ice cream khabo");
    } else{
        printf("khabo na ami ");
    }

    // // Nested If Else

    int cox;
    scanf("%d", &cox);
    if (cox >= 5000)
    {
        printf("go to cox bazer\n");
        if (cox > 10000)
        {
            printf("ami jabo senmartin \n");
        }
        else
        {
            printf("dhaka cole jabo \n");
        }
    }
    else
    {
        printf("kothao jabo na ami");
    }

    return 0;
}

//   \t -> new tab -> 4 space
//   \n -> new line
//   \\ -> 2 ber use korle 1 ber hobe -> spiceal case
//   %% -> 2 ber use korle 1 ber hobe -> spiceal case

// variable

// int = -100 , 100 , 30 ;  -> 4 byte
// float = .4 , 5.5;        -> 4 byte
// char = 'a' , 'A' , '@' ; -> 1 byte
// bool =  true or false ;

// to print
// int -> %d
// float -> %f
// char -> %c

// memory (ram) -> int -> 4 byte
// memory (ram) -> float -> 4 byte
// integer limitation ( -10^9  10^9 )
// long long integer limitation ( -10^18  10^18 )