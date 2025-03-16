#include "tasks.h"
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

/* Level A */
int maxAboveMainDiagonal(const vector<vector<int>>& matrix) {
    int maxVal = INT_MIN;
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = i + 1; j < matrix[i].size(); ++j) {
            maxVal = max(maxVal, matrix[i][j]);
        }
    }
    return maxVal;
}

int maxBelowMainDiagonal(const vector<vector<int>>& matrix) {
    int maxVal = INT_MIN;
    for (size_t i = 1; i < matrix.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            maxVal = max(maxVal, matrix[i][j]);
        }
    }
    return maxVal;
}

int maxAboveSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int maxVal = INT_MIN;
    size_t n = matrix.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            maxVal = max(maxVal, matrix[i][j]);
        }
    }
    return maxVal;
}

int maxBelowSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int maxVal = INT_MIN;
    size_t n = matrix.size();
    for (size_t i = 1; i < n; ++i) {
        for (size_t j = n - i; j < n; ++j) {
            maxVal = max(maxVal, matrix[i][j]);
        }
    }
    return maxVal;
}

/* Level B */
int countEvenAboveMainDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = i + 1; j < matrix[i].size(); ++j) {
            if (matrix[i][j] % 2 == 0) ++count;
        }
    }
    return count;
}

int countEvenBelowMainDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    for (size_t i = 1; i < matrix.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (matrix[i][j] % 2 == 0) ++count;
        }
    }
    return count;
}

int countEvenAboveSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    size_t n = matrix.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (matrix[i][j] % 2 == 0) ++count;
        }
    }
    return count;
}

int countEvenBelowSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    size_t n = matrix.size();
    for (size_t i = 1; i < n; ++i) {
        for (size_t j = n - i; j < n; ++j) {
            if (matrix[i][j] % 2 == 0) ++count;
        }
    }
    return count;
}

/* Level C */
int countPositiveAboveMainDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = i + 1; j < matrix[i].size(); ++j) {
            if (matrix[i][j] > 0) ++count;
        }
    }
    return count;
}

int countPositiveBelowMainDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    for (size_t i = 1; i < matrix.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (matrix[i][j] > 0) ++count;
        }
    }
    return count;
}

int countPositiveAboveSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    size_t n = matrix.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (matrix[i][j] > 0) ++count;
        }
    }
    return count;
}

int countPositiveBelowSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int count = 0;
    size_t n = matrix.size();
    for (size_t i = 1; i < n; ++i) {
        for (size_t j = n - i; j < n; ++j) {
            if (matrix[i][j] > 0) ++count;
        }
    }
    return count;
}

/* Level D */
bool hasZeroAboveMainDiagonal(const vector<vector<int>>& matrix) {
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = i + 1; j < matrix[i].size(); ++j) {
            if (matrix[i][j] == 0) return true;
        }
    }
    return false;
}

bool hasZeroBelowMainDiagonal(const vector<vector<int>>& matrix) {
    for (size_t i = 1; i < matrix.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (matrix[i][j] == 0) return true;
        }
    }
    return false;
}

bool hasZeroAboveSecondaryDiagonal(const vector<vector<int>>& matrix) {
    size_t n = matrix.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (matrix[i][j] == 0) return true;
        }
    }
    return false;
}

bool hasZeroBelowSecondaryDiagonal(const vector<vector<int>>& matrix) {
    size_t n = matrix.size();
    for (size_t i = 1; i < n; ++i) {
        for (size_t j = n - i; j < n; ++j) {
            if (matrix[i][j] == 0) return true;
        }
    }
    return false;
}
