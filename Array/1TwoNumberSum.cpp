// brute force
// time O(n*n) | space O(1)
vector<int> twoNumberSum(vector<int> & input, int target){
	for(int i = 0; i < input.size(); i++){
		int current = input[i];
		for(int j = 0; j < input.size(); j++){
			if(i != j && input[i]+input[j] == target){
				return {input[i], input[j]};
			}
		}
	}
	return {};
}

// sorting then two ptr
// time O(nlogn) | space O(1)
vector<int> twoNumberSum(vector<int> & input, int target){
	sort(input.begin(), input.end()); // O(nlogn)
	int i = 0, j = input.size()-1;
	while(i < j && j < input.size()){	// O(n)
		if(input[i]+input[j]==target){
			return {input[i], input[j]};
		} else if(input[i]+input[j] > target){
			j--;
		} else{
			i++;
		}
	}
	return {};
}

// best solution using hashmaps
// time O(n) | space O(n).

vector<int> twoNumberSum(vector<int> & input, int target){
	unordered_map<int,int> mp;
	for(int i = 0; i < input.size(); i++){
		if(mp.count(target-input[i]) > 0){
			return {input[i], target-input[i]};
		} else {
			mp[input[i]]++;
		}
	}
	return {};
}