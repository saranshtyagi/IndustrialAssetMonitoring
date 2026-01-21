#pragma once
#include <string>

class Sensor {
private:
    int sensorId;
    int assetId;
    std::string sensorType;

public:
    Sensor() = default;

    Sensor(int id, int asset,
           const std::string& type)
        : sensorId(id),
          assetId(asset),
          sensorType(type) {}

    int getSensorId() const { return sensorId; }
    int getAssetId() const { return assetId; }
    std::string getSensorType() const { return sensorType; }
};
