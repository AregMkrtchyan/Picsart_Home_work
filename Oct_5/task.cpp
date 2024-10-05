#include <iostream>
#include <vector>

std::vector<std::vector<int>> sum_of_matrix(std::vector<std::vector<int>> mat1, std::vector<std::vector<int>> mat2) {
    std::vector<std::vector<int>> res = mat1;
    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            res[i][j] += mat2[i][j];
        }
    }
    return res;
}

std::vector<std::string> split(const std::string& str, char delim) {
    std::vector<std::string> result;
    std::string current;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == delim && str[i] != '\0') {
            result.push_back(current);
            current.clear();
        } else {
            current += str[i];
        }
    }
    result.push_back(current);
    return result;
}


bool check_growth(int num) {       
    while(num != 0) {
        int current = num % 10;
        if (current < (num/10)%10) {
            return false;
        }
        num /= 10;
    }
    return true;
}

bool sum_20(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        if (sum >= 20) {
            return true;
        }
        num /= 10;
    }
    return false;
}

bool smaller_30(int num) {
    int sum = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) {
            return true;
        }
        sum *= digit;
        if (sum > 30) {
            return false;
        }
        num /= 10;
    }
    return true;
}

bool check3(int num) {
    while (num != 0) {
        if (num % 10 == 3) {
            return true;
        }
        num /= 10;
    }
    return false;
}

bool check5(int num) {
    while (num != 0) {
        if (num % 10 == 5) {
            return false;
        }
        num /= 10;
    }
    return true;
}

std::vector<int> send_vec(int num) {
    std::vector<int> result;
    while(num > 0) {
        result.push_back((num % 10));
        num /= 10;
    }
    for (size_t i = 0; i < result.size() / 2; ++i) {
        int tmp = result[i];
        result[i] = result[result.size() - 1 - i];
        result[result.size() - 1 - i] = tmp;
    }
    return result;
}



int main() {
    std::vector<int> result = send_vec(123);
    for (int part : result) {
        std::cout << part << std::endl;
    }
    // std::cout << smaller_30(555);
    return 0;
}