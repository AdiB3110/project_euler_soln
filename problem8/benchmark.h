#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <iostream>
#include <chrono>
#include <string>
#include <utility>

// Benchmark helper function declaration and definition
template <typename Func, typename... Args>
void benchmark(const std::string& funcName, Func func, Args&&... args) {
    auto start = std::chrono::steady_clock::now();

    func(std::forward<Args>(args)...);

    auto end = std::chrono::steady_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "Execution time of " << funcName << ": "
              << duration << " ms" << std::endl;
}

#endif  // BENCHMARK_H
