#include <iostream>
#include <vector>

std::vector<int*> sum(std::vector<int*> mat1, std::vector<int*> mat2) {
	std::vector<int*> res = mat1;
	for (size_t i = 0; i < mat1.size(); ++i) {
		for (size_t j = 0; j < mat1.size(); ++j) {
			res[i][j] += mat2[i][j];
		}
	}
	return res;
}



int main() {
	
	return 0;
}
