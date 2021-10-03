#include<stdio.h>
#include<conio.h>


void information();                    /**1-a*/

int febonaxi(int i);                   /**2-s*/          /// (Recursion)3 Items in function
void Matrix();                         /**3-t*/          /// (2d Array,Swap,nested ) 8 Items in function

void students_id_marks ();             /**4-r*/          /// (Using String + Array )

void call_by_value(int a);             /**5-q*/          ///  Call_by_value
void call_by_reference(int *a);        /**6-q*/          ///  Call_by_reference

float calculator (double a,double b);  /**7-p*/          ///  Parameter
int squre(int a,int b);                /**8-e*/
void root();                           /**9-d*/
void cuberoot();                       /**10-c*/

double britto_khetrofol(float a);      /**11-b*/

void namta_sum();                      /**12-f*/
double percent();                      /**13-g*/
int sumision();                        /**14-h*/
float Avarage();                       /**15-i*/

int factorial(int a);                  /**16-j*/

void prime_number_all();               /**17-k*/
void prime_number ();                  /**18-k*/

void perfect_all();                    /**19-l*/
void perfect_or_not();                 /**20-l*/

void Equation();                       /**21-m*/

void gosagu();                         /**22-n*/
void losagu();                         /**23-o*/



int main()
{

 char ch,cd;
 int ff,gg,kk,ll,count=0;
 int c,d,i,b,e,f;
  float  dd;
    double bb,cc;


do{
        if(count%2==0){


    printf(" Enter your choice ...........\n\n\t  \\++++++++++++++++++++++++\n\t   \\+++++++++++++++++++++\n\t    \\\\");
    printf("\n\t     \\\\\   a: Information\n\t      \\\\\   b: Area of Cricle\n\t       \\\\\   c: Cube-Root  \n\t        \\\\\   d: Root \n\t         \\\\\   e: Square ");
    printf("\n\t          \\\\\   f: Namta+Sum \n\t           \\\\\   g: Percent \n\t            \\\\\   h: Summation \n\t");
    printf("\t     \\\\\   i: Avarage\n\t\t      \\\\\   j: Factorial\n\t\t       \\\\\   k: Prime Number                               Matrix t: //\n\t\t        \\\\\   l: Perfect Number                        Fibonacci s: //\n\t\t         \\\\\   m: Equation                   Students Id Marks : r //\n\t\t          \\\\\   n: Gosagu             Call by value & reference :q//\n\t\t           \\\\\   o : Losagu\t                   Calculator :p//\n\t");
    printf("\t\t    \\\\\t\t\t                               //\n\t\t\t     \\++++++++++++++++++++++++++++++++++++++++++++++++//\n\t\t\t      \\++++++++++++++++++++++++++++++++++++++++++++++//\n\n");
    }

    else

    {
    system("COLOR 0B");


    printf("\t        ***************\n");
    printf("\t     **                **  a: Information\n");
    printf("\t   **                    **   \n");
    printf("\t  **                       **  b: Area of Circle \n");
    printf("\t **                          **   \n");
    printf("\t**                             **  c: Cube-Root \n");
    printf("\t**   Enter Your                 ** \n");
    printf("\t**   Choice.....                 **  d: Root\n");
    printf("\t                                  **                  || p: Calculator      \n");
    printf("\t                                  **  e: Square       ||      \n");
    printf("\t                                  **                  || q: Call by value & reference   \n");
    printf("\t                                  **  f: Namta        ||\n");
    printf("\t                                  **                  || r: Students Id Marks \n");
    printf("\t                                 **  g: Percent       ||   \n");
    printf("\t                                **                    || s: Fibonacci   \n");
    printf("\t                               **  h: Summation       ||  \n");
    printf("\t                             **                       || t: Matrix\n");
    printf("\t                            **  i: Average\n");
    printf("\t                          ** \n");
    printf("\t                        **  j: Factorial\n");
    printf("\t                      ** \n");
    printf("\t                    **  k: Prime Number\n");
    printf("\t                  ** \n");
    printf("\t                **  l: Perfect Number\n");
    printf("\t              **\n");
    printf("\t            **  m: Equation\n");
    printf("\t          **\n");
    printf("\t        **  n: Gosagu\n");
    printf("\t      **\n");
    printf("\t    **  o: Losagu\n");
    printf("\t   **\n");


    }


    count++;

    char k;
    printf("\n\tChoice: ");
    scanf(" %c",&k);
    printf("\n");



  switch (k)
  {
    case 'a':
system("COLOR FC");
        information();
    break;


    case 'b':
system("COLOR 0D");

        float r;
        printf("#AREA OF CIRCLE\n\n Enter the radius length of the circle(m) : ");
        scanf("%f",&r);
        printf("Area %lf m^2",britto_khetrofol(r));
    break;


    case 'c':
system("COLOR 1F");
        cuberoot();
        break;


    case 'd':
system("COLOR F1");
        root();
        break;


    case 'e':
system("COLOR 09");
        int x,y;
        printf("#SQUARE\n\nwhich is the base: ");
        scanf("%d",&x);
        printf("which is the power:");
        scanf("%d",&y);
        printf("%d",squre(x,y));
        break;


    case 'f':
system("COLOR 74");
        namta_sum();
        break;


    case 'g':
system("COLOR F3");
        double num1,num2,num3;
        printf("# Percent\n\nPlease enter a number : ");
        scanf("%lf",& num1);
        printf("Please enter a percent : ");
        scanf("%lf",& num2);
        num3=percent(num1,num2);
        printf("%Result : %lf",num3);
        break;


    case 'h':
system("COLOR 0B");
       printf("Total : %d",sumision());
        break;


    case 'i':
system("COLOR 6F");
        printf("result %f",Avarage());
        break;


    case 'j':
system("COLOR B0");
        int a;
        printf("# Factorial \n \nEnter the number (1-16) which you need to be factorial : ");
        scanf("%d",&a);
        printf("Result: %d",factorial(a));
        break;


    case 'k':
system("COLOR F6");
        printf("# PRIME NUMBER\n\nEnter choice,,,,\n 1: Prime Number all(1-100) \t 2: Prime or Not\nChoice: ");
 scanf(" %d",&kk);


 switch(kk)
 {
 case 1:

   prime_number_all();
     break;


 case 2:
     prime_number();
    break;

 }
    break;


 case 'l':
system("COLOR 8C");
    printf("# PERFECT NUMBER\n\nEnter Choice,,,,\n 1: Perfect Number all \t 2: Perfect or Not\nChoice: ");
 scanf(" %d",&ll);

         switch(ll)
 {
 case 1:
     perfect_all();
     break;


 case 2:
     perfect_or_not();
    break;

 }
    break;


 case 'm':
system("COLOR 2F");
     Equation();


    break;
 case 'n':
system("COLOR 1B");
     gosagu();


    break;
 case 'o':
system("COLOR 85");
    losagu();
    break;


case 'p':
system("COLOR B0");
  do
    {
    printf("Calculator\nEnter 2 numbers : ");
    scanf("%lf%lf",&bb,&cc);
    dd=calculator (bb,cc);
    printf("result= %.2f",dd);
    printf("\n\nagain? press A\n\n\t");
    scanf(" %c",&cd);
    }while(cd=='A');
 break;


 case 'q':
     system("COLOR FB");
    printf("Enter a number (x): ");
    scanf("%d",&gg);
   printf("\n1:call by value\n2:call by reference\nchoice: ");
   scanf("%d",&ff);
   if(ff==1)
	call_by_value(gg);
	if(ff==2)
    call_by_reference(&gg);

break;


 case 'r':
students_id_marks ();
break;


case 's':
    system("COLOR E0");
    printf("inter Fibonacci  position : ");
    scanf("%d",&d);
    c=febonaxi(d);
    printf("\nFibonacci number :%d\n\n\n",c);


    printf("Fibonacci series \n ");
    for(i=0;i<=d;i++)
    {

     b=febonaxi(i);
    printf("%d  ",b);

    }


printf("\nEnter Number to cheek : ");
    scanf("%d",&e);
    f=-1;
    for(i=0;i<=40;i++)
    {
      if(e==febonaxi(i))
      {printf("\nposition %d",i);
        f=i;
        break;
      }

    }
 if(f==-1)
printf("\nNo position in febonacci");
break;


case 't':
    Matrix();
    break;

    default:
        system("COLOR C0");
        {printf("Here is no use of your choise");
         printf("\n\n");
         printf("\t\t\t\t\t     ****     ****    *******   *******  **      ** \n");
         printf("\t\t\t\t\t    **  **   **  **   **    **  **    **  **    **     \n");
         printf("\t\t\t\t\t   **       **    **  **    **  **    **   **  **       \n");
         printf("\t\t\t\t\t    **      **    **  **   **   **   **     ****          \n");
         printf("\t\t\t\t\t     *****  **    **  ** **     ** **        **   \n");
         printf("\t\t\t\t\t         ** **    **  **  **    **   **      **    \n");
         printf("\t\t\t\t\t    **  **   **  **   **   **   **    **     **          \n");
         printf("\t\t\t\t\t     ****     ****    **    **  **     **    **           \n");



        }
  }
       printf("\n\n\n\t\t\t\t\t******************************\n\t\t\t\t\t*Do you want to do it again? *\n\t\t\t\t\t*If yes, \t\t     *\n\t\t\t\t\t*      press y\t\t     *\n\t\t\t\t\t******************************\n ");
       printf("\t\t\t\t\t\t");
       scanf(" %c",&ch);
       if(ch=='y')
       {system("COLOR 0A");
        printf("\n");
        printf("\t\t\t\t\t**      **  ********    ****  \n");
        printf("\t\t\t\t\t **    **   ********   **  **        \n");
        printf("\t\t\t\t\t  **  **    **        **          \n");
        printf("\t\t\t\t\t   ****     *****     **            \n");
        printf("\t\t\t\t\t    **      *****      *****             \n");
        printf("\t\t\t\t\t    **      **             **       \n");
        printf("\t\t\t\t\t    **      ********   **  **   \n");
        printf("\t\t\t\t\t    **      ********    ****  \n");



       }


       printf("\n\n");

}while(ch=='y');
    getch();
    return 0;
}





