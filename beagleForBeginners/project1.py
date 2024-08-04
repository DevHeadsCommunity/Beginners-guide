import time
from colorama import Fore, Style, init

init()

def slow_print(text, color=Fore.WHITE, delay=0.1):
    for char in text:
        print(color + char, end='', flush=True)
        time.sleep(delay)
    print(Style.RESET_ALL)

def pause():
    input("\nPress Enter to continue...")

class TemperatureHumidityMonitoringSystem:
    def __init__(self):
        self.quiz_questions = [
            {
                "question": "1. What is the purpose of the pull-up resistor in the sensor circuit?",
                "options": ["A. To pull the voltage to ground", "B. To pull the voltage to VCC", "C. To limit current", "D. To increase signal speed"],
                "answer": "B"
            },
            {
                "question": "2. What baud rate is commonly used for serial communication between BeagleBoard and sensor?",
                "options": ["A. 4800", "B. 9600", "C. 115200", "D. 57600"],
                "answer": "B"
            }
        ]

    def guide_user(self):
        self.slow_print("Temperature and Humidity Monitoring System Guide", Fore.CYAN)
        self.slow_print("\nStep 1: Gather Components", Fore.GREEN)
        instructions = [
            "You will need the following components:",
            "- BeagleBoard (e.g., BeagleBone Black)",
            "- Temperature and Humidity Sensor (e.g., DHT11, DHT22)",
            "- Breadboard and Jumper wires",
            "- Power supply for BeagleBoard (5V)",
            "- USB cable for connecting BeagleBoard to your computer",
            "- Resistors (10kΩ for pull-up, others as needed)",
            "- Capacitors (decoupling capacitors, if necessary)"
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 2: Set Up BeagleBoard", Fore.GREEN)
        instructions = [
            "1. Connect your BeagleBoard to your computer using a USB cable.",
            "2. Install necessary software and drivers on your computer to communicate with the BeagleBoard.",
            "3. Use an SSH client to access the BeagleBoard.",
            "4. Ensure the BeagleBoard is running the latest firmware.",
            "5. Install the necessary libraries for interfacing with the sensor (e.g., Adafruit_DHT library)."
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 3: Connect Temperature and Humidity Sensor", Fore.GREEN)
        instructions = [
            "1. Connect the VCC and GND of the sensor to the 3.3V and GND pins on the BeagleBoard.",
            "2. Connect the data pin of the sensor to one of the GPIO pins on the BeagleBoard.",
            "3. Add a pull-up resistor (10kΩ) between the data pin and VCC if required by the sensor.",
            "4. Verify the sensor's datasheet for proper connections and requirements."
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 4: Write Python Script for BeagleBoard", Fore.GREEN)
        instructions = [
            "1. Open an SSH session to your BeagleBoard.",
            "2. Use a text editor to create a new Python script (e.g., `nano monitor.py`).",
            "3. Import necessary libraries and write code to read data from the sensor and print it to the console.",
            "Code Example:",
            """
            import Adafruit_DHT
            import time

            # Sensor type and GPIO pin
            SENSOR = Adafruit_DHT.DHT11
            PIN = 'P8_11'

            while True:
                humidity, temperature = Adafruit_DHT.read_retry(SENSOR, PIN)
                if humidity is not None and temperature is not None:
                    print(f'Temperature: {temperature:.1f} C  Humidity: {humidity:.1f} %')
                else:
                    print('Failed to get reading. Try again!')
                time.sleep(2)
            """
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 5: Run the Python Script", Fore.GREEN)
        instructions = [
            "1. Save the script and exit the text editor.",
            "2. Run the script using Python to start reading data from the sensor.",
            "   ```bash",
            "   python3 monitor.py",
            "   ```",
            "3. Observe the temperature and humidity readings printed to the console."
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 6: Test the System", Fore.GREEN)
        instructions = [
            "1. Verify the initial responses from the system after powering it up.",
            "2. Check the readings from the temperature and humidity sensor for accuracy.",
            "3. Ensure the data is correctly being transmitted and displayed.",
            "4. Troubleshoot any issues by checking connections, code, and configurations."
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

    def take_quiz(self):
        self.slow_print("Temperature and Humidity Monitoring System Quiz", Fore.CYAN)
        correct_answers = 0
        for question in self.quiz_questions:
            self.slow_print("\n" + question["question"], Fore.BLUE)
            for option in question["options"]:
                self.slow_print(option, Fore.BLUE)
            answer = input("Your answer: ").strip().upper()
            if answer == question["answer"]:
                self.slow_print("Correct!", Fore.GREEN)
                correct_answers += 1
            else:
                self.slow_print(f"Incorrect! The correct answer was {question['answer']}.", Fore.RED)
        self.slow_print(f"\nYou got {correct_answers} out of {len(self.quiz_questions)} correct!", Fore.CYAN)

    def interactive_practice(self):
        self.slow_print("Interactive Practice Section", Fore.CYAN)
        self.slow_print("Follow the steps and confirm each step before proceeding.\n", Fore.CYAN)
        
        practice_steps = [
            ("Step 1: Gather Components", "You will need the following components:\n"
                                         "- BeagleBoard (e.g., BeagleBone Black)\n"
                                         "- Temperature and Humidity Sensor (e.g., DHT11, DHT22)\n"
                                         "- Breadboard and Jumper wires\n"
                                         "- Power supply for BeagleBoard (5V)\n"
                                         "- USB cable for connecting BeagleBoard to your computer\n"
                                         "- Resistors (10kΩ for pull-up, others as needed)\n"
                                         "- Capacitors (decoupling capacitors, if necessary)"),
            ("Step 2: Set Up BeagleBoard", "1. Connect your BeagleBoard to your computer using a USB cable.\n"
                                            "2. Install necessary software and drivers on your computer to communicate with the BeagleBoard.\n"
                                            "3. Use an SSH client to access the BeagleBoard.\n"
                                            "4. Ensure the BeagleBoard is running the latest firmware.\n"
                                            "5. Install the necessary libraries for interfacing with the sensor (e.g., Adafruit_DHT library)."),
            ("Step 3: Connect Temperature and Humidity Sensor", "1. Connect the VCC and GND of the sensor to the 3.3V and from the sensor.\n"
                                        "   ```bash\n"
                                        "   python3 monitor.py\n"
                                        "   ```\n"
                                        "3. Observe the temperature and humidity readings printed to the console."),
            ("Step 6: Test the System", "1. Verify the initial responses from the system after powering it up.\n"
                                        "2. Check the readings from the temperature and humidity sensor for accuracy.\n"
                                        "3. Ensure the data is correctly being transmitted and displayed.\n"
                                        "4. Troubleshoot any issues by checking connections, code, and configurations.")
        ]

        for title, instructions in practice_steps:
            self.slow_print(title, Fore.GREEN)
            self.slow_print(instructions)
            completed = input("\nHave you completed this step? (yes/no): ").strip().lower()
            while completed != 'yes':
                self.slow_print("Please complete the step before proceeding.", Fore.RED)
                completed = input("\nHave you completed this step? (yes/no): ").strip().lower()
            self.pause()

    def start(self):
        self.guide_user()
        self.take_quiz()
        self.interactive_practice()

if __name__ == "__main__":
    system = TemperatureHumidityMonitoringSystem()
    system.start()
