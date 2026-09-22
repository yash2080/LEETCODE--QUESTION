class Solution {
public:
    int search(vector<int>& arr, int key) {
        int i = 0;
        int j = arr.size() - 1;
        for (int x = 0; x < arr.size(); x++) {
            if (arr[i] == key)
                return i;
            if (arr[j] == key)
                return j;
            i++;
            j--;
        }
        return -1;
    }
};
