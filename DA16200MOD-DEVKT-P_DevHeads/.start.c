#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void slow_print(const char *message, int delay) {
    while (*message) {
        putchar(*message++);
        fflush(stdout);
        usleep(delay * 1000);
    }
    printf("\n");
}

void print_in_color(const char *message, const char *color) {
    printf("%s%s\033[0m", color, message);
}

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"

void dynamic_power_management_quiz() {
    print_in_color("Quiz on Dynamic Power Management:\n", MAGENTA);
    slow_print("Q1: What are the two sub-modes of Dynamic Power Management?\n", 20);
    slow_print("Q2: How does DPM reduce power consumption during inactive periods?\n", 20);
    slow_print("Q3: Which DPM mode allows communication over the network?\n", 20);
}

void dynamic_power_management_practical() {
    print_in_color("Hands-on Practical:\n", GREEN);
    slow_print("Implement a function to switch between DPM fully functional mode (FFM) and low-power mode (LPM) based on data transmission requirements.\n", 20);
    slow_print("Use the following code structure as a guide:\n", 20);
    slow_print("\nvoid switch_dpm_mode(int data_pending) {\n", 20);
    slow_print("    if (data_pending) {\n", 20);
    slow_print("        set_dpm_mode(DPM_FULLY_FUNCTIONAL);\n", 20);
    slow_print("    } else {\n", 20);
    slow_print("        set_dpm_mode(DPM_LOW_POWER);\n", 20);
    slow_print("    }\n", 20);
    slow_print("}\n", 20);

    slow_print("\nExplanation:\n", 30);
    slow_print("This function takes an integer `data_pending` as input. If data needs to be transmitted, the function switches the system to DPM Fully Functional Mode (FFM), allowing full communication capabilities. Otherwise, it switches to DPM Low Power Mode (LPM), reducing power consumption.\n", 20);
}

void wifi_profiler_quiz() {
    print_in_color("Quiz on Wi-Fi IoT Power Profiler Tool:\n", MAGENTA);
    slow_print("Q1: What is the purpose of the Wi-Fi IoT Power Profiler tool?\n", 20);
    slow_print("Q2: Describe the role of the THS4521 differential amplifier in the power measurement process.\n", 20);
}

void wifi_profiler_practical() {
    print_in_color("Hands-on Practical:\n", GREEN);
    slow_print("Set up the DA16200MOD-DEVKT-P with the Power Profiler Tool. Measure the current consumption in various DPM modes.\n", 20);
    slow_print("Use the following code snippet to control DPM modes and monitor power consumption:\n", 20);
    slow_print("\nvoid monitor_power_consumption() {\n", 20);
    slow_print("    enable_dpm();\n", 20);
    slow_print("    printf(\"Measuring power consumption in DPM Fully Functional Mode...\\n\");\n", 20);
    slow_print("    // Simulate data transmission\n", 20);
    slow_print("    sleep(2);\n", 20);
    slow_print("    switch_dpm_mode(0);\n", 20);
    slow_print("    printf(\"Measuring power consumption in DPM Low Power Mode...\\n\");\n", 20);
    slow_print("    sleep(2);\n", 20);
    slow_print("}\n", 20);

    slow_print("\nExplanation:\n", 30);
    slow_print("This function enables DPM and switches between fully functional and low-power modes. The `sleep(2)` calls simulate time passing, during which the power consumption is measured in each mode. The Power Profiler Tool can be used to observe the differences in power usage.\n", 20);
}

void sleep_modes_quiz() {
    print_in_color("Quiz on Sleep Modes:\n", MAGENTA);
    slow_print("Q1: What is the key difference between Sleep Mode 2 and Sleep Mode 3?\n", 20);
    slow_print("Q2: Which Sleep Mode consumes the least power and why?\n", 20);
    slow_print("Q3: How does the DA16200 maintain network connection in Sleep Mode 3?\n", 20);
}

void sleep_modes_practical() {
    print_in_color("Hands-on Practical:\n", GREEN);
    slow_print("Implement a function to toggle between Sleep Mode 2 and Sleep Mode 3 based on network activity. Retain the memory state in Sleep Mode 3.\n", 20);
    slow_print("Here's a code template:\n", 20);
    slow_print("\nvoid toggle_sleep_modes(int retain_memory) {\n", 20);
    slow_print("    if (retain_memory) {\n", 20);
    slow_print("        enter_sleep_mode(SLEEP_MODE_3);\n", 20);
    slow_print("    } else {\n", 20);
    slow_print("        enter_sleep_mode(SLEEP_MODE_2);\n", 20);
    slow_print("    }\n", 20);
    slow_print("}\n", 20);

    slow_print("\nExplanation:\n", 30);
    slow_print("This function takes an integer `retain_memory` as input. If memory retention is required (e.g., to maintain network connection), the device enters Sleep Mode 3. Otherwise, it enters Sleep Mode 2, which consumes less power as it doesn’t retain memory.\n", 20);
}

int main() {
    print_in_color("Welcome to the Advanced DA16200MOD-DEVKT-P Development Kit Guide!\n", BLUE);
    slow_print("This guide will help you understand and implement advanced features of the ultra-low-power Wi-Fi module development kit by Dialog Semiconductor.\n", 30);
    slow_print("Let's dive deeper into the technology!\n", 30);

    print_in_color("\nDynamic Power Management (DPM):\n", YELLOW);
    slow_print("Dynamic Power Management (DPM) is crucial for reducing power consumption in IoT devices. DPM operates by keeping the device in a low-power state when it is not actively transmitting or receiving data, which is essential for battery-operated devices that require long-term operation.\n", 20);
    slow_print("The DA16200MOD-DEVKT-P supports two DPM sub-modes:\n", 20);
    slow_print("1. **DPM Fully Functional Mode (FFM)**: The device can fully communicate over the network and with external devices.\n", 20);
    slow_print("2. **DPM Low Power Mode (LPM)**: The device can receive data from an access point (AP) but operates at a lower power level, conserving energy.\n", 20);
    dynamic_power_management_quiz();
    dynamic_power_management_practical();

    print_in_color("\nWi-Fi IoT Power Profiler Tool:\n", YELLOW);
    slow_print("The Wi-Fi IoT Power Profiler Tool is used to measure the power consumption of the DA16200MOD-DEVKT-P. By connecting the module to the Power Profiler Tool, developers can evaluate how different modes and settings impact power usage.\n", 20);
    slow_print("The power measurement process involves precise analog components like the THS4521 differential amplifier, which measures the voltage drop across a sense resistor, and the ADS1217 24-bit ADC, which digitizes the measurement for further analysis.\n", 20);
    wifi_profiler_quiz();
    wifi_profiler_practical();

    print_in_color("\nSleep Modes:\n", YELLOW);
    slow_print("The DA16200 provides three sleep modes to reduce power consumption when the device is inactive:\n", 20);
    slow_print("1. **Sleep Mode 1**: The most energy-efficient mode, with all internal blocks turned off, leaving only minimal leakage current. This mode is used when the device is in deep sleep.\n", 20);
    slow_print("2. **Sleep Mode 2**: The device runs the RTC block, allowing it to wake up based on a timed event. It consumes more power than Sleep Mode 1 but less than active mode.\n", 20);
    slow_print("3. **Sleep Mode 3**: Similar to Sleep Mode 2, but it also retains the memory state, which is critical for maintaining network connections and other vital information during sleep.\n", 20);
    sleep_modes_quiz();
    sleep_modes_practical();

    print_in_color("\nConclusion:\n", BLUE);
    slow_print("You've now learned about the DA16200MOD-DEVKT-P's advanced features, including Dynamic Power Management, the Wi-Fi IoT Power Profiler Tool, and the various sleep modes. Continue experimenting with the code examples and practical exercises to master this powerful module.\n", 20);
    slow_print("\nThank you for following this advanced guide! Keep developing!\n", 30);
    
    return 0;
}
