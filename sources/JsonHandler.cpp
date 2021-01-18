// Copyright 2020 Your Name <your_email>

#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
#include "JsonHandler.hpp"

JsonHandler::JsonHandler(const std::string& filename) : filename_(filename) {}
json JsonHandler::get_storage() const { return storage_; }
void JsonHandler::Load() {
  try {
    std::ifstream in(filename_);
    in >> storage_;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}
