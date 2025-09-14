#include "../benchmark.h"
#include <vector>

void find_combinations(int n, int final_sum, std::vector<int> &curr_comb, std::vector<std::vector<int>> &sum_triplets, int start_val)
{

    if (n == 1)
    {

        if (final_sum >= start_val)
        {
            curr_comb.push_back(final_sum);
            sum_triplets.push_back(curr_comb);
            curr_comb.pop_back();
        }
        return;
    }
    for (int first_number = start_val + 1; first_number < final_sum - (n - 1); first_number++)
    {
        curr_comb.push_back(first_number);
        find_combinations(n - 1, final_sum - first_number, curr_comb, sum_triplets, start_val);
            curr_comb.pop_back();
    }
}

int main()
{
    int final_sum{10};
    int n{3};

    std::vector<std::vector<int>> sum_triplets;
    std::vector<int> curr_comb;

    find_combinations(n, final_sum, curr_comb, sum_triplets, 0);
    std::cout << "Stored combinations:" << std::endl;
    for (const auto &comb : sum_triplets)
    {
        for (int num : comb)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}