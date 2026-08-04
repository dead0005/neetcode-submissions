class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        const mp = new Map();
        let n = nums.length;
        for(let i=0;i<n;i++){
            mp.set(nums[i],(mp.get(nums[i]) || 0)+1);
            if(mp.get(nums[i])>1)
            return true;
        }
        return false;
    }
}
