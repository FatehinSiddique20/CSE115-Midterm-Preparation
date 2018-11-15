main()
{
int n;
printf("Enter an integer to check prime number: ");
scanf("%d",&n);
int i,count=0;
for(i=1; i<=n;i++)
{
    if(n%i==0)
    {
        count++;
    }

}
if (count==2)
{
    printf("It is a prime number");
}
else
{
  printf("It is not a prime number");
}




}
