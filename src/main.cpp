#include <iostream>
#include <string>
#include <unordered_map>
#include <cstdlib>

std::string getFullDirectory(const std::string &abbreviation)
{
  static const std::unordered_map<std::string, std::string> directoryMap = {
      {"desk", "Desktop"},
      {"doc", "Documents"},
      {"too", "tools"},
      {"-", ""}};

  auto it = directoryMap.find(abbreviation);
  return (it != directoryMap.end()) ? it->second : "";
}

int main(int argc, char *argv[])
{
  int config = system("chmod +x ~/tools/code-alias/config.sh");
  config = system("~/tools/code-alias/config.sh");
  if (config == -1)
  {
    std::cerr << "ERROR: Failed to execute ./config.sh." << std::endl;
    return -1;
  }

  if (argc != 3)
  {
    std::cerr << "Error: syntax error." << std::endl;
    return -1;
  }

  const std::string prefix = "code ~/";
  const std::string suffix = "/";

  std::string directory = getFullDirectory(argv[1]);

  if (directory == "")
  {
    std::cerr << "Error: syntax error." << std::endl;
    return -1;
  }

  std::string command = prefix + directory + suffix + argv[2];

  int result = system(command.c_str());
  if (result == -1)
  {
    std::cerr << "Error: Failed to execute command." << std::endl;
    return -1;
  }

  return 0;
}
