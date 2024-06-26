![ubuntu-gcc-build](https://github.com/Jmgr/actiona/workflows/Linux-gcc/badge.svg)
![windows-msvc-build](https://github.com/Jmgr/actiona/workflows/Windows-msvc/badge.svg)
![License: GPLv3](https://img.shields.io/badge/license-GPLv3-blue)

# Actiona
Actiona is an automation tool that allows you to execute many actions on your
computer such as emulating mouse clicks, key presses, showing message boxes,
editing text files, etc. Tasks can be created using a simple editor or using
the EcmaScript (JavaScript) programming language for more customization.
Actiona is cross-platform.

Please visit http://actiona.tools for more information.

## Actions
### Device emulation
 - Write text
 - Press a key
 - Move the mouse cursor (point or path)
 - Click somewhere on the screen
 - Rotate the mouse wheel
 - Wait for a key to be pressed
### System interaction
 - Run a command (detached or not)
 - Kill a process
 - Display a notification
 - Wait for a pixel color on the screen
 - Restart/stop/lock the computer
 - Open an URL
 - Play a sound
 - Find an image on the screen
 - Use text to speech
### Windowing system interaction
 - Display a message box
 - Enter some data
 - Wait for a window
 - Close/move/resize/etc. a window
### Data manipulation
 - Write/read a text file
 - Write/read a binary file
 - Write/read an INI file
 - Write/read into the registry
 - Write/read the clipboard
 - Read an environment variable
 - Copy a file
 - Download a file
 - Send an e-mail
### Internal/flow manipulation
 - Pause the execution
 - Run Javascript code
 - Go to a line or label
 - Run a loop
 - Do nothing (more useful than you would think!)
 - Stop the execution
 - Set/read a variable
 - Wait for a particular time/date
 - Exit
 - Wait for a variable
 - Write into the app's console
 - Begin/end/call a procedure

Each action has parameters, and Javascript can be written in every field and will be run when the action is executed.

## Contributing

Code contributions as PR are very welcome. Sponsoring is also possible either through [Liberapay](https://liberapay.com/Jmgr), GitHub [Sponsors](https://github.com/sponsors/Jmgr) or using the Cardano (ADA) cryptocurrency: addr1v9zj0klgp8pwa6kf7956nfj5qn7gjuw5x2lyt86vhcwj0xg0eytad -- thanks!

Monetary contributions will be used to pay for the rental of the dedicated server hosting Actiona's updater and installers (~€37/month), and to pay for the required code signing certificates on Windows (a few hundred pounds at least).