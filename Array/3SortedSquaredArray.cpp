// brute force
// convert all the array[i] into array[i]*array[i], apply sorting
// time O(nlogn) | space O(1)
// here we are not exploiting the property of array being sorted.
// even if given array is not sorted, it will work.




// best solution
// time O(n) | space O(n)
vector<int> sortedSquaredArray(vector<int> & array){
	int i = 0, j = array.size()-1;
	int k = j;
	vector<int> output(array.size());
	while(i <= j){
		if(array[i]*array[i] <= array[j]*array[j]){
			output[k] = array[j]*array[j];
			k--;
			j--;
		} else if(array[i]*array[i] > array[j]*array[j]){
			output[k] = array[i]*array[i];
			k--;
			i++;
		}
	}
}