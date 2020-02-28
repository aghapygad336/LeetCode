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
       int xLen=k*arr.size();

	array = (int*) malloc(xLen*sizeof(int));
      // std::cout <<"Length of the vector :" <<xLen << std::endl;
    int x=0;
      int shiftB=0;


for(int y =0 ; y < k;y++){
while(x<arr.size()){
             array[shiftB+x] = arr[x];
         std::cout <<"***"<<arr.size()<< std::endl;

       x++;}
             shiftB=shiftB+arr.size();
}

           int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i <xLen; i++)
    {
        max_ending_here = max_ending_here + array[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }







    return 0;
}