double britto_khetrofol(float r)
{
double britto_khetrofol;


    britto_khetrofol=2*3.1416*r*r;
    return britto_khetrofol;
}

 void cuberoot()
{


      int x=0,z=0;
double a;
double y=0;
printf("#CUBE-ROOT\n\nEnter the value which need to cube-root\nif you enter a wrong value nothing could be show:\t");
scanf("%lf",&a);

for(x=2,z=2;x<=a/2,z<=a/2;x++,z++)
    {   y=a/(x*z);
        if(x==y&&z==y)
        printf("\nAns:%d",x);
        }

}




void root()
{int x;

double a,y;
printf("#ROOT\n\nEnter the value which need to root\nif you enter a wrong value nothing could be show:\t");
scanf("%lf",&a);
for(x=2;x<=a/2;x++)
    {   y=a/x;

        if(x==y)
        printf("Ans: %d",x);
        }


}



int squre(int x,int y)
{int i=1,mul=1;


for(;i<=y;i++){
    mul*=x;
}

  return mul;

}


void namta_sum()
{
    int i,j,l,m=0;
    printf("NAMTA\n\nEnter your number:  ");
    scanf("%d",&l);
    printf(" %d = %d =%d x 1 = %d \n",l,l,l,l);
    for(i=1;i<10;i++){
        for(j=1;j<=i;j++){
            printf(" %d",l);
            printf(" +");
        }

        m++;

        if(l*m<l*11){
            printf(" %d = %d=%d x %d =%d \n",l,l*m+l,l,m+1,l*m+l );
            }
        }

}


double percent(double num1,double num2)
{

        return (num2*num1/100);

    }

 int sumision()
{
int  i,sum=0,p;
printf("#SUMMATION\n\nEnter the numbers which you need to sum \nwhen you want to get result enter value -1 \nits not count with sum\n\n");
while(i)
{
    printf("Enter number :");
    scanf("%d",&p);
    sum=sum+p;
if(p==-1)
{break;}
    }

 return (sum+1);

}

 float Avarage()
{
double  i,sum=0,p,count=0;
float a,c;
printf("# AVERAGE\n\nEnter the numbers which you need to sum \nwhen you want to get result enter  -1 \nits not count with average\n\n");
while(i)
{
    printf("Enter number :");
    scanf("%lf",&p);
    sum=sum+p;
    count++;
if(p==-1)
{break;}
    }
a=sum+1;
c=count-1;

return a/c;

}
int factorial(int a)
{
    int i,fac=1;


    for(i=1;i<=a;i++)
    {
        fac*=i;
    }
    return fac;


}


 void prime_number_all()
{


    int i,j;
    printf("\n# PRIME NUMBER ALL \n\n (1-100)Prime numbers   ");
    for(i=1;i<=100;i++)
        {
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }if(i==j){
        printf(":%d\n\t\t\t",i);}
    }

}


