#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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
    char answer[10];
    print_in_color("Quiz on Dynamic Power Management:\n", MAGENTA);
    
    slow_print("Q1: What are the two sub-modes of Dynamic Power Management?\n", 20);
    slow_print("a) Fully Functional Mode (FFM) and Low-Power Mode (LPM)\n", 20);
    slow_print("b) Sleep Mode 1 and Sleep Mode 2\n", 20);
    slow_print("c) Wi-Fi Mode and Standby Mode\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "a\n") == 0) {
        print_in_color("Correct!\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is a) Fully Functional Mode (FFM) and Low-Power Mode (LPM)\n", RED);
    }

    slow_print("Q2: How does DPM reduce power consumption during inactive periods?\n", 20);
    slow_print("a) By keeping the device in active mode\n", 20);
    slow_print("b) By shutting down all elements on the chip when not in use\n", 20);
    slow_print("c) By increasing the clock speed\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "b\n") == 0) {
        print_in_color("Correct!\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is b) By shutting down all elements on the chip when not in use\n", RED);
    }

    slow_print("Q3: Which DPM mode allows communication over the network?\n", 20);
    slow_print("a) DPM Fully Functional Mode (FFM)\n", 20);
    slow_print("b) DPM Low-Power Mode (LPM)\n", 20);
    slow_print("c) Sleep Mode 3\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "a\n") == 0) {
        print_in_color("Correct!\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is a) DPM Fully Functional Mode (FFM)\n", RED);
    }
}

void dynamic_power_management_practical() {
    char answer[10];
    print_in_color("Hands-on Practical:\n", GREEN);
    
    slow_print("Implement a function to switch between DPM fully functional mode (FFM) and low-power mode (LPM) based on data transmission requirements.\n", 20);
    slow_print("Use the following options to complete the function:\n", 20);
    
    slow_print("a) if (data_pending) { set_dpm_mode(DPM_FULLY_FUNCTIONAL); }\n", 20);
    slow_print("b) if (!data_pending) { set_dpm_mode(DPM_LOW_POWER); }\n", 20);
    slow_print("c) else { set_dpm_mode(DPM_LOW_POWER); }\n", 20);
    
    printf("Which option should follow the condition if data_pending? ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "a\n") == 0) {
        print_in_color("Correct! The function will switch to fully functional mode when data is pending.\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is a) if (data_pending) { set_dpm_mode(DPM_FULLY_FUNCTIONAL); }\n", RED);
    }
    
    printf("Which option should follow the condition if no data is pending? ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "c\n") == 0) {
        print_in_color("Correct! The function will switch to low-power mode when no data is pending.\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is c) else { set_dpm_mode(DPM_LOW_POWER); }\n", RED);
    }
}

void wifi_profiler_quiz() {
    char answer[10];
    print_in_color("Quiz on Wi-Fi IoT Power Profiler Tool:\n", MAGENTA);
    
    slow_print("Q1: What is the purpose of the Wi-Fi IoT Power Profiler tool?\n", 20);
    slow_print("a) To measure the current consumption of the DA16200MOD-DEVKT-P\n", 20);
    slow_print("b) To control the Wi-Fi module\n", 20);
    slow_print("c) To connect the module to the internet\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "a\n") == 0) {
        print_in_color("Correct!\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is a) To measure the current consumption of the DA16200MOD-DEVKT-P\n", RED);
    }

    slow_print("Q2: What role does the THS4521 differential amplifier play in the power measurement process?\n", 20);
    slow_print("a) It amplifies the signal for better transmission\n", 20);
    slow_print("b) It measures the voltage drop across a sense resistor\n", 20);
    slow_print("c) It controls the power modes\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "b\n") == 0) {
        print_in_color("Correct!\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is b) It measures the voltage drop across a sense resistor\n", RED);
    }
}

void wifi_profiler_practical() {
    char answer[10];
    print_in_color("Hands-on Practical:\n", GREEN);
    
    slow_print("Set up the DA16200MOD-DEVKT-P with the Power Profiler Tool and measure the current consumption in various DPM modes.\n", 20);
    
    slow_print("Q1: Which function should you call to enable DPM before measuring power consumption?\n", 20);
    slow_print("a) start_dpm()\n", 20);
    slow_print("b) enable_dpm()\n", 20);
    slow_print("c) measure_power()\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "b\n") == 0) {
        print_in_color("Correct! enable_dpm() should be called to start DPM.\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is b) enable_dpm()\n", RED);
    }
    
    slow_print("Q2: After enabling DPM, how would you measure the power consumption in fully functional mode?\n", 20);
    slow_print("a) switch_dpm_mode(1);\n", 20);
    slow_print("b) switch_dpm_mode(0);\n", 20);
    slow_print("c) start_measurement();\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "a\n") == 0) {
        print_in_color("Correct! switch_dpm_mode(1) switches to fully functional mode for power measurement.\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is a) switch_dpm_mode(1);\n", RED);
    }
}

void sleep_modes_quiz() {
    char answer[10];
    print_in_color("Quiz on Sleep Modes:\n", MAGENTA);
    
    slow_print("Q1: What is the key difference between Sleep Mode 2 and Sleep Mode 3?\n", 20);
    slow_print("a) Sleep Mode 2 retains memory, Sleep Mode 3 does not\n", 20);
    slow_print("b) Sleep Mode 3 retains memory, Sleep Mode 2 does not\n", 20);
    slow_print("c) Both retain memory but consume different power levels\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "b\n") == 0) {
        print_in_color("Correct!\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is b) Sleep Mode 3 retains memory, Sleep Mode 2 does not\n", RED);
    }

        slow_print("Q2: Which Sleep Mode consumes the least power and why?\n", 20);
    slow_print("a) Sleep Mode 1, because all internal blocks are turned off\n", 20);
    slow_print("b) Sleep Mode 2, because it only runs the RTC block\n", 20);
    slow_print("c) Sleep Mode 3, because it retains memory but with low power\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "a\n") == 0) {
        print_in_color("Correct! Sleep Mode 1 consumes the least power as all internal blocks are turned off.\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is a) Sleep Mode 1, because all internal blocks are turned off.\n", RED);
    }

    slow_print("Q3: How does the DA16200 maintain network connection in Sleep Mode 3?\n", 20);
    slow_print("a) By keeping the Wi-Fi module active\n", 20);
    slow_print("b) By retaining memory and periodically waking up\n", 20);
    slow_print("c) By keeping the entire system on low power\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "b\n") == 0) {
        print_in_color("Correct! Sleep Mode 3 retains memory and periodically wakes up to maintain the network connection.\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is b) By retaining memory and periodically waking up.\n", RED);
    }
}

void sleep_modes_practical() {
    char answer[10];
    print_in_color("Hands-on Practical:\n", GREEN);
    
    slow_print("Implement a function to toggle between Sleep Mode 2 and Sleep Mode 3 based on network activity. Retain the memory state in Sleep Mode 3.\n", 20);
    
    slow_print("Q1: What should you check before entering Sleep Mode 3?\n", 20);
    slow_print("a) Whether the RTC is running\n", 20);
    slow_print("b) Whether memory retention is needed\n", 20);
    slow_print("c) Whether data transmission is required\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "b\n") == 0) {
        print_in_color("Correct! You should check whether memory retention is needed before entering Sleep Mode 3.\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is b) Whether memory retention is needed.\n", RED);
    }
    
    slow_print("Q2: What is the correct function to use for entering Sleep Mode 3?\n", 20);
    slow_print("a) enter_sleep_mode(SLEEP_MODE_2)\n", 20);
    slow_print("b) enter_sleep_mode(SLEEP_MODE_3)\n", 20);
    slow_print("c) enter_sleep_mode(SLEEP_MODE_1)\n", 20);
    printf("Your answer: ");
    fgets(answer, 10, stdin);
    
    if (strcmp(answer, "b\n") == 0) {
        print_in_color("Correct! The correct function is enter_sleep_mode(SLEEP_MODE_3)\n", GREEN);
    } else {
        print_in_color("Incorrect. The correct answer is b) enter_sleep_mode(SLEEP_MODE_3)\n", RED);
    }
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

