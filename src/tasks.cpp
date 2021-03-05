#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs && rhs) {
        int num = *lhs;
        *lhs = *rhs;
        *rhs = num;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows > 0 && num_cols > 0) {
        int **array_2d = new int *[num_rows];
        for (int i = 0; i < num_rows; i++) {
            array_2d[i] = new int[num_cols]{};
            fill(array_2d[i], array_2d[i] + num_cols, init_value);
        }
        return array_2d;
    }
    return nullptr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (num_rows > 0 && num_cols > 0 && arr_2d_source && arr_2d_target) {
        for (int i = 0; i < num_rows; i++){
            for (int j = 0; j < num_cols; j++){
                arr_2d_target[i][j] = arr_2d_source[i][j];
            }
        }
        return arr_2d_target;
    }
    return false;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int num;
    for (int i = 0; i < arr.size() / 2; i++){
        num = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = num;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin && arr_end) {
        int num;
        while (arr_begin <= arr_end) {
            num = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = num;
            arr_begin += 1;
            arr_end -= 1;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr && size > 0){
        int *max = arr;
        arr++;
        for (int i = 1; i < size; i++){
            if (*max < *arr) {
                max = arr;
            }
            arr++;
        }
        return max;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> odd_numbers;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] % 2 != 0){
            odd_numbers.push_back(arr[i]);
        }
    }
    return odd_numbers;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> common_elems;
    for (int i = 0; i < arr_b.size(); i++){
        for (int j = 0; j < arr_a.size(); j++) {
            if (arr_a[j] == arr_b[i]){
                common_elems.push_back(arr_b[i]);
            }
        }
    }
    return common_elems;
}
