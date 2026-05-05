#pragma once
#include <string>
#include <unordered_map>

struct Signature{
    std::string algorithm;
    std::string hash;
    std::string name;
    
};

class SignaturesDatabse{
  public:
  bool load(const std::string& path);
  bool contains(const std::string& hash);
  void add(const Signature& sig);


  private:
  std::unordered_map<std::string, Signature> db; 
};



