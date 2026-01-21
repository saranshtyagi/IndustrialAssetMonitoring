INSERT INTO assets (asset_name, asset_type, location, installation_date) VALUES
('Compressor A', 'Compressor', 'Plant 1', '2022-01-10'),
('Turbine B', 'Turbine', 'Plant 1', '2021-06-15'),
('Pump C', 'Pump', 'Plant 2', '2023-03-20'),
('Generator D', 'Generator', 'Plant 2', '2020-11-05');

INSERT INTO sensors (asset_id, sensor_type) VALUES
(1, 'Temperature'),
(1, 'Pressure'),
(2, 'Vibration'),
(2, 'Temperature'),
(3, 'Flow'),
(4, 'Voltage');

INSERT INTO fault_logs (sensor_id, fault_time, severity, description) VALUES
(1, NOW() - INTERVAL 1 DAY, 3, 'High temperature detected'),
(1, NOW() - INTERVAL 2 DAY, 4, 'Overheating warning'),
(2, NOW() - INTERVAL 3 DAY, 2, 'Pressure fluctuation'),
(1, NOW() - INTERVAL 4 DAY, 3, 'Temperature spike'),
(2, NOW() - INTERVAL 5 DAY, 4, 'Pressure threshold exceeded'),
(1, NOW() - INTERVAL 6 DAY, 5, 'Critical overheating'),
(2, NOW() - INTERVAL 7 DAY, 3, 'Pressure instability');

INSERT INTO fault_logs (sensor_id, fault_time, severity, description) VALUES
(3, NOW() - INTERVAL 5 DAY, 3, 'Vibration anomaly'),
(3, NOW() - INTERVAL 10 DAY, 2, 'Minor vibration'),
(4, NOW() - INTERVAL 15 DAY, 3, 'Temperature irregularity');

INSERT INTO fault_logs (sensor_id, fault_time, severity, description) VALUES
(5, NOW() - INTERVAL 20 DAY, 2, 'Flow inconsistency');

INSERT INTO maintenance_logs (asset_id, maintenance_date, notes) VALUES
(1, '2024-12-15', 'Replaced cooling unit'),
(2, '2024-11-20', 'Lubrication and vibration tuning'),
(4, '2024-10-05', 'Voltage calibration');
