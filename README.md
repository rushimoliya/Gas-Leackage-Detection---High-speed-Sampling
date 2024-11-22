### README: Pipe Leakage Detection System

---

#### **Project Title:**  
**Pipe Leakage Detection System**

#### **Course:**  
**ENR 305: Sensors, Instruments, and Experimentations**

#### **Instructor:**  
**Professor Sanket Patel**

#### **Group Members:**  
1. Manya Trivedi (AU2240055)  
2. Shlok Shelat (AU2240025)  
3. Vishesh Bhatia (AU2240027)  
4. Rushi Moliya (AU2240020)  
5. Shrey Salvi (AU2240033)  
6. Dhananjay Kanjariya (AU2240023)  
7. Sarav Shah (AU2240015)  
8. Purvansh Desai (AU2240036)  

---

### **Project Overview**
The Pipe Leakage Detection System identifies gas leaks in pipelines by analyzing ultrasonic frequencies emitted from cracks or holes. This real-time detection system combines an STM32F401RE Nucleo microcontroller, ultrasonic sensors, and MATLAB Simulink for efficient data acquisition and analysis.

---

### **Features**
- Real-time detection of ultrasonic gas leaks.
- Sampling rate up to **2 MHz** for capturing high-frequency signals.
- **Fast Fourier Transform (FFT)** analysis to detect leak-specific frequency signatures.
- Modular and expandable for industrial, residential, and environmental safety applications.
- Visual data representation in MATLAB Simulink.

---

### **System Components**

#### **Hardware**
1. **STM32F401RE Nucleo Board** - High-speed ADC, UART for communication.  
2. **Function Generator** - Simulates ultrasonic signals.  
3. **Analog-to-Digital Converter (ADC)** - Converts ultrasonic signals for processing.  
4. **Power Supply** - Powers the STM32 board and function generator.  
5. **Probes**  
   - **Macroscopic Probe:** Detects larger leakage areas.  
   - **Smaller Nozzle Probe:** Pinpoints exact leakage location.

#### **Software**
1. **MATLAB Simulink** - Real-time visualization and processing.
2. **STM32CubeMX & STM32CubeIDE** - Microcontroller configuration and coding.  
3. **PuTTY** - UART data visualization.  

---

### **System Architecture**
1. **Input:** Ultrasonic sound waves simulated via a function generator.  
2. **Processing:** Analog signal converted by the ADC in STM32F401RE. Data is processed in MATLAB Simulink.  
3. **Output:** Real-time visualization and FFT-based analysis of gas leakage signals.  

---

### **Setup Instructions**

#### **Hardware Setup**
1. Connect the **function generator** to the analog pin (A0) of the STM32F401RE Nucleo board.  
2. Configure the STM32 board using Simulink for a **sampling rate of 2 MHz**.  
3. Connect probes as required for specific leakage detection.  

#### **Software Setup**
1. Install required **drivers** and **hardware support packages** for MATLAB Simulink.  
2. Configure the STM32F401RE board as the target hardware in Simulink.  
3. Load the Simulink model for real-time FFT analysis.  

#### **Execution**
1. Power the STM32 board and function generator.  
2. Run the Simulink model to begin data acquisition and visualization.  
3. Observe real-time FFT results on MATLAB Simulink Scope.  

---

### **Code Explanation**

#### **STM32CubeIDE Code:**
- Configures the STM32 microcontroller for **high-speed ADC sampling**.  
- Uses **DMA (Direct Memory Access)** for efficient data transfer.  
- Sends sampled data to MATLAB Simulink via **UART communication**.  

#### **MATLAB Simulink:**
- Receives data from STM32 and processes it using FFT.  
- Visualizes frequency-domain representation of detected leaks.  

---

### **Challenges and Resolutions**
1. **Sampling Rate Limitation:**  
   - Issue: STM32F070RB could not achieve required sampling rates.  
   - Resolution: Upgraded to STM32F401RE Nucleo board.

2. **FFT Analysis Challenges:**  
   - Issue: Initial FFT implementation issues in MATLAB Simulink.  
   - Resolution: Modified Simulink model to handle high-frequency signals.

3. **Data Transmission:**  
   - Issue: Reverse current issues with CP2102 transmitter.  
   - Resolution: Adjusted UART settings and stabilized transmission module.

---

### **Applications**
1. **Industrial Safety:** Pipeline and storage tank monitoring.  
2. **Residential Use:** Leak detection in household gas pipelines.  
3. **Environmental Protection:** Minimize resource wastage.  
4. **Aerospace & Automotive:** Fuel line integrity checks.  
5. **Healthcare & R&D:** Pressurized system monitoring in laboratories.  

---

### **Future Enhancements**
- Integrating IoT for remote monitoring.  
- Using machine learning for predictive maintenance.  
- Enhancing scalability with advanced ultrasonic sensors.  

---

### **References**
Chung, Y., & Lee, Y. (2016). Ultrasonic Leak Detection for Industrial Gas Pipelines. Journal of Nondestructive Evaluation, 35(3), 20–25.
Patil, P., & Agarwal, S. (2020). Ultrasonic Sensing and Signal Processing Techniques for Gas Leak Detection. Sensors and Actuators A: Physical, 310, 112027.
Li, X., & Lu, J. (2022). An Ultrasonic Gas Leak Detection System Using Real-Time Spectral Analysis. Journal of Acoustics, 45(2), 233–242.
STMicroelectronics. (2021). STM32F401RE Datasheet.
STMicroelectronics. (2021). STM32CubeMX and STM32CubeIDE User Manual.
Proakis, J. G., & Manolakis, D. G. (2007). Digital Signal Processing: Principles, Algorithms, and Applications. Prentice Hall.
Uchino, K. (2019). Advanced Piezoelectric Materials: Science and Technology. Woodhead Publishing.
Gas Sensing Applications Using Ultrasonics. (2023). Sensor Technology Online.
Fast Fourier Transform for Signal Analysis. (2023). Electronics Tutorials.

---

### **Acknowledgments**
We express our gratitude to **Professor Sanket Patel** for his guidance and support in this project.


--- 

**End of README**
