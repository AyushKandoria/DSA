1class Solution {
2    public int[] shuffle(int[] nums, int n) {
3        int[] newarr=new int[nums.length];
4        int left=0;
5        int right=n;
6        for(int i=0;i<nums.length;i++){
7            if(i%2==0){
8                newarr[i]=nums[left++];
9            }else{
10                newarr[i]=nums[right++];
11            }
12        }
13        return newarr;
14    }
15}