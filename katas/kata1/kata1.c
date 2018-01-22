#include <stdio.h>

int * anagram(int* nums1, int* nums2, int size) 
{
    int tmp[size];
    int* tmp2;
    for (int i = 0; i < size; i++)
    {
    	for (int j = 0; j < size; j++)
    	{
    		if (nums1[i] == nums2[j])
    		{
                tmp[i] = j;
                tmp2 = tmp;
                printf("Values of i: %i, values of j %i\n",i,j);
                
    		}
    	}
    }
   return tmp2;
}

int main(int argc, char const *argv[])
{
	int nums[] = {2, 11, 15, 7};
    int nums2[] = {11, 15, 7, 2};

	int* tmp=anagram(nums,nums2,sizeof(nums)/sizeof(nums[0]));
    // for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++) {
        
    //     printf("%d ", tmp[i]);
    //     printf("\n");
    // } 
	return 0;
}