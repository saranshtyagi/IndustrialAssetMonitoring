DELIMITER $$

CREATE PROCEDURE GetFrequentlyFailingAssets()
BEGIN
    SELECT a.asset_name, COUNT(f.fault_id) AS fault_count
    FROM assets a
    JOIN sensors s ON a.asset_id = s.asset_id
    JOIN fault_logs f ON s.sensor_id = f.sensor_id
    GROUP BY a.asset_id
    HAVING fault_count > 5;
END$$

DELIMITER ;

DELIMITER $$

CREATE PROCEDURE PredictMaintenance()
BEGIN
    SELECT a.asset_name, COUNT(f.fault_id) AS faults_last_30_days
    FROM assets a
    JOIN sensors s ON a.asset_id = s.asset_id
    JOIN fault_logs f ON s.sensor_id = f.sensor_id
    WHERE f.fault_time >= NOW() - INTERVAL 30 DAY
    GROUP BY a.asset_id
    HAVING faults_last_30_days >= 3;
END$$

DELIMITER ;
