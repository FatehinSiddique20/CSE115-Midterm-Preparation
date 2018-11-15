//Write a program that takes two integers and outputs their GCD (Greatest Common Divisor).

main()
{
    int i,a,b,min,r;
scanf("%d %d",&a,&b);
min=(a<b)?a:b;

for(i=1;i<min;i++)
    if(a%i==0 && b%i==0)
{
    r=i;
}
printf("GCD = %d",r);

}
