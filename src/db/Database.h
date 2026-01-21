#pragma once

#include <memory>
#include <mysql_connection.h>
#include <mysql_driver.h>
#include <cppconn/connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>


class Database {
public:
    Database();
    std::unique_ptr<sql::Connection> getConnection();
};
