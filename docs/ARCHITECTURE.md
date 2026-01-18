# System Architecture – TravelPlanner

This document explains the high-level architecture and design decisions
behind the TravelPlanner project.

The system is intentionally designed to emphasize **data modeling,
algorithmic optimization, and clean separation of responsibilities**
rather than UI or external integrations.

---

## 1. High-Level Overview

TravelPlanner is a modular C++ system that models tourist locations,
groups them by city, and applies graph algorithms to generate optimized
travel itineraries based on traveler preferences.

The system follows a **layered architecture**, where each layer has a
single, well-defined responsibility.

---

## 2. Core Data Models

### 2.1 TravelerType

Traveler personas are represented using a strongly typed enum:

- Explorer
- Budgeted
- Relaxed
- Luxury

This allows the system to apply rule-based filtering and pacing logic
without relying on fragile string comparisons.

---

### 2.2 Place

Each tourist location is modeled as a `Place` object containing:

- Name and full address
- City name
- Geographic coordinates (latitude & longitude)
- Category (heritage, leisure, market, etc.)
- Rating, visit duration, and cost level
- Supported traveler types

This design enables realistic distance computation and personalization
while keeping the model self-contained.

---

### 2.3 City

A `City` acts as a container for multiple `Place` objects.

Responsibilities:
- Own and manage city-specific places
- Filter places based on traveler type
- Provide structured input to graph construction

City objects intentionally do not contain algorithmic logic.

---

## 3. Graph Layer

Tourist places are represented as nodes in an undirected weighted graph.

- Nodes → Places (indexed)
- Edges → Travel distance between places
- Weights → Geographic distance (kilometers)

The graph is implemented using an adjacency list to support efficient
traversal and algorithm execution.

---

## 4. Algorithm Layer

### 4.1 Distance Calculation

Geographic distance between places is computed using the
**Haversine formula**, which accounts for Earth’s curvature and provides
realistic distance measurements.

---

### 4.2 Shortest Path (Dijkstra)

Dijkstra’s algorithm is used to compute shortest travel distances from a
starting location to all other places in a city.

This helps order itinerary visits to reduce travel time and fatigue.

---

### 4.3 Minimum Spanning Tree (Kruskal)

Kruskal’s algorithm is used to generate a minimal travel backbone
connecting selected places.

This minimizes redundant travel and reduces overall movement across the
itinerary.

---

## 5. Itinerary Engine

The itinerary engine combines:
- Traveler type rules (pace and preferences)
- Graph-based distance optimization
- City-level place organization

The engine generates a day-wise plan without handling presentation or UI,
ensuring separation between logic and output.

---

## 6. Design Principles Followed

- Single Responsibility Principle
- Separation of concerns
- Algorithm-first approach
- Extensible and testable structure

---

## 7. Future Extensions

- CLI or web-based interface
- Dynamic city loading from files or APIs
- Hotel and transport optimization
- Visualization of travel routes
