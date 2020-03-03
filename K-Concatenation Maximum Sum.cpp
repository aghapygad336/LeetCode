#include <iostream>
#include<string.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main()
{int k= 3;
std::vector<int> arr = { 1, 2 };


int *array;
int n =arr.size();
       int xLen=k*arr.size();

	array = (int*) malloc(xLen*sizeof(int));
      int shiftB=0;

         

for(int y =0 ; y < k;y++){    
    int x=0;
while(x<arr.size()){
             array[shiftB+x] = arr[x];

       x++;}
             shiftB=shiftB+arr.size();

    
}





        int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i <xLen; i++)
    {
        max_ending_here = max_ending_here + array[i%n];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here  = 0;
    }
    if (max_so_far < 0){
        max_so_far=0;
    }
        
        
        



    return 0;
}
