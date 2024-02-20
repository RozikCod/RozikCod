#include<stdio.h>

void fun(int array[], int num, int search, int indices[], int *count){
    *count = 0;
    for (int i=0; i<num; i++){
        if(array[i]==search){
            indices[*count] = i+1;
            (*count)++;
        }
    }
}

int main (){
    int array2[100], search2, n;
    printf("enter your lim num"); scanf("%d", &n);
    printf("your numbers/n");
    for (int c=0; c<n; c++){scanf("%d", &array2[c]);}
    printf("enter num that you lookint for"); scanf("%d", &search2);
    
    int indices[100];
    int count;
    fun(array2, n, search2, indices, &count);
    
    if(count != 0){ 
        printf("the number is %d and locations are ", search2);
        for(int i=0; i<count; i++){
            printf("%d ", indices[i]);
        }
        printf("\n"); 
    }
    else if(count==0) {printf("you num not found");}

    return 0;
}