#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
// --Lab questions
int io(){
    //Write a C program to perform input/output of all basic data types.
    char ch;
    printf("Enter a char : ");
    scanf("%c",&ch);
    printf("%c\n",ch);
    return 0;
}int sum( ){
    // To Print the Sum of two Numbers.
    printf("Enter the number : ");
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("The sum is %d\n",c);
    return 0;
}int arithmatics(){
    // To print all arithmatic operators.
    printf("Enter the the two numbers  : ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Sum is %d",(a+b));
    printf("Subtraction is %d\n",(a-b));
    printf("Product is %d\n",(a*b));
    printf("Division is %d\n",(a/b));
    printf("Reminde is %d",(a%b));
    return 0;
}int recperimeter(){
    // To Print the Perimeter of the rectangle.
    printf("Enter the Length and Breadth :");
    int l,b;
    scanf("%d %d",&l,&b);
    int c=(int)2*(l+b);
    printf("Perimeter of rectangle is %d\n",c);
    return 0;
}int recarea(){
    // To Print the area of the rectangle.
    printf("Enter the Length and Breadth :");
    int l,b;
    scanf("%d %d",&l,&b);
    printf("Area of rectangle is %d\n",(l*b));
    return 0;
}int circle(){
    // To print the diameter,circumference and are of the Circle.
    printf("Enter the Radie of Circle :");
    float r;
    float p=3.14;
    scanf("%f",&r);
    printf("Diameter of circle is  %g\n",(2*r));
    printf("Circumference of Circle is %g\n",(2*p*r));
    printf("Area of Circle is %g",(p*r*r));
    return 0;
}int convertlen(){
    // To conver the CM in Meter and Killometer.
    printf("Enter the length in CM ");
    double l;
    scanf("%lf",&l);
    printf("Length in meter is %lf\n",(l/100));
    printf("Length in Killo meter is %lf",(l/100000));
    return 0;
}int Ctof(){
    // To convert the temperature from Celsious to Fahrenheit.
    printf("Enter the temperature in Celsius ");
    int c;
    scanf("%d",&c);
    float f=(c*(1.8))+32;
    printf("Temperature in Fahrenheit is %g\n",f);
    return 0;
}int Ftoc(){
    // To convert the temperature from Fahrenheit to Celsious.
    printf("Enter the temperature in Fahrenheit ");
    int f;
    scanf("%d",&f);
    float c=(f-32)*0.55;
    printf("Temperature in Celsious is %g\n",c);
    return 0;
}int contime(){
    // Write a C program to convert days into years, weeks and days.
    printf("Enter the number of days : ");
    int days,year,weeks;
    scanf("%d",&days);
    year=days/365;
    weeks=(days-(year*365))/7;
    days=days-((year*365)+(weeks*7));
    printf("Year %d Weeks %d Days %d",year,weeks,days);
    return 0;
}int power(){
    // Write a C program to find power of any number x ^ y.
    printf("Enter the Number and Power : ");
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf("%d^%d is %d",a,b,c);
    return 0;
}int sqrte(){
    // Write a C program to enter any number and calculate its square root.
    printf("Enter the Number : ");
    int a,r;
    scanf("%d",&a);
    r=sqrt(a);
    printf("Square root of %d is %d",a,r);
    return 0;
}int thangle(){
    // Write a C program to enter two angles of a triangle and find the third angle.
    printf("Enter the Both of the angle of triangles : ");
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=180-(a+b);
    printf("The third angle of triangle is : %d",c);
    return 0;
}int triarea(){
    // Write a C program to enter base and height of a triangle and find its area.
    printf("Enter the Base and height of the Triangle respectively : ");
    float b,h,a;
    scanf("%g %g",&b,&h);
    a=(b*h)/2;
    printf("Are of triangle is %g ",a);
    return 0;
}int eqtriarea(){
    // Write a C program to calculate area of an equilateral triangle
    printf("Enter the Side of Equilateral Tiangle : ");
    float a,r;
    scanf("%g",&a);
    r=(sqrt(3)*a*a)/4;
    printf("The area of Equilateral Triangle is %g",r);
    return 0;
}int marks(){
    // Write a C program to enter marks of five subjects and calculate total, average and percentage.
    float h,e,m,s,t;
    printf("Enter the marks of Hindi : \n");
    scanf("%g",&h);
    printf("Enter the marks of English : \n");
    scanf("%g",&e);
    printf("Enter the marks of Maths : \n");
    scanf("%g",&m);
    printf("Enter the marks of Science : \n");
    scanf("%g",&s);
    printf("Enter the marks of S.S.T : \n");
    scanf("%g",&t);
    float r=(h+e+m+s+t);
    printf("Total marks are %g\n",r);
    printf("Average marks are %g\n",(r/5));
    printf("Percentage is %g %%",(r/5));
    return 0;
}int si(){
    // Write a C program to enter P, T, R and calculate Simple Interest.
    float p,r,t,s;
    printf("Enter the Principle : \n");
    scanf("%g",&p);
    printf("Enter the Rate : \n");
    scanf("%g",&r);
    printf("Enter the Time in years : \n");
    scanf("%g",&t);
    s=(p*r*t)/100;
    printf("Simple interest is : %g",s);
    return 0;
}
// 16/10/22 --Lab Question
int interchange1(){
    // Program to interchange the values using assingnment operator
    printf("Enter the both number : ");
    int a,b,temp;
    scanf("%d %d",&a,&b);
    printf("Current a = %d and current b = %d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap a = %d and b = %d ",a,b);
    return 0;
}
int interchange2(){
    // Program to interchange the values using arithmatic operator
    printf("Enter the both number : ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Current a = %d and current b = %d \n",a,b);
    a=(a+b);
    b=(a-b);
    a=(a-b);
    printf("After swap a = %d and b = %d ",a,b);
    return 0;
}
int interchange3(){
    // Program to interchange the values using bitwise operator
    printf("Enter the both number : ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Current a = %d and current b = %d \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swap a = %d and b = %d ",a,b);
    return 0;
}
// 02/11/22 --Lab questions
int bill(){
    // Electricity question
    float unit,amount;
    printf("Enter the used unit of electricity : ");
    scanf("%g",&unit);
    if(unit<50){
        amount=unit*0.5;
    }
    else if(unit<=150){
        amount=(50*0.5)+(unit-50)*0.75;
    }
    else if(unit<250){
        amount=(50*0.5)+(100*.75)+(unit-150)*1.2;
    }else {
        amount=(50*0.5)+(100*.75)+(100*1.2)+(unit-250)*1.5;
    }
    amount =((amount*20)/100)+amount;
    printf("Your given amount is %g",amount);
    return 0;
}
int palindrome(){
    // Palindrome
    int num,digit;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int temp=num;
    while(num>0){
        digit=num%10;
        sum=sum*10+digit;
        num=num/10;
    }
    if(sum==temp){
        printf("it's a Palindrome");
    }
    else{
        printf("it's NOT a Palindrome");
    }
    return 0;
}
int fabonaci(){
    // Fabonaci
    printf("Enter the nth value : ");
    int a=0,b=1,c,n;
    scanf("%d",&n);
    while(a<=n){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
// 09/11/22 --Class Questions (Loops)
int sume(int n){
    // Sum of the digits of an number
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}
int rstriangle(){
    // Right Shifted Trinangle
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        // Space
        for(int k=1;k<=(n-i);k++){
            printf(" ");
        }
        // Star
        for(int j=1;j<=i;j++){
            printf("*");
        }
        // Change Line
        printf("\n");
        
    }
    return 0;
    /* Important notes 
       for inverse 
       i=n ; i>=1 ; i--
       for printing 

          *
        * * *
      * * * * *
      i=1;i<=n;i=i+2
      */
}
int perfect(){
    // Perfect Number
    int a;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    if(sum==a){
        printf("Perfect number ");
    }else{
        printf("Not Perfect number");
    }
    return 0;
}
int lengthnum(int a){
    // WRP to count length of number
    int count=0;
    while(a>0){
        count++;
        a=a/10;
    }
    return count;
}
int armstrong(int a){
    // To find armstrong
    int sum=0;
    int temp=a;
    int len=lengthnum(a);
    while(a>0){
        int digit=a%10;
        sum=sum+pow(digit,len);
        a=a/10;
    }
    if(sum==temp){
        printf("Its A armstrong number");
    }
    else{
        printf("Its NOT a armstrong numer");
    }
    return 0;
}
int strong(){
    // Strong / Peterson / Krishnamurthy
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int temp=a;
    int sum=0;
    while(a>0){
        int digit=a%10;
        int fact=1;
        for(int i=2;i<=digit;i++){
        fact=fact*i;
        }
        sum=sum+fact;
        a=a/10;
    }
    if(sum==temp){
        printf("Its a strong number");
    }
    else{
        printf("Its NOT a strong number");
    }
    return 0;
}
// Pattern Questions----
int square(){
    // Printing of Square pattern
    int n;
    printf("Enter the length of pattern : ");
    scanf("%d",&n);
    // Hollow Square
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                printf(" * ");
            }else{
                printf("   ");
            }
        }printf("\n");
    }
    return 0;
}
int hollowdim(){
    // Will print Hollow Dimand
    int n;
    printf("Enter the length of pattern : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        // Spaces
          for(int s=1;s<=n-i;s++){
                printf(" ");
             }
        // Star
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--){
        // Spaces
         for(int s=1;s<=n-i;s++){
             printf(" ");
         }
        // Star
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int fillsquare(){
    // Will print this
    /*
    * * * * * *
    * A B C D *
    * E F G H *  
    * I J K L *
    * * * * * *
    */
  int n;
    printf("Enter the length of pattern : ");
    scanf("%d",&n);
    // Filled Square
    int c=65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                printf(" * ");
            }else{
                printf(" %c ",c);
                c++;

            }
        }printf("\n");
    }
    return 0;  
}
int hbutterfly(){
    // Half Butterfly
    int n;
    printf("Enter the length of pattern : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // Left Triangle
        for(int j=1;j<=i;j++){
            printf(" * ");
        }// Space
        for(int s=1;s<=(2*(n-i));s++){
            printf("   ");

        }// Right triangle
        for(int k=1;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
int butterfly(){
    // Butterfly
    int n;
    printf("Enter the length of pattern : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // Left Triangle
        for(int j=1;j<=i;j++){
            printf(" * ");
        }// Space
        for(int s=1;s<=(2*(n-i));s++){
            printf("   ");

        }// Right triangle
        for(int k=1;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        // Left Triangle
        for(int j=1;j<=i;j++){
            printf(" * ");
        }// Space
        for(int s=1;s<=(2*(n-i));s++){
            printf("   ");

        }// Right triangle
        for(int k=1;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
int leepyear(){
    // Leap Year Code
    int n;
    printf("Enter the Year number : ");
    scanf("%d",&n);
    if(n%4!=0){
        printf("Its NOT a leap year");
    }else if(n%100!=0){
        printf("Its A leap year");
    }
    else if(n%400!=0){
        printf("Its NOT a leap year");
    }else{
        printf("Its A leap year");
    }
    return 0;
}
int sumfabonaci(){
    // Will print Sum of Fabonachi
    int n,a=0,b=1,sum=0,c;
    printf("Enter the nth number : ");
    scanf("%d",&n);
    while(a<=n){
        printf("%d ",a);
        sum=sum+a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n%d",sum);
    return 0;
}
int table(){
    // Will print the multiplication Table
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d \n",n,i,(n*i));
    }
    return 0;
}
int hcflcm(){
    // Find HCF and LCM
    int a,b,hcf;
    printf("Enter the number : ");
    scanf("%d %d",&a,&b);
    for(int i=a;i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    printf("HCF =%d , LCM is %d ",hcf,(a*b)/hcf);
    return 0;
}
int deletarr(){
    // For Deleating element of an array
    int arr[100];
    printf("Enter the amount of element u want to enter : ");
    int e,delet,count=0;
    scanf("%d",&e);
    // Entering element of array
    for(int i=0;i<e;i++){
        scanf("%d",&arr[i]);
    }
    // Deleat element
    printf("Enter the to delete : ");
    scanf("%d",&delet);
    // Deleation
    for(int i=0;i<e;i++){
        if(arr[i]==delet){
            count++;
            for(int j=i;j<e;j++){
                arr[j]=arr[j+1];
            }
        }
    }
    // Printing array
    for(int i=0;i<e-count;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
// 21/12/22 --Lab Questions (Functions)
int even(int a){
    // Find even odd through function
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int powerss(int a,int b){
    // Find power by user define number
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
int issprime(int a){
    // TO find Prime number by by user define function
    int c=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            c++;
        }
    }if(c){
        return 0;
    }else{
        return 1;
    }
}
// 28/12/22 -- Lab Questions ()
int perfectsqr(int a){
    // Will find the perfect square
    int x=a%10;
    if(x==2||x==3||x==7||x==8){
        return 0;
    }
    for(int i=0;i<a/2;i++){
            if(i*i==a){
                return 1;
            }
    }
    return 0;
}
// 4/01/22 -- Lab questions
void doscan(int *a,int *b){
    // Scaning two Element
    printf("Enetr the number : ");
    scanf("%d %d",a,b);

}   
int sumarr(int arr[],int n){
    // Sum of array
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
void scanarr(int arr[],int n){
    // Will scan array
    printf("Enter the value of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void printarr(int arr[],int n){
    // Will print arr
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int countstr(char arr[]){
    // Will Count String element with Spaces
    int c=0;
    int i=0;
    while(arr[i]!='\0'){
        c++;
        i++;
    }
    return c;
}
void tolowr(char str[]){
    // Convert String to lower Case
    for(int i=0;str[i]!='\0';i++){
        if(str[i]<91 && str[i]!=' '){
            str[i]=str[i]+32;
        }
    }
}
void toupwr(char str[]){
    // Convert String to Upper Case
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>91 && str[i]!=' '){
            str[i]=str[i]-32;
        }
    }
}

int main(){
    // Write the name of function
    fillsquare();
    }
    