class Solution{
public:
    int minOperations(vector<int>& nums){
        int ans=0;//�n½�P½�X��

        for(int i=0; i<nums.size()-2; i++) {
            if(nums[i]==0){ //�J��0�n½�P
            ans++; //½�P�[�@��
            nums[i+1]=1-nums[i+1];
            nums[i+2]=1-nums[i+2];
        }
    }
    int N=nums.size();
    if(nums[N-1]==0 || nums[N-2]==0) return-1;//�̫ᦳ0����
    return ans; //�i�H���\½�P�����ܦ�1
}
};