void prime_number()
{ char ch;
  do{
    int i,j,count=0;

    printf("#PRIME NUMBER CHEAK\n\nEnter correct value else it show gharbage value\n\n\tcheak prime or not prime\n\n\n\t Enter the number:  ");
    scanf("%d",&j);
        for(i=2;i<=j/2;i++)
    {
        if(j%i==0)
            count++;
    }
    printf("\n");
    if(count==0)
        printf("\t   %d is a prime number",j);
    else
        printf("\t   %d is not a prime number",j);
    printf("\n\nIf you want to try again, press y\n\n\t");
    scanf(" %c",&ch);
  }
  while(ch=='y');

}

void perfect_all()
{
    int i,j,n,sum=0;
    printf("# PERFECT ALL\n\nEnter any number to print perfect number up to :");
    scanf("%d",&n);


    printf("\nAll perfect number between 1 to %d:\n",n);

    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }

        if(sum==i)
        {
            printf("%d is a perfect number\n",i);
        }
    }



}

void perfect_or_not()
{char ch;

    do{
    int i, num ,sum=0;
    printf("#PERFECT CHEAK\n\nEnter A Number :  ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    if(sum==num)
        printf("%d is a perfect number",num);
    else
        printf("%d is not a perfect number",num);

        printf("\n\nIf you want to do it again ,Press y\n");
        scanf(" %c",&ch);
}
while(ch=='y');


}

void Equation()
{int a1,b1,c1,a2,b2,c2;
 float l,m,n,x,y;


 printf("# Equation\n\n");

    printf("a1*X+b1*Y=c1\n");
    printf("a2*X+b2*Y=c2\n\n\n");


    printf("a1=");
    scanf("%d",&a1);

    printf("b1=");
    scanf("%d",&b1);

    printf("c1=");
    scanf("%d",&c1);







    printf("a2=");
    scanf("%d",&a2);

    printf("b2=");
    scanf("%d",&b2);

    printf("c2=");
    scanf("%d",&c2);

    printf("\n\n\t%dX+(%d)Y=%d\n",a1,b1,c1);
    printf("\t%dX+(%d)Y=%d\n\n",a2,b2,c2);

    l=(b2*c1-b1*c2);
    m=(a1*b2-a2*b1);
    n=(a1*c2-a2*c1);
    if((int)m==0)
        printf("It can't be masure");
    else
    {x=l/m;
    y=n/m;
    printf("\t\t X=%.2f\n",x);
    printf("\t\t Y=%.2f",y);
    }

}

void gosagu()
{
    int i,j,k,i1,j1,k1;
    printf("# GOSAGU\n\nEnter the value of 3 numbers \n");
    scanf("%d %d %d",&i1,&j1,&k1);
    if(i1<j1&&i1<k1)
        {
         for(i=i1;i>=1;i--)
            {
            if(i1%i==0&&j1%i==0&&k1%i==0)
                {
                printf("Gosagu : %d\n",i);
                    break;
                }
            }
        }

     else if (j1<i1&&j1<k1)

        {
         for(j=j1;j>=1;j--)
            {
            if(i1%j==0&&j1%j==0&&k1%j==0)
                {
                printf("Gosagu : %d\n",j);
                    break;
                }
            }
        }
     else
        {
         for(k=k1;k>=1;k--)
            {
            if(i1%k==0&&j1%k==0&&k1%k==0)
                {
                printf("gosagu : %d\n",k);
                    break;
                }
            }
        }



}
void losagu()
{
    int i,j,k,i1,j1,k1,p,x;
    printf("#LOSAGU\n\nEnter the value of 3 numbers \n");
    scanf("%d %d %d",&i1,&j1,&k1);
    x=i1*j1*k1;
    if(i1<j1&&i1<k1)
        {
         for(i=i1;i>=1;i--)
            {
            if(i1%i==0&&j1%i==0&&k1%i==0)
                {p=i;
                //printf("gosagu : %d\n",i);
                    break;
                }
            }
        }

     else if (j1<i1&&j1<k1)

        {
         for(j=j1;j>=1;j--)
            {
            if(i1%j==0&&j1%j==0&&k1%j==0)
                {p=j;
               // printf("gosagu : %d\n",j);
                    break;
                }
            }
        }
     else/// if(k1<j1&&k1<i1)
        {
         for(k=k1;k>=1;k--)
            {
            if(i1%k==0&&j1%k==0&&k1%k==0)
                {p=k;
               // printf("gosagu : %d\n",k);
                    break;
                }
            }
        }
        printf("Losagu:%d",x/p);


}

void Matrix()
{
     int i,j,k,l,c,x;
    char d,e;
    float a,b;
    float ara_A[3][3];
    float ara_B[3][3];
    float ara_Ax[3][3];
    float ara_Bx[3][3];
    float temp[3][3];
   do{ printf("\n  Number of matrix 1 or 2 : ");
    scanf("%d",&c);
    if(c==1)
    {  printf("\n\n\tMatrix A\n\n");
     printf("\n");
    printf("\t __\t\t   __\n");
    printf("\t|\t\t     |\n");
    printf("\t| A11\tA12\tA13  |\n");
    printf("\t|\t\t     |\n");
    printf("\t| A21\tA22\tA23  |\n");
    printf("\t|\t\t     |\n");
    printf("\t| A31\tA32\tA33  |\n");
    printf("\t|__\t\t   __|\n\n\n");
         for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {printf("\tA%d%d = ",i+1,j+1);
        scanf("%f",&ara_A[i][j]);
        }
       printf("\n\n");
       printf("\tMatrix A\n\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%10.2f",ara_A[i][j]);
        if(j==2)
            printf("\n");
    }
    a =ara_A[0][0] * ( ara_A[1][1]*ara_A[2][2]-ara_A[2][1]*ara_A[1][2]) - ara_A[0][1] * ( ara_A[1][0]*ara_A[2][2]-ara_A[2][0]*ara_A[1][2]) + ara_A[0][2] * ( ara_A[1][0]*ara_A[2][1]-ara_A[2][0]*ara_A[1][1]);
    printf("\nWant Determiner ? press D : ");
    scanf(" %c",&d);
    if(d=='D')
printf("\n Determiner : %.2f",a);
printf("\n\nWant start? press S : ");
    scanf(" %c",&e);
    }
    if(c==2)
    {  system("COLOR 0E");
        printf("\n\n\tMatrix A\n\n");
        printf("\n");
    printf("\t __\t\t   __\n");
    printf("\t|\t\t     |\n");
    printf("\t| A11\tA12\tA13  |\n");
    printf("\t|\t\t     |\n");
    printf("\t| A21\tA22\tA23  |\n");
    printf("\t|\t\t     |\n");
    printf("\t| A31\tA32\tA33  |\n");
    printf("\t|__\t\t   __|\n\n\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {printf("\tA%d%d = ",i+1,j+1);
        scanf("%f",&ara_A[i][j]);
        }
        system("COLOR 09");
        printf("\n\n\tMatrix B\n\n");
 printf("\n");
    printf("\t __\t\t   __\n");
    printf("\t|\t\t     |\n");
    printf("\t| B11\tB12\tB13  |\n");
    printf("\t|\t\t     |\n");
    printf("\t| B21\tB22\tB23  |\n");
    printf("\t|\t\t     |\n");
    printf("\t| B31\tB32\tB33  |\n");
    printf("\t|__\t\t   __|\n\n\n");
        for(k=0;k<3;k++)
        for(l=0;l<3;l++)
        {printf("\tB%d%d = ",k+1,l+1);
        scanf("%f",&ara_B[k][l]);
        }

        printf("\n\n");
printf("\tMatrix A\n");


    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%10.2f",ara_A[i][j]);
        if(j==2)
            printf("\n");
    }
 printf("\n\n\n\n");
 printf("\tMatrix B\n\n");
      for(k=0;k<3;k++)
        for(l=0;l<3;l++)
    {
        printf("%10.2f",ara_B[k][l]);
        if(l==2)
            printf("\n");
    }
    do
        {
            system("COLOR 0D");
             printf("\n");
    printf("\n");
    printf("                        M\n");
    printf("                        A\n");
    printf("                        T\n");
    printf("                        R\n");
    printf("                        I\n");
    printf("                        X\n");
    printf("                   ___||_||___\n");
    printf("                  ||---------|| \n");
    printf("                  ||         ||1:Mat A +Mat B\n");
    printf("              ____||         ||____\n");
    printf("             ||----'         '----||\n");
    printf("             ||                   ||2:Mat A - Mat B\n");
    printf("         ____||                   ||____\n");
    printf("        ||----'                   '----||\n");
    printf("4:Determiner Mat A||                   ||3:Mat A x Mat B\n");
    printf("5:Determiner Mat B||                   ||____\n");
    printf("             ||----'                   '----||6:Swap Matrix \n\n");
    printf("             ||7:Mat B x Mat A           ||\n");
    printf("         ____||8:Mat B - Mat A           ||____\n");
    printf("        ||----'                          '----||\n");
            printf("\n\n    \n\tchoice: ");
scanf("%d",&x);
switch(x)
{
   case 1:

    printf("\n\n");
    printf("Matrix A + matrix B\n\n");
      for(i=0,k=0;i<3,k<3;i++,k++)
        for(j=0,l=0;j<3,l<3;j++,l++)
    {
        printf("%10.2f",ara_A[i][j]+ara_B[k][l]);
        if(l==2)
            printf("\n");
    }
    break;

   case 2:

        printf("\n\n");
    printf("Matrix A - matrix B\n\n");
      for(i=0,k=0;i<3,k<3;i++,k++)
        for(j=0,l=0;j<3,l<3;j++,l++)
    {
        printf("%10.2f",ara_A[i][j]-ara_B[k][l]);
        if(l==2)
            printf("\n");
    }
    break;
   case 3:
ara_Ax[0][0]=ara_A[0][0]*ara_B[0][0]+ara_A[0][1]*ara_B[1][0]+ara_A[0][2]*ara_B[2][0];
ara_Ax[0][1]=ara_A[0][0]*ara_B[0][1]+ara_A[0][1]*ara_B[1][1]+ara_A[0][2]*ara_B[2][1];
ara_Ax[0][2]=ara_A[0][0]*ara_B[0][2]+ara_A[0][1]*ara_B[1][2]+ara_A[0][2]*ara_B[2][2];
ara_Ax[1][0]=ara_A[1][0]*ara_B[0][0]+ara_A[1][1]*ara_B[1][0]+ara_A[1][2]*ara_B[2][0];
ara_Ax[1][1]=ara_A[1][0]*ara_B[0][1]+ara_A[1][1]*ara_B[1][1]+ara_A[1][2]*ara_B[2][1];
ara_Ax[1][2]=ara_A[1][0]*ara_B[0][2]+ara_A[1][1]*ara_B[1][2]+ara_A[1][2]*ara_B[2][2];
ara_Ax[2][0]=ara_A[2][0]*ara_B[0][0]+ara_A[2][1]*ara_B[1][0]+ara_A[2][2]*ara_B[2][0];
ara_Ax[2][1]=ara_A[2][0]*ara_B[0][1]+ara_A[2][1]*ara_B[1][1]+ara_A[2][2]*ara_B[2][1];
ara_Ax[2][2]=ara_A[2][0]*ara_B[0][2]+ara_A[2][1]*ara_B[1][2]+ara_A[2][2]*ara_B[2][2];
      printf("\n\n\tMatrix A x Matrix B\n\n");


    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%15.2f",ara_Ax[i][j]);
        if(j==2)
            printf("\n");
    }

    break;
   case 4:



a =ara_A[0][0] * ( ara_A[1][1]*ara_A[2][2]-ara_A[2][1]*ara_A[1][2]) - ara_A[0][1] * ( ara_A[1][0]*ara_A[2][2]-ara_A[2][0]*ara_A[1][2]) + ara_A[0][2] * ( ara_A[1][0]*ara_A[2][1]-ara_A[2][0]*ara_A[1][1]);

printf("\n Determiner : %.0f",a);
break;
case 5:
    b=ara_B[0][0] * ( ara_B[1][1]*ara_B[2][2]-ara_B[2][1]*ara_B[1][2]) - ara_B[0][1] * ( ara_B[1][0]*ara_B[2][2]-ara_B[2][0]*ara_B[1][2]) + ara_B[0][2] * ( ara_B[1][0]*ara_B[2][1]-ara_B[2][0]*ara_B[1][1]);
    printf("\n Determiner : %.2f",b);
    break;
case 6:printf("Before swap\n\n");
  printf("\tMatrix A\n\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%10.2f",ara_A[i][j]);
        if(j==2)
            printf("\n");
    }
    printf("\n\n\tMatrix B\n\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%10.2f",ara_B[i][j]);
        if(j==2)
            printf("\n");
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {temp[i][j]=ara_A[i][j];
        ara_A[i][j]=ara_B[i][j];
        ara_B[i][j]=temp[i][j];
        }

     printf("\n\nAfter swap\n\n");
  printf("\tMatrix A\n\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%10.2f",ara_A[i][j]);
        if(j==2)
            printf("\n");
    }
    printf("\n\n\tMatrix B\n\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%10.2f",ara_B[i][j]);
        if(j==2)
            printf("\n");
    }

     for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {temp[i][j]=ara_A[i][j];
        ara_A[i][j]=ara_B[i][j];
        ara_B[i][j]=temp[i][j];
        }

    break;

case 7:
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {temp[i][j]=ara_A[i][j];
        ara_A[i][j]=ara_B[i][j];
        ara_B[i][j]=temp[i][j];
        }

ara_Bx[0][0]=ara_A[0][0]*ara_B[0][0]+ara_A[0][1]*ara_B[1][0]+ara_A[0][2]*ara_B[2][0];
ara_Bx[0][1]=ara_A[0][0]*ara_B[0][1]+ara_A[0][1]*ara_B[1][1]+ara_A[0][2]*ara_B[2][1];
ara_Bx[0][2]=ara_A[0][0]*ara_B[0][2]+ara_A[0][1]*ara_B[1][2]+ara_A[0][2]*ara_B[2][2];
ara_Bx[1][0]=ara_A[1][0]*ara_B[0][0]+ara_A[1][1]*ara_B[1][0]+ara_A[1][2]*ara_B[2][0];
ara_Bx[1][1]=ara_A[1][0]*ara_B[0][1]+ara_A[1][1]*ara_B[1][1]+ara_A[1][2]*ara_B[2][1];
ara_Bx[1][2]=ara_A[1][0]*ara_B[0][2]+ara_A[1][1]*ara_B[1][2]+ara_A[1][2]*ara_B[2][2];
ara_Bx[2][0]=ara_A[2][0]*ara_B[0][0]+ara_A[2][1]*ara_B[1][0]+ara_A[2][2]*ara_B[2][0];
ara_Bx[2][1]=ara_A[2][0]*ara_B[0][1]+ara_A[2][1]*ara_B[1][1]+ara_A[2][2]*ara_B[2][1];
ara_Bx[2][2]=ara_A[2][0]*ara_B[0][2]+ara_A[2][1]*ara_B[1][2]+ara_A[2][2]*ara_B[2][2];

 printf("\n\n\tMatrix B x Matrix A\n\n");


    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("%15.2f",ara_Bx[i][j]);
        if(j==2)
            printf("\n");
    }


    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {temp[i][j]=ara_A[i][j];
        ara_A[i][j]=ara_B[i][j];
        ara_B[i][j]=temp[i][j];
        }



    break;
case 8:
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {temp[i][j]=ara_A[i][j];
        ara_A[i][j]=ara_B[i][j];
        ara_B[i][j]=temp[i][j];
        }

        printf("\n\n");
    printf("Matrix B - matrix A\n\n");
      for(i=0,k=0;i<3,k<3;i++,k++)
        for(j=0,l=0;j<3,l<3;j++,l++)
    {
        printf("%10.2f",ara_A[i][j]-ara_B[k][l]);
        if(l==2)
            printf("\n");
    }


    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {temp[i][j]=ara_A[i][j];
        ara_A[i][j]=ara_B[i][j];
        ara_B[i][j]=temp[i][j];
        }

    break;
default :
    printf("Wrong");
}
    printf("\n\nWant Again?\nPress A : ");
    scanf(" %c",&e);
    }while(e=='A');
    printf("\nWant start? press S : ");
    scanf(" %c",&e);
    }
}while(e=='S');
}



void students_id_marks ()
{
    int i,j,k,o;
int n=1,l=1,m=0;
int ara[100];
 char stn[100][20];
 char st[100][20];

 int stm[100];
 printf("Inter student names use space at last press 0\n\n");
    while(1==scanf("%s",stn[n]))
    {
    if(stn[n][0]=='0')
        break;
    n++;
    }
    printf("\nInter student id use space at last press 0\n\n");
    while(1==scanf("%s",st[l]))
    {
    if(st[l][0]=='0')
        break;
    l++;
    }
    printf("\nEnter marks use space at lase press -1  \n");
    while(1==scanf("%d",&ara[m]))
    {


    if(ara[m]==-1)
        break;
    m++;
    }

    printf("\nStudent id \t\t student name \t\t student marks \n");
    for(i=0,j=1;i<n-1,j<n;i++,j++)
    {printf("\n %s\t\t\t%s\t\t\t%d",st[j],stn[j],ara[i]);

    }


}


