//https://leetcode.com/problems/two-sum/submissions/995231242/
//Time: O(n^2) ; Space: O(1);

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result;
    result = (int*) malloc(2*sizeof(int));
    result[0] = 0;
    result[1] = 0;


    int i,j;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(*(nums+i)+*(nums+j)==target){
                *returnSize = 2; 
                result[0]=i;
                result[1]=j;
                return result;
            };
        };
    };
    return 0;

    
}
