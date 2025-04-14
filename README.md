# 🧠 Operating System Project – Advanced CPU Scheduler Simulator

This project demonstrates two advanced CPU scheduling algorithms implemented in C:

1. **Multi-Round Round Robin (RR) Scheduler**
2. **Priority-Based Longest Job First (PB-LJF) Scheduler**

These implementations simulate real-time scheduling behavior and help understand how operating systems manage CPU time among processes with different arrival and burst times.

---

## 🚀 Features

### 🔁 1. Multi-Round Round Robin Scheduler

- **Three rounds of scheduling:**
  - **Round 1:** Classic Round Robin with Time Quantum = 3
  - **Round 2:** Round Robin with Time Quantum = 6
  - **Round 3:** Shortest Remaining Burst Time (similar to SJF)
- Tracks:
  - Completion time
  - Waiting time
  - Turnaround time
- Dynamically adjusts based on remaining burst times
- Simulates aging and fairness across processes

### 🏅 2. Priority-Based Longest Job First Scheduler

- Picks the process with the **longest burst time** at each time unit
- Includes tie-breaking with **lower process ID**
- Tracks:
  - Completion time
  - Waiting time
  - Turnaround time
- Calculates and displays average waiting and turnaround times

---

## 🛠️ How to Compile & Run

### Compile:
```bash
gcc round_robin.c -o round_robin
gcc priority_ljf.c -o priority_ljf
