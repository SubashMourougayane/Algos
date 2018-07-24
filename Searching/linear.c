#include <stdio.h>
int n;
int x;
void leniarSearch();
void interpolationSearch();
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
    // interpolationSearch(A);
    
    return 0;
}
void leniarSearch(int A[]){
    printf("linear Search");
    for(int i=0;i<n;i++){
        if(A[i]==x){
            printf("%d",i);
            break;
        }
    }
}
// void interpolationSearch(int A[]){
 
// }

