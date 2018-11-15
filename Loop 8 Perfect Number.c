//Write a program that determines whether n is a perfect number. A perfect number is a number such that the sum of its divisors is equal to the number.Example of a few perfect numbers: 6, 28, 496, 8128.




main()
{
    int n,i,f,fsum=0;

    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        f=n%i;
        if(f==0)
        {
           fsum=i+fsum;
        }


    }
    if(fsum==n)
    {
        printf("Perfect number.");
    }
    else
    {
        printf("Not a perfect number.");
    }
}
