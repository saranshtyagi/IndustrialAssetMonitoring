#include <iostream>
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>



void generateFailingAssetsReport(sql::Connection* con) {
    auto stmt = con->createStatement();
    auto res = stmt->executeQuery("CALL GetFrequentlyFailingAssets()");

    while (res->next()) {
        std::cout << res->getString("asset_name")
                  << " | Faults: "
                  << res->getInt("fault_count") << std::endl;
    }
}
