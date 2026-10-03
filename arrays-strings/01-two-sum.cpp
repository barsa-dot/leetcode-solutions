#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int retSize;
    int* res = twoSum(nums1, 4, 9, &retSize);
    printf("Test 1 - Indices: [%d, %d]\n", res[0], res[1]);
    free(res);

    int nums2[] = {3, 3};
    res = twoSum(nums2, 2, 6, &retSize);
    printf("Test 2 (Edge Case) - Indices: [%d, %d]\n", res[0], res[1]);
    free(res);
    return 0;
}