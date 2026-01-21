#include "Database.h"

Database::Database() {}

std::unique_ptr<sql::Connection> Database::getConnection() {
    sql::mysql::MySQL_Driver* driver;
    driver = sql::mysql::get_mysql_driver_instance();

    auto con = driver->connect(
        "tcp://127.0.0.1:3306",
        "root",
        "1234"
    );

    return std::unique_ptr<sql::Connection>(con);
}
