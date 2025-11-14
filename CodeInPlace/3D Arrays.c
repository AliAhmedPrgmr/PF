#include <stdio.h>

int main() {
 int mr[5][4][3],termsavg [5][3], finalavg[5], result [2];
 int x,y,z,avgt=0,hight=-99,indexhigh=0;
 
 //Inputting Data Into The 3D Array
 for (x=0;x<5;x++)
 {  
     printf("Student Number %d\n",x+1);
    for(y=0;y<4;y++)
     {
         printf("   Subject Number %d\n",y+1);
        for (z=0;z<3;z++)
        {
            printf("       Term Number %d: \n",z+1);
            scanf("%d", &mr[x][y][z]);
            
        }
     }
 }
 
 //Calculating Average Marks per Term and storing them in a 2D Array
 //Calculating the overall average and storing it in a 1D Array
 for(x=0;x<5;x++)
 {
     finalavg[x]=0 ;
     for (z=0;z<3;z++)
     {
         avgt=0;
         for (y=0;y<4;y++)
         {
             avgt+= mr[x][y][z] ;
         }
         termsavg [x][z]=avgt/4 ;
         finalavg [x] += termsavg [x][z] ;
     }
 
     finalavg[x] = finalavg[x] / 3 ;
 }

// Checking who has the highest marks 
// Checking in which index were the highest marks found
result[0]=0; result[1]=0;
 
for (x=0;x<5;x++)
{
    if (finalavg[x] > result[1])
    {
        result[0]=x; result[1] = finalavg[x];
    }
}

//Going to the same index in termsavg Array to find the term 
// in which there were the highest marks
for (x=0;x<3;x++)
{
    if ( termsavg[result[0]][x] > hight )
    {
        hight=termsavg[result[0]][x];
        indexhigh=x;
    }
}

    printf("Student Number %d was the highest overall scorer.\n",result[0]+1);
    printf("Their Highest marks were in term number %d.\n",indexhigh+1);
    return 0;
}