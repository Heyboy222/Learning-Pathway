int main(){
    int nums[6] = {50,172,86,258,129,387};
    nums[0]*=2;
    nums[1]+=172;
    nums[2]+=nums[1];nums[1]=nums[2]-nums[1];nums[2]-=nums[1];
    
    }
    
