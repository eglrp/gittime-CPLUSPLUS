#include <experimental/ranges/algorithm>  // ranges::copy/sort
#include <experimental/ranges/iterator>   // ranges::ostream_iterator
#include <experimental/ranges/ranges>     // ranges::views
#include <iostream>                       // std::cout/endl

int main()
{
    using namespace std::experimental::ranges;
    int a[] = {1, 7, 3, 6, 5, 2, 4, 8};
    copy(a, ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    auto r = a | views::filter([](int i) { return i % 2 == 0; })
               | views::reverse;
    copy(r, ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}
