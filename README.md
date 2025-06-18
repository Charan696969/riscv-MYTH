<h1 align="center">🚀 RISC-V MYTH Workshop - VSD</h1>
<p align="center">
  <b>Microprocessor for You in Thirty Hours</b><br>
  <i>Hands-on Workshop on RISC-V CPU Design using TL-Verilog</i><br>
  <img src="https://img.shields.io/badge/Completed-100%25-brightgreen.svg" />
  <img src="https://img.shields.io/badge/Tool-MakerchipIDE-blueviolet.svg" />
  <img src="https://img.shields.io/badge/Language-TL--Verilog-blue.svg" />
</p>

---

## 🧠 What I Learned

Over **5 days**, I explored and implemented key concepts in RISC-V microprocessor design:

| Day | Topics Covered |
|-----|----------------|
| ✅ Day 1 | RISC-V Overview, Instruction Formats (R, I, S, B, U, J), Base Integer ISA |
| ✅ Day 2 | TL-Verilog Syntax & Makerchip IDE, Combinational Circuits |
| ✅ Day 3 | Sequential Logic, Program Counter, Instruction Fetch |
| ✅ Day 4 | Decoding Instructions, ALU Operations, Control Signals |
| ✅ Day 5 | Data Hazards, Forwarding, Pipelining & Final Integration |

---

## 🔧 Final Project Overview

✔️ **Built a Pipelined RISC-V CPU in TL-Verilog**  
✔️ **Handled Hazards using Forwarding/Bypassing**  
✔️ **Verified using Waveform Simulations on Makerchip**  
✔️ **Visualized RTL Structure & Execution Flow**

---

## 📷 Output Snapshots

### 🧱 RTL Block View
![image](https://github.com/user-attachments/assets/33573eb1-7120-40ef-916b-fed38272f1c0)


---

### 🔍 Waveform Output - Part 1
![image](https://github.com/user-attachments/assets/613b6ca5-3f30-43da-9f2b-a737f5848999)


---

### 🔍 Waveform Output - Part 2
![image](https://github.com/user-attachments/assets/3cd9e8d2-1852-42a0-b8ad-23470cc7f8f9)


---

## 📁 Repository Layout

```bash
riscv-MYTH/
├── Day_1/                # ISA + Basics
├── Day_2/                # Using spike and gcc on Ubuntu terminal
├── Day_3/                # TL-Verilog Sequential, Combinational and Pipelined logic
├── Day_4/                # RISC-V CPU Basics - Fetch and Decode
├── Day_5/                # Pipelining, handling hazards, stalls for branches and jumps
└── final_cpu.tlv       # Completed CPU Design
