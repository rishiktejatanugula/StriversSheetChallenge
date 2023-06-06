vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	for(int i=m,j=0;i<m+n,j<n;i++,j++){
               arr1[i]=arr2[j];
        }
        sort(arr1.begin(),arr1.end());
		return arr1;
}
