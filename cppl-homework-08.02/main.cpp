//
//  main.cpp
//  cppl-homework-08.02
//
//  Created by a1ex on 3/3/24.
//

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <list>

template <class T>
void print_container (const T& container)
{
    for (const auto& item : container)
      {
        std::cout << item << " ";
      }
}

int main(int argc, const char * argv[]) {

    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two. помните почему такой порядок? :)
  std::cout << std::endl;
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four
  std::cout << std::endl;
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
  std::cout << std::endl;

    return 0;
}
