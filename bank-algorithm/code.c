// Banker's Algorithm  
#include<stdio.h>  
int main()  
{  
    // Process0 , Process1 , Process2 , Process3 , Process4 // Process names 
    int p , j,i , k , m;  
    p = 5; // Num of processes  
    m = 3; // Num of resources  
    int alloc[ 5 ] [ 3 ] = { { 0 , 1 , 0 }, //p0
                        { 2 , 0 , 0 } , // P1  
                        { 0 , 0 , 5 } , // P2  
                        { 0 , 10 , 1 } , // P3  
                        { 0 , 23 , 2 } } ; // P4  
    int max[ 5 ] [ 3 ] = { { 7 , 5 , 3 } , // P0 
                    { 1 , 2 , 9 } , // P1  
                    { 2 , 0 , 8 } , // P2  
                    { 3 , 0 , 7 } , // P3  
                    { 4 , 0 , 6 } } ; // P4  
    int avail[3] = { 3 , 3 , 2 } ; 
    int s[p] , answer[p] , index = 0 ;  
    for (k = 0; k < p; k++) {  
        s[k] = 0;  
    }  
    int requested[n][m];  
    for (i = 0; i < p; i++) {  
        for (j = 0; j < m; j++)  
            requested[i][j] = max[i][j] - alloc[i][j] ;  
    }  
    int y = 0;  
    for (k = 0; k < 5; k++){  
        for (i = 0; i < p; i++){  
            if (s[i] == 0){  
                int flag = 0;  
                for (j = 0; j < m; j++) {  
                    if(requested[i][j] > avail[j]){  
                        flag = 1;  
                        break;  
                    }  
                }  
                if ( flag == 0 ) {  
                    ans[index++] = i;  
                    for (y = 0; y < m; y++)  
                        avail[y] += alloc[i][y] ;  
                    s[i] = 1;  
                }  
            }  
        }  
    }  
    int flag = 1;   
    for(int i=0;i<p;i++)  
    {  
    if(s[i] == 0)  
    {  
        flag = 0;  
        printf("  system is not safe ");  
        break;  
    }  
    }  
    if (flag == 1)  
    {  
    printf("  SAFE Sequence \ n ");  
    for (i = 0; i < p - 1; i++)  
        printf(" P%d -> " , answer[i]);  
    printf(" P%d ", answer[p - 1]);  
    }  
    return(0);  
} 
