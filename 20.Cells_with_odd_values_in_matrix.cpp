//Cells with Odd Values in a Matrix - leetcode(acc: 79%) (easy)
/*
There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.
For each location indices[i], do both of the following:
Increment all the cells on row ri.
Increment all the cells on column ci.
Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in indices.
*/
//https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector <vector<int>> num(m,vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                num[i][j] = 0;
            }
        }
        for (int i = 0; i < indices.size(); i++) {
            for (int j = 0; j < indices[i].size(); j++) {
                if(j == 0) {
                    for (int k = 0; k < n; k++) {
                        num[indices[i][j]][k]++;
                    }
                }
                if(j == 1) {
                    for (int k = 0; k < m; k++) {
                        num[k][indices[i][j]]++;
                    }
                }
            }
        }
        int cnt = 0;
        for (int z = 0; z < m; z++) {
            for (int y = 0; y < n; y++) {
                if (num[z][y] % 2 != 0) cnt++;
            }
        }
        return cnt;
    }
};
