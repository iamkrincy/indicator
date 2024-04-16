#include <stdio.h>


 main()
  {
    char a[100], * ptr;
    int count;

    printf("Enter any string= ");
    gets(a);
    ptr = &a;
    count = 0;
    
    for (count=0; *ptr!='\0'; count++){
        ptr++;
    }

    printf("The length of the string is= %d", count);
}