//Write a program which finds the product of digits of an integer n

main()
{
int n,i,p=1,d1;

scanf("%d",&n);
for(; n!=0; i++)
{d1=n%10;
p=p*d1;
n=n/10;

}
printf("%d",p);
}
