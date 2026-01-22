# 🏭 Industrial Asset Monitoring & Maintenance System

![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)
![MySQL](https://img.shields.io/badge/MySQL-8.x-orange.svg)
![Backend](https://img.shields.io/badge/Backend-System%20Design-green.svg)
![Status](https://img.shields.io/badge/Status-Design%20Complete-success.svg)

A **backend-focused industrial monitoring system** built using **C++ and MySQL**, designed to model real-world industrial assets, log sensor faults transactionally, and analyze maintenance needs using SQL analytics.

This project simulates how **large-scale industrial systems** (manufacturing plants, energy systems, automation platforms) track asset health and drive **data-informed maintenance decisions**.

---

## 📌 Problem Statement

Industrial environments contain **critical assets** (compressors, turbines, pumps, generators) equipped with multiple sensors.  
Failures are costly and often preventable if **fault patterns** are detected early.

This system aims to:
- Log sensor faults safely and transactionally
- Track asset health over time
- Identify frequently failing assets
- Support predictive maintenance decisions

---

## 🧠 Key Design Principles

- **Relational data modeling** for industrial entities
- **ACID-compliant transactions** for fault logging
- **Separation of concerns** (models, services, DB access)
- **SQL-driven analytics**, not hardcoded logic
- **Backend-first design** (no UI, system-level focus)

---

## 📁 Project Structure

```text
IndustrialAssetMonitoring/
├── src/
│   ├── db/
│   │   ├── Database.h
│   │   └── Database.cpp
│   │
│   ├── models/
│   │   ├── Asset.h
│   │   ├── Sensor.h
│   │   └── Fault.h
│   │
│   ├── services/
│   │   ├── AssetService.cpp
│   │   ├── MaintenanceService.cpp
│   │   └── ReportService.cpp
│   │
│   └── main.cpp
│
├── sql/
│   ├── schema.sql
│   ├── indexes.sql
│   ├── procedures.sql
│   └── sample_data.sql
│
├── config/
│   └── db_config.example.txt
│
├── README.md
└── .gitignore
```

---

## 🛠️ Tech Stack

### Core Technologies
- **C++ (C++17)** — Service layer & business logic
- **MySQL** — Relational database & analytics
- **SQL** — Joins, aggregations, stored procedures

### Concepts Used
- Transaction management (commit / rollback)
- Prepared statements
- Normalized schema design
- Indexing & query optimization
- Modular backend architecture

---

## 🧱 Database Design

### Core Entities
- **Assets** — Industrial machines (compressors, turbines, etc.)
- **Sensors** — Attached to assets (temperature, pressure, vibration)
- **Fault Logs** — Time-stamped sensor failures
- **Maintenance Logs** — Service history per asset

### Design Highlights
- Fully normalized schema
- Foreign key constraints
- Indexed columns for analytics
- Time-series fault tracking

---

## 🔁 Transactional Fault Logging

Faults are logged using **explicit database transactions**:

- Auto-commit disabled
- Fault insert executed
- Commit on success
- Rollback on failure

This ensures:
- No partial writes
- Data consistency under failures
- Production-grade reliability

---

## 📊 Analytics & Reporting

Implemented using **SQL, not application logic**:

### Examples:
- Identify assets with highest fault frequency
- Analyze fault severity trends
- Support maintenance prioritization

Reports are generated via:
- SQL joins
- Grouping & aggregation
- Stored procedures

---

## ▶️ Execution Flow

1. Database schema is initialized via SQL scripts
2. Sample industrial data is inserted
3. C++ application:
   - Connects to the database
   - Executes transactional operations
   - Fetches analytical reports
   - Prints insights to stdout

> ⚠️ **Note:**  
> Build steps may vary depending on compiler and platform.  
> The project is designed to be portable across environments.

---

## 🔐 Configuration Management

Sensitive credentials are excluded via `.gitignore`.

A template is provided:


```txt
host=localhost
port=3306
user=root
password=your_password
database=industrial_monitoring
```
---

## 🧪 Sample Use Cases

- Detect machines with recurring failures

- Prioritize preventive maintenance

- Analyze long-term asset health

- Simulate industrial monitoring workflows

--- 

## 🚀 Learning Outcomes

This project strengthened understanding of:

- Backend system design in C++

- Real-world SQL usage beyond CRUD

- Transaction safety & error handling

- Industry-style code organization

- Database-driven analytics

--- 

## 📈 Future Enhancements

- Predictive maintenance using time-series analysis

- REST API layer on top of C++ services

- Alerting mechanism for critical faults

- Visualization dashboard

---

## 👤 Author

Saransh Tyagi
