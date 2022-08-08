#include <stdio.h>
#include <stdlib.h>
int fonFact (int n){
       int f=1,i;
       for(i=1; i<n+1; i++){
        f=f*i;
       }
    return f;
    }
int main()
{
    int n ,i,f=1;
    printf("entrer votre factorel \n");
    scanf("%d",&n);

    for(i=1; i <=n; i++){
    f=f*i;
    }
    printf("le resultat est : %d \n",f);
    printf("le resultat par la fonction est : %d \n",fonFact(n));
    return 0;
}


