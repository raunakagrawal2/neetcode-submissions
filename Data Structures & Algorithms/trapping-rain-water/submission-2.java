class Solution {
    public int trap(int[] height) {
        int[] lmin = new int[height.length];
        int[] rmin = new int[height.length];

        lmin[0] = height[0];
        rmin[height.length-1] = height[height.length-1];

        for(int i = 1;i<height.length;i++){
            lmin[i] = Math.max(lmin[i-1],height[i]);
        }
        for(int i = height.length-2;i>=0;i--){
            rmin[i] = Math.max(rmin[i+1],height[i]);
        }
        int rain = 0;
        for(int i =0;i<height.length;i++){
            if(Math.min(lmin[i],rmin[i])>=height[i]){
            rain += Math.min(lmin[i],rmin[i]) - height[i];
            }
        }
        return rain;
       
    }
}
