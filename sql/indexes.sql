CREATE INDEX idx_fault_time ON fault_logs(fault_time);
CREATE INDEX idx_severity ON fault_logs(severity);
CREATE INDEX idx_asset_location ON assets(location);
