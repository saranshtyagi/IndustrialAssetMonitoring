#pragma once
#include <string>

class Asset {
private:
    int assetId;
    std::string assetName;
    std::string assetType;
    std::string location;
    std::string installationDate;

public:
 
    Asset() = default;

    Asset(int id, const std::string& name,
          const std::string& type,
          const std::string& loc,
          const std::string& installDate)
        : assetId(id),
          assetName(name),
          assetType(type),
          location(loc),
          installationDate(installDate) {}

    int getAssetId() const { return assetId; }
    std::string getAssetName() const { return assetName; }
    std::string getAssetType() const { return assetType; }
    std::string getLocation() const { return location; }
    std::string getInstallationDate() const { return installationDate; }
};
