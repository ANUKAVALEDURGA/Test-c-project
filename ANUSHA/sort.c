// C Program To Arrange Numbers in Ascending Order
#include <stdio.h>
sortnumbers(){
    int num[25];
    int a, j, i, n;
    
    // Asking for input
    printf("Enter total no. of elements: ");
    scanf("%d", &n);
    
    printf("Enter the numbers one by one\n");
    for (i = 0; i < n; ++i){
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (num[i] > num[j]){
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("Numbers in ascending order: \n");
    for (i = 0; i < n; ++i){
        printf("%d\n", num[i]);
    }
//    return 0;
}
