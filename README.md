# Labinator Statusinator

## Overview

The **Labinator Statusinator** is a real-time laboratory infrastructure monitoring display built on an ESP32-S3 microcontroller with a 4.3-inch TFT display. This device serves as a visual dashboard for monitoring lab stuff like relayinator, the network switch, DNS/DHCP services, firewall activity, and running lab status.

## Purpose and Functionality

### Core Mission
The Statusinator provides **instant visual feedback** on lab infrastructure to see the current status at a glance.

### Key Features

#### **Real-Time Infrastructure Monitoring**
- **Power System Status**: Visual indicators for 8 power outlets (P1-P8)
- **Network Switch Monitoring**: Real-time port status for 8 network ports
- **DNS Service Health**: Query counts, cache status, and resolution metrics
- **DHCP Service Health**: Queries and leases
- **Firewall Activity**: WAN/LAN traffic and drop statistics
- **Lab Environment Status**: Hypervisor, node, and pod initialization tracking
- **System Logging**: Live display of log entries with severity indicators

#### **Multi-State Display System**
1. **Boot State**: Displays powetic boot messages while waiting for system initialization
2. **Ready State**: Shows comprehensive infrastructure status dashboard
3. **Shutdown State**: Indicates when it's safe to power off the entire lab

### Hardware Platform

#### **ESP32-S3 Specifications**
- **MCU**: ESP32-S3 with dual-core Xtensa LX7 processors
- **Clock Speed**: 240MHz CPU, 80MHz Flash
- **Memory**: PSRAM enabled for enhanced graphics performance
- **Flash**: 4MB with optimized partitioning
- **Display**: 4.3" TFT (480x272 resolution) via QSPI interface
- **Communication**: USB JTAG/Serial debug unit

#### **Display Technology**
- **Controller**: NV3041A display driver
- **Interface**: Quad-SPI for high-speed graphics updates
- **Canvas Rendering**: Double-buffered for smooth animations
- **Color Depth**: 16-bit color (RGB565)

## Communication Protocol

### **Input Format**
The device expects newline-terminated commands via serial, sent from [labwatch](https://github.com/DRuggeri/labinator_labwatch):

#### Status Updates
```json
status:{"initializer":{"LabName":"Narp","NumHypervisors":6,...},"power":{"P1":false,...},"logs":{...}}
```

#### Log Entries
```json
log:{"Node":"wally","Service":"kernel","Level":"warning","Message":"..."}
```

#### Control Commands
```
boss:ready     // System operational
boss:shutdown  // Safe to power off
```

## Helpful links:
(unstructured - found as I learned)
Factory docs: https://github.com/lsdlsd88/JC4827W543
Additional docs: https://github.com/profi-max/JC4827W543_4.3inch_ESP32S3_board/tree/main

Working examples:
Toy game: https://github.com/calint/platformio-bam

VSCode examples
https://github.com/profi-max/JC4827W543_4.3inch_ESP32S3_board/tree/main/Examples/Demo_VSCode_Platformio

Custom board that trashes display
https://github.com/vldmr-d/Guition-ESP32-S3-JC4827W543R_I/