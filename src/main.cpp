#include "db/Database.h"


void generateFailingAssetsReport(sql::Connection* con);

int main() {
    Database db;
    auto con = db.getConnection();
    con->setSchema("industrial_monitoring");

    generateFailingAssetsReport(con.get());
    return 0;
}
