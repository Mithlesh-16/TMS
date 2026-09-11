# 🚦 Traffic Management System (TMS)

A full-stack traffic management system built to explore how graph algorithms can be used for route planning, traffic analysis, emergency vehicle handling, and bus route management.

The project combines a React frontend, a Node.js backend, MongoDB-based data storage, and a C++ algorithms engine for path-finding and optimization tasks.

---

## Overview

Urban traffic networks can be modeled as graphs where intersections are nodes and roads are edges. This project experiments with applying classic graph algorithms to solve transportation-related problems such as:

- Finding shortest paths between locations
- Managing bus routes
- Handling emergency vehicle routing
- Visualizing traffic networks
- Exploring route optimization techniques

The backend exposes APIs that communicate with a C++ algorithms engine, allowing computationally intensive graph operations to be handled efficiently.

---

## Features

### Route Planning

- Shortest path computation
- Graph-based road network representation
- Route analysis using multiple algorithms

### Emergency Vehicle Management

- Dedicated emergency routing module
- Fast-path generation for emergency vehicles
- Separate emergency APIs and controllers

### Bus Management

- Bus route management APIs
- Bus data handling through MongoDB models
- Route optimization experiments

### Traffic Analysis

- Traffic management endpoints
- Network visualization support
- Traffic control module structure

### Algorithms Engine (C++)

Implemented inside the `backend/dsa-engine` directory:

- Dijkstra's Algorithm
- A* Search
- BFS
- DFS
- Min Heap implementation
- Bus optimization utilities

---

## Project Structure

```text
TMS
│
├── frontend
│   └── src
│       ├── components
│       │   ├── Ambulance.jsx
│       │   ├── BusManager.jsx
│       │   ├── Controls.jsx
│       │   ├── Map.jsx
│       │   └── PathInfo.jsx
│       ├── api.js
│       └── app.jsx
│
├── backend
│   ├── controllers
│   │   ├── busController.js
│   │   ├── emergencyController.js
│   │   ├── pathControllers.js
│   │   └── trafficController.js
│   │
│   ├── routes
│   │   ├── busRoutes.js
│   │   ├── emergencyRoutes.js
│   │   ├── pathRoutes.js
│   │   └── trafficRoutes.js
│   │
│   ├── models
│   │   ├── Bus.js
│   │   ├── Node.js
│   │   └── Edge.js
│   │
│   ├── dsa-engine
│   │   ├── algorithms
│   │   │   ├── astar.cpp
│   │   │   ├── bfs_dfs.cpp
│   │   │   ├── dijkstra.cpp
│   │   │   ├── min_heap.cpp
│   │   │   └── bus_optimizer.cpp
│   │   ├── main.cpp
│   │   └── Makefile
│   │
│   ├── Utils
│   │   └── cppBridge.js
│   │
│   └── server.js
│
└── README.md
```

---

## Tech Stack

### Frontend

- React.js
- JavaScript
- JSX

### Backend

- Node.js
- Express.js

### Database

- MongoDB

### Algorithms Engine

- C++
- STL

---

## Core Algorithms Used

### Dijkstra's Algorithm

Used to compute shortest paths in weighted road networks.

### A* Search

Provides more efficient route finding using heuristics.

### BFS & DFS

Used for graph traversal and network exploration.

### Min Heap

Supports efficient priority queue operations required by shortest-path algorithms.

### Bus Optimization

Experimental module for route and transportation optimization.

---

## Current Status

This project is currently under development.

Implemented modules include:

- Backend API structure
- React component structure
- MongoDB models
- C++ algorithms engine
- JavaScript ↔ C++ bridge

Planned improvements include:

- Real-time traffic updates
- Live map integration
- GPS-based routing
- Traffic signal optimization
- AI-assisted congestion prediction
- Deployment and production setup

---

## What I Learned

Through this project I explored:

- Graph Theory
- Data Structures and Algorithms
- REST API Development
- MongoDB Data Modeling
- React Frontend Development
- C++ and Node.js Integration
- Backend System Design

---

## Author

**Mithlesh Kumar**

GitHub: https://github.com/Mithlesh-16