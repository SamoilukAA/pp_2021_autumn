// Copyright 2021 Zarubin Mikhail
#ifndef MODULES_TASK_1_ZARUBIN_M_SUM_VALUES_ON_ROWS_MATRIX_SUM_VALUES_ON_ROWS_MATRIX_H_
#define MODULES_TASK_1_ZARUBIN_M_SUM_VALUES_ON_ROWS_MATRIX_SUM_VALUES_ON_ROWS_MATRIX_H_

#include <vector>

void generateRandomMatrix(std::vector<int>* matrix,
	std::vector<int>::size_type count_row, std::vector<int>::size_type count_column);
std::vector<int> transposeMatrix(const std::vector<int>& matrix,
	std::vector<int>::size_type count_row, std::vector<int>::size_type count_column);
std::vector<int> getParallelOperations(const std::vector<int>& matrix,
	std::vector<int>::size_type count_row, std::vector<int>::size_type count_column);
std::vector<int> getSequentialOperations(const std::vector<int>& matrix,
	std::vector<int>::size_type count_row, std::vector<int>::size_type count_column);

#endif  // MODULES_TASK_1_ZARUBIN_M_SUM_VALUES_ON_ROWS_MATRIX_SUM_VALUES_ON_ROWS_MATRIX_H_
