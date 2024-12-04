#include <iostream>
#include <vector>

using namespace std;

void multiply(vector<vector<int>>& A, vector<vector<int>>& B, vector<vector<int>>& C, int n) {
    vector<vector<int>> temp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    C = temp;
}

void power(vector<vector<int>>& A, vector<vector<int>>& C, int n, int k) {
    if (k == 1) {
        C = A;
        return;
    }

    vector<vector<int>> temp(n, vector<int>(n, 0));
    power(A, temp, n, k / 2);
    multiply(temp, temp, C, n);

    if (k % 2 == 1) {
        vector<vector<int>> result(n, vector<int>(n, 0));
        multiply(C, A, result, n);
        C = result;
    }
}

int countWalks(vector<vector<int>>& matrix, int n, int k, int vi, int vj) {
    vector<vector<int>> result(n, vector<int>(n, 0));

    power(matrix, result, n, k);

    int count = result[vi][vj];

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int k, vi, vj;
    cin >> k >> vi >> vj;

    int count = countWalks(matrix, n, k, vi, vj);

    cout << count;

    return 0;
}
