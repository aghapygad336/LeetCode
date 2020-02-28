class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        
        
int *array;
	array = (int*) malloc(k*sizeof(int));
       int xLen=k*arr.size();
      // std::cout <<"Length of the vector :" <<xLen << std::endl;
    int x=0;
      int shiftB=0;
      
      
for(int y =0 ; y < k;y++){
while(x<arr.size()){
             array[shiftB+x] = arr[x];
        //   std::cout <<"***"<<array[shiftB+x]<< std::endl;

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
 
        
        
         return max_so_far; 
   
    
}};