void call_by_value(int x)
 {
	printf("x = %d before adding 25.\n", x);
	x += 25;
	printf("x = %d after adding 25.\n", x);
}



void call_by_reference(int *y)
{
	printf("x = %d before adding 25.\n", *y);
	(*y) += 25;
	printf("x = %d after adding 25.\n", *y);
}


float calculator (double a,double b)
{int x;
printf("1:Summation \n2:Minus \n3:Cross\n4:Divide \n Enter Choice: ");
    scanf("%d",&x);
    if(x==1)

        return a+b;
    if(x==2)
       {

        return a-b;}
    if(x==3)
    {

        return a*b;
    }
    if(x==4)
        return a/b;
    else
        return 0;
}


int febonaxi(int i)
{
    if(i==0)
        return i;
    if(i==1)
        return i;
    else
        return (febonaxi(i-1)+febonaxi(i-2));
}



void information()
{
    printf("\n\n\n\n\n\n\n\n");
    printf("\n");
    printf("                           ___________________________________________________________________\n");
    printf("                          ||-----------------------------------------------------------------||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||                        An Assignment On                         ||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||                 Structured Programming Language                 ||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||   Submitted by                        Submitted to              ||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||   Name: Dharony                       SANJIDA AKTER             ||\n");
    printf("                          ||   Roll: CSE170301144                  B.Sc & M.Sc in CSE        ||\n");
    printf("                          ||   Depertment: CSE                     Senior Lecturer in CSE    ||\n");
    printf("                          ||   Section: A                          Northern University BD    ||\n");
    printf("                          ||   Semister: fall 2017                                           ||\n");
    printf("                          ||   email:-                                                       ||\n");
    printf("                          ||   towhidarahman12@gmail.com                                     ||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||                                                                 ||\n");
    printf("                          ||_________________________________________________________________||\n");
    printf("                          ''-------------------------//------------\\\\\------------------------''\n");
    printf("                                                    //______________\\\\\n");
    printf("                                                    \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\n");



}



