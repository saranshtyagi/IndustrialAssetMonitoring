#pragma once
#include <string>

class Fault {
private:
    int faultId;
    int sensorId;
    std::string faultTime;
    int severity;
    std::string description;

public:
    Fault() = default;

    Fault(int id, int sensor,
          const std::string& time,
          int sev,
          const std::string& desc)
        : faultId(id),
          sensorId(sensor),
          faultTime(time),
          severity(sev),
          description(desc) {}

    int getFaultId() const { return faultId; }
    int getSensorId() const { return sensorId; }
    std::string getFaultTime() const { return faultTime; }
    int getSeverity() const { return severity; }
    std::string getDescription() const { return description; }
};
