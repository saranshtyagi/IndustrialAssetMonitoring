CREATE DATABASE IF NOT EXISTS industrial_monitoring;
USE industrial_monitoring;

CREATE TABLE assets (
    asset_id INT AUTO_INCREMENT PRIMARY KEY,
    asset_name VARCHAR(100),
    asset_type VARCHAR(50),
    location VARCHAR(100),
    installation_date DATE
);

CREATE TABLE sensors (
    sensor_id INT AUTO_INCREMENT PRIMARY KEY,
    asset_id INT,
    sensor_type VARCHAR(50),
    FOREIGN KEY (asset_id) REFERENCES assets(asset_id)
);

CREATE TABLE fault_logs (
    fault_id INT AUTO_INCREMENT PRIMARY KEY,
    sensor_id INT,
    fault_time DATETIME,
    severity INT,
    description VARCHAR(255),
    FOREIGN KEY (sensor_id) REFERENCES sensors(sensor_id)
);

CREATE TABLE maintenance_logs (
    maintenance_id INT AUTO_INCREMENT PRIMARY KEY,
    asset_id INT,
    maintenance_date DATE,
    notes VARCHAR(255),
    FOREIGN KEY (asset_id) REFERENCES assets(asset_id)
);
