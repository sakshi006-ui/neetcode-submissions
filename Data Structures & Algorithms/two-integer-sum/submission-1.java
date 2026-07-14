class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map <Integer,Integer> st =new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int cp= target - nums[i];
            if(st.containsKey(cp)){
                return new int[]{st.get(cp),i};
            }
            st.put(nums[i],i);
        }
        return new int[]{};
    }
}
