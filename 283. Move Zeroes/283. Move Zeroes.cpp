class Solution {
public:
void moveZeroes(vector<int>& nums) {
	auto e = nums.begin();
	int len = nums.size();
	for (int i=0; i < len;i++){
		if (*e == 0){
			nums.erase(e);
			nums.push_back(0);
		}
		else
			e++;
		
	}
}

};
