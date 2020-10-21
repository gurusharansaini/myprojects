
#include<stdio.h>

int dictfacto(long int n){
    int facto=1;
    if (n==0) { return 1; }
    else if (n==1) { return 1; }
    else if (n==5) { return 120; }
    else if (n==10) { return 3628800; }
            // this methos is very good.
    // else if (n==15) { return ; }
    // else if (n==20) { return ; }
    // else if (n==25) { return ; }
    // else if (n==30) { return ; }
    // else if (n==35) { return ; }
    // else if (n==40) { return ; }
    // else if (n==45) { return ; }
    // else if (n==50) { return ; }
    // else if (n==55) { return ; }
    // else if (n==60) { return ; }
    // else if (n==65) { return ; }
    // else if (n==70) { return ; }

    else
    {
        
         return n*dictfacto(n-1);
    
    }   
}

int main(){

    int n,facto=1;
    printf("Enter a number:--\n");
    scanf("%d",&n);

    printf("%d",dictfacto(n));
    
return 0;
}
// its need a user defined datatype for big numbers.