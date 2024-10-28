#pragma once
#include <iostream>

template<typename T>

class Shared_ptr {
public:
    Shared_ptr(T* p = nullptr) : ptr{p}, count_{new int(1)} {}

    Shared_ptr(const Shared_ptr& p) : ptr{p}, count_{p.count_} {
        ++(*count_);
    }

    Shared_ptr(Shared_ptr&& p) : ptr{p.ptr}, count_{p.count_} {
        p.ptr = nullptr;
        p.count_ = nullptr;
    }

    // Shared_ptr(const Shared_ptr& p) : ptr{p.ptr}, count_{p.count_} {}

    ~Shared_ptr() {
        if (--(*count_) == 0 && ptr != nullptr) {
            delete ptr;
            delete count_;
            ptr = nullptr;
        }
    }

    Shared_ptr& operator+=(const Shared_ptr& p) {}

    T& operator*() const {
        return *ptr;
    }

    T* get() const {
        return ptr;
    } 

private:
    T* ptr;
    int* count_;
};

// template<typename T>

// class Controller {
// public:
//     Controller() : count{0} {
//         ++count;
//     }
// private:
//     T* ptr = nullptr;
//     int count;
// };