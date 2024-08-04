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

class BeagleBoardLearningGuide:
    def __init__(self):
        self.quiz_questions = [
            {
                "question": "1. What is the default operating system for BeagleBone Black?",
                "options": ["A. Raspbian", "B. Ubuntu", "C. Debian", "D. Fedora"],
                "answer": "C"
            },
            {
                "question": "2. Which interface is used to connect BeagleBoard to a computer for SSH access?",
                "options": ["A. HDMI", "B. USB", "C. Ethernet", "D. UART"],
                "answer": "B"
            }
        ]
    def slow_print(text, color=Fore.WHITE, delay=0.1):
     for char in text:
        print(color + char, end='', flush=True)
        time.sleep(delay)
     print(Style.RESET_ALL)

    def pause():
     input("\nPress Enter to continue...")

    def guide_user(self):
        self.slow_print("Learning BeagleBoard Guide", Fore.CYAN)
        self.slow_print("\nStep 1: Gather Components", Fore.GREEN)
        instructions = [
            "You will need the following components:",
            "- BeagleBoard (e.g., BeagleBone Black)",
            "- USB cable for connecting BeagleBoard to your computer",
            "- Ethernet cable (optional, for network access)",
            "- 5V power supply (optional, if not powering through USB)",
            "- HDMI cable and monitor (optional, for graphical output)",
            "- Keyboard and mouse (optional, for direct interaction)"
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 2: Set Up BeagleBoard", Fore.GREEN)
        instructions = [
            "1. Connect your BeagleBoard to your computer using a USB cable.",
            "2. Install necessary software and drivers on your computer to communicate with the BeagleBoard.",
            "3. Use an SSH client (e.g., PuTTY) to access the BeagleBoard.",
            "4. Ensure the BeagleBoard is running the latest firmware.",
            "5. Familiarize yourself with the default Debian operating system."
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 3: Basic Commands", Fore.GREEN)
        instructions = [
            "1. Open an SSH session to your BeagleBoard.",
            "2. Try some basic Linux commands to navigate the system.",
            "3. Use `ls` to list files and directories.",
            "4. Use `cd` to change directories.",
            "5. Use `nano` to create and edit files.",
            "6. Use `apt-get` to install new software packages."
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 4: GPIO Control", Fore.GREEN)
        instructions = [
            "1. Connect an LED to a GPIO pin on the BeagleBoard.",
            "2. Use a resistor to limit the current through the LED.",
            "3. Write a Python script to control the LED.",
            "Code Example:",
            """
            import Adafruit_BBIO.GPIO as GPIO
            import time

            LED = "P8_10"

            GPIO.setup(LED, GPIO.OUT)

            while True:
                GPIO.output(LED, GPIO.HIGH)
                time.sleep(1)
                GPIO.output(LED, GPIO.LOW)
                time.sleep(1)
            """
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 5: Sensor Integration", Fore.GREEN)
        instructions = [
            "1. Connect a temperature sensor (e.g., TMP36) to an analog input pin on the BeagleBoard.",
            "2. Write a Python script to read data from the sensor.",
            "Code Example:",
            """
            import Adafruit_BBIO.ADC as ADC
            import time

            SENSOR_PIN = "P9_40"
            ADC.setup()

            while True:
                value = ADC.read(SENSOR_PIN)
                millivolts = value * 1800  # Convert value to millivolts
                temperature = (millivolts - 500) / 10  # Convert millivolts to temperature
                print(f"Temperature: {temperature:.2f} C")
                time.sleep(1)
            """
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

        self.slow_print("\nStep 6: Networking", Fore.GREEN)
        instructions = [
            "1. Connect an Ethernet cable to the BeagleBoard for network access.",
            "2. Configure network settings using `connmanctl` or a similar tool.",
            "3. Install necessary packages for networking projects (e.g., `pip install requests`).",
            "4. Write a Python script to fetch data from the internet.",
            "Code Example:",
            """
            import requests

            response = requests.get('http://api.open-notify.org/astros.json')
            data = response.json()
            print(data)
            """
        ]
        for instruction in instructions:
            self.slow_print(instruction)
        self.pause()

    def take_quiz(self):
        self.slow_print("BeagleBoard Learning Quiz", Fore.CYAN)
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
                                         "- USB cable for connecting BeagleBoard to your computer\n"
                                         "- Ethernet cable (optional, for network access)\n"
                                         "- 5V power supply (optional, if not powering through USB)\n"
                                         "- HDMI cable and monitor (optional, for graphical output)\n"
                                         "- Keyboard and mouse (optional, for direct interaction)"),
            ("Step 2: Set Up BeagleBoard", "1. Connect your BeagleBoard to your computer using a USB cable.\n"
                                            "2. Install necessary software and drivers on your computer to communicate with the BeagleBoard.\n"
                                            "3. Use an SSH client (e.g., PuTTY) to access the BeagleBoard.\n"
                                            "4. Ensure the BeagleBoard is running the latest firmware.\n"
                                            "5. Familiarize yourself with the default Debian operating system."),
            ("Step 3: Basic Commands", "1. Open an SSH session to your BeagleBoard.\n"
                                       "2. Try some basic Linux commands to navigate the system.\n"
                                       "3. Use `ls` to list files and directories.\n"
                                       "4. Use `cd` to change directories.\n"
                                       "5. Use `nano` to create and edit files.\n"
                                       "6. Use `apt-get` to install new software packages."),
            ("Step 4: GPIO Control", "1. Connect an LED to a GPIO pin on the BeagleBoard.\n"
                                     "2. Use a resistor to limit the current through the LED.\n"
                                     "3. Write a Python script to control the LED.\n"
                                     "Code Example:\n"
                                     "```python\n"
                                     "import Adafruit_BBIO.GPIO as GPIO\n"
                                     "import time\n\n"
                                     "LED = \"P8_10\"\n\n"
                                     "GPIO.setup(LED, GPIO.OUT)\n\n"
                                     "while True:\n"
                                     "    GPIO.output(LED, GPIO.HIGH)\n"
                                     "    time.sleep(1)\n"
                                     "    GPIO.output(LED, GPIO.LOW)\n"
                                     "    time.sleep(1)\n"
                                     "```"),
#            ("Step 5: Sensor Integration",  "1. Connect a temperature sensor (e.g., TMP36) to an analog input pin on the BeagleBoard.\n"
#                                           "2. Write a Python script to read data from the sensor.\n"
#                                           "Code Example:\n"
#                                           "```python\n"
#                                           "import Adafruit_BBIO.ADC as ADC\n"
#                                           "import time\n\n"
#                                           "SENSOR_PIN = \"P9_40\"\n"
#                                           "ADC.setup()\n\n"
#                                           "while True:\n"
#                                           "    value = ADC.read(SENSOR_PIN)\n"
#                                           "    millivolts = value * 1800  # Convert value to millivolts\n"
#                                           "    temperature = (millivolts - "    temperature = (millivolts - 500) / 10  # Convert millivolts to temperature\n"
#                                           "    print(f\"Temperature: {temperature:.2f} C\")\n"
#                                           "    time.sleep(1)\n"
#                                           "```"),
            ("Step 6: Networking", "1. Connect an Ethernet cable to the BeagleBoard for network access.\n"
                                   "2. Configure network settings using `connmanctl` or a similar tool.\n"
                                   "3. Install necessary packages for networking projects (e.g., `pip install requests`).\n"
                                   "4. Write a Python script to fetch data from the internet.\n"
                                   "Code Example:\n"
                                   "```python\n"
                                   "import requests\n\n"
                                   "response = requests.get('http://api.open-notify.org/astros.json')\n"
                                   "data = response.json()\n"
                                   "print(data)\n"
                                   "```")
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
    guide = BeagleBoardLearningGuide()
    guide.start()
