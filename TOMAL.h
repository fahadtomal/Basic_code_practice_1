#ifndef TOMAL_H_INCLUDED
#define TOMAL_H_INCLUDED



#endif // TOMAL_H_INCLUDED


void string_input()
 {
     int i,n;
     printf("Enter the number of inputs: ");
     scanf("%d",&n);

     int a[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("\n\n\n");
     printf("Inputs are :\n");
     for(i=0;i<n;i++)
     {

         printf("%d\n",a[i]);
     }
 }
