#include "config.hpp"
#include <fstream>
Config g_config;
bool LoadConfig(const std::string&) { g_config.debug=false; return true; }