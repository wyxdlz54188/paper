#pragma once
#include <string>
struct Config { bool debug; };
extern Config g_config;
bool LoadConfig(const std::string& path);