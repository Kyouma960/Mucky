# Pro Micro Reverse Shell

*Stealthy remote control via a Pro Micro board.*



https://github.com/user-attachments/assets/f1a37620-0b90-45cc-a5ef-5481b3c0c099



---

### Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
    - [Usage](#usage)
- [License](#license)
- [Acknowledgments](#acknowledgments)

---

## Overview

The **Pro Micro Reverse Shell** is a lightweight tool for remote command execution on Windows systems. It leverages a Pro Micro board to initiate a reverse shell, enabling stealthy command prompt access via a downloaded netcat executable.

---

## Features

- **Stealth Operation**: Executes commands discreetly without user awareness.
- **Minimal Dependencies**: Uses the Arduino `Keyboard` library for keyboard emulation.
- **Simple Setup**: Easy to modify and deploy on a Pro Micro board.

---

## Getting Started

### Prerequisites

**None**

### Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/Kyouma960/Mucky
   cd Mucky
   ```

2. Open the project in the Arduino IDE.

### Usage

1. Modify the URL in the script to point to your netcat executable.
2. Upload the sketch to the Pro Micro.
3. Connect the Pro Micro to the target machine to initiate the reverse shell.

---

## License

This project is licensed under the [MIT License](https://choosealicense.com/licenses/mit/). See the LICENSE file for details.

---

## Acknowledgments

- Inspired by community tools for ethical hacking and cybersecurity.

--- 
