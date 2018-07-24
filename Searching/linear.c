#include <stdio.h>
int n;
int x;
void leniarSearch();
void binarySearch();
// void interpolationSearch();
int main()
{
    /* code */
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&x);
    leniarSearch(A);
    binarySearch(A);
    // interpolationSearch(A);

    return 0;
}
void leniarSearch(int A[]){
    printf("linear Search");
    for(int i=0;i<n;i++){
        if(A[i]==x){
            printf("\n%d",i);
            break;
        }
    }
}
void binarySearch(int A[]){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-i-1;j++){
            if(A[j]>=A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
    }

}

// void interpolationSearch(int A[]){
 
// }

