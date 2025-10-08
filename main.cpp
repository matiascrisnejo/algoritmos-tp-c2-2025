#include "Managers/DistributionCenterManager.h"

int main(){
    DistributionCenterManager manager;
    manager.createDistributionCenter(1, "Central Hub", "New York", 10000, 5000, 200);
    manager.createDistributionCenter(2, "West Side Center", "Los Angeles", 8000, 4000, 150);
    manager.getCenters();
    return 0;
}