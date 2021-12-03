// brute force 
// time O(max(m,n)) | space O(1)
bool isValidSubsequence(vector<int>& array, vector<int>& subsequence){
	int k = 0;
	for(int i = 0; i < subsequence.size(); i++){
		int current = subsequence[i];
		while(k < array.size() && array[k] != current){
			k++;
		}
		if(k == array.size()){
			return false;
		}else{
			k++;
		}
	}
	return true;
}

// best solution
// time O(min(m,n)) | space O(1)


bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	int i = 0, j = 0;
	while(i < array.size() && j < subsequence.size()){
		if(array[i] == subsequence[j]){
			i++,j++;
		} else{
			i++;
		}
	}
	return (j == subsequence.size());
}