#include <iostream>
#include <string>
#include "../src/string_utils.hpp"

int main()
{
  std::string s = "Hey people !";
  std::string result;
  std::vector<std::string> v;
  std::vector<int> v2;
  int value = 4578;
  std::string str_value = "4578";

  v = string_utils::split<std::string, std::string>(s, " ");
  std::cout << "split function with \" \" split key, vector output:" << std::endl;
  for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << *it << std::endl;

  std::cout << "========" << std::endl;
  v2 = string_utils::split<int, int>(value, "7");
  std::cout << "split function with \"7\" split key and integer parameter, vector output:" << std::endl;
  for (std::vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
    std::cout << *it << std::endl;

  std::cout << "========" << std::endl;
  v2 = string_utils::split<std::string, int>(str_value, "7");
  std::cout << "split function with \"7\" split key and string parameter, vector output:" << std::endl;
  for (std::vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
    std::cout << *it << std::endl;

  std::cout << "========" << std::endl;
  result = string_utils::join<std::string>(v, ",");
  std::cout << "join function with \",\" as join key, string output:" << std::endl;
  std::cout << result << std::endl;

  std::cout << "========" << std::endl;
  result = string_utils::join<int>(v2, "0");
  std::cout << "join function with \"0\" as join  key, string output:" << std::endl;
  std::cout << result << std::endl;

  std::cout << "========" << std::endl;
  std::cout << "toString function with 42 as parameter, string output:" << std::endl;
  std::cout << string_utils::toString<int>(42) << std::endl;

  std::cout << "========" << std::endl;
  std::cout << "getBetween function \"<value>7512</value>\", value output:" << std::endl;
  std::cout << string_utils::getBetween<int>("<value>7512</value>", "<value>", "</value>") << std::endl;

  std::cout << "========" << std::endl;
  std::cout << "getListOfItem function \"<v>7512</v><a><v>other</v></a>\", vector output:" << std::endl;
  v = string_utils::getListOfItem<std::string>("<v>7512</v><a><v>other</v></a>", "<v>", "</v>");
  for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << *it << std::endl;

  std::cout << "========" << std::endl;
  std::cout << "replace function replace '7' by '2', string output:" << std::endl;
  std::cout << string_utils::replace<int>(value, "7", "2") << std::endl;

  std::cout << "========" << std::endl;
  std::cout << "truncate function \"Vladivostok\" at 4, string output:" << std::endl;
  s = "Vladivostok";
  std::cout << string_utils::truncate<std::string>(s, 4) << std::endl;
  return 0;
}
