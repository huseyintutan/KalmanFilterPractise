#include <pybind11/pybind11.h>

int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(kf_cpp, m) {
    m.doc() = "C++ KF"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
}