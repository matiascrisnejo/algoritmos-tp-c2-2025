#ifndef DISTRIBUTIONCENTER_H
#define DISTRIBUTIONCENTER_H

#include <string>

class DistributionCenter {
    public:
        int id;
        std::string name;
        std::string city;
        int capacity;
        int dailyPackages;
        int employees;
        
        DistributionCenter() = default;

        DistributionCenter(int id, std::string name, std::string city, int capacity, int dailyPackages, int employees);
    
    };
#endif // DISTRIBUTIONCENTER_H