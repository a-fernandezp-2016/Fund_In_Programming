void main()
{

     int num, binary = 0, weight = 1;

     printf("Enter a number:\n");
     scanf("%d", &num);

     while(num>0)
      {
           binary = binary + weight *(num%2);
           num /= 2;  //num = num/2;
           weight *=10;
      }

    printf("Binary number: %d", binary);

}
