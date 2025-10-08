#include "DistributionCenter.h"

DistributionCenter::DistributionCenter(int id, std::string name, std::string city, int capacity, int dailyPackages, int employees) {
    this->id = id;
    this->name = name;
    this->city = city;
    this->capacity = capacity;
    this->dailyPackages = dailyPackages;
    this->employees = employees;
}