//
//  main.cpp
//  l*l lattice
//
//  Created by Mahgol Gholampour on 6/14/22.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
   
    int a[5][5], i, j;
    
    //i & j are representative of size of the lattice
    
    for(i = 0 ; i < 30 ; ++i)
    
     {for(j = 0 ; j < 30 ; ++j)
        
    {a[i][j] = rand();}
    }
    
    for(i = 0 ; i < 30 ; ++i)
        
     {for(j = 0 ; j < 30 ; ++j)
    
    std::cout <<(float) rand()/RAND_MAX<<'\t';
        
        std::cout<<'\n';
    }
    return 0;
}
