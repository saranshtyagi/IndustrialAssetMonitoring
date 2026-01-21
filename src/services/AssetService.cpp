#include "../db/Database.h"
#include "../models/Asset.h"
#include <vector>

std::vector<Asset> getAllAssets(sql::Connection* con) {
    std::vector<Asset> assets;

    auto stmt = con->createStatement();
    auto res = stmt->executeQuery("SELECT * FROM assets");

    while (res->next()) {
        Asset asset(
            res->getInt("asset_id"),
            res->getString("asset_name"),
            res->getString("asset_type"),
            res->getString("location"),
            res->getString("installation_date")
        );
        assets.push_back(asset);
    }

    return assets;
}
