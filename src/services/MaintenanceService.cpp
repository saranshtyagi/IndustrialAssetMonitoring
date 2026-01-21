#include <cppconn/connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/exception.h>
#include <memory>
#include <stdexcept>

void logFault(sql::Connection* con, int sensorId, int severity) {
    if (!con) {
        throw std::invalid_argument("Database connection is null");
    }

    try {
        con->setAutoCommit(false);

        std::unique_ptr<sql::PreparedStatement> pstmt(
            con->prepareStatement(
                "INSERT INTO fault_logs(sensor_id, fault_time, severity) "
                "VALUES (?, NOW(), ?)"
            )
        );

        pstmt->setInt(1, sensorId);
        pstmt->setInt(2, severity);
        pstmt->execute();

        con->commit();
    }
    catch (sql::SQLException& e) {
      
        con->rollback();
        throw;
    }
}
