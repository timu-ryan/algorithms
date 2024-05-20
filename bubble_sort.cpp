#include <iostream>
#include <vector>

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

std::vector<int> bubble_sort(std::vector<int>& v) {
  for (int i = 0; i < v.size(); i++) {
    for (int j = i; j < v.size(); j++) {
      //std::cout << v[j];
      if (v[j] < v[j - 1])
        std::swap(v[j], v[j - 1]);
    }
  }
  return v;
}

void print_vector(std::vector<int>& v) {
  for (auto i: v)
    std::cout << i << ' ';
  return;
}

int main() {
  std::vector<int> v = {1, 4, 8, 6, 2, 12, 4};
  print_vector(v);
  std::cout << '\n';
  bubble_sort(v);
  print_vector(v);
}

