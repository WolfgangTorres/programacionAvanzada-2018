#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target) 
{
    int tmp[2];
    int valueToLookFor = 0;
    for (int i = 0; i < numsSize; i++)
    {
    	valueToLookFor = target - nums[i];
    	for (int j = i+1; j <= numsSize; j++)
    	{
    		if (valueToLookFor == nums[j])
    		{
                tmp[0] = i;
                tmp[1] = j;
                int* tmp2 = tmp;
                printf("Values:\n %i\n %i\n",i,j);
                return tmp2;
    		}
    	}
    }
    return 0;
}

int main(int argc, char const *argv[])
{
	int nums[] = {2, 11, 15, 7};
	int target = 9;
	int numsSize = 4;
	twoSum(nums,numsSize,target);
	return 0;
}