# SecuredPHR_Cpp

A Secured Sharing Of Personal Health Records system built with "C++" and "SQLite".  
This project will let patients and doctors share health records or reports securely.

## Tech Stack
- C++20
- [cpp-httplib](https://github.com/yhirose/cpp-httplib) (header-only HTTP server) — "include/httplib.h"
- SQLite
- Visual Studio 2022 (MSBuild, not CMake)

## Project Structure
SecuredPHR_Cpp/
├── assets/ # Static resources (HTML/CSS/JS/images) (Yet to be added)
├── include/ # Headers (e.g., httplib.h)
├── sqlite/ # SQLite headers/libs or db files (Yet to be added)
├── src/ # C++ source as project grows (Yet to be added)
├── SecuredPHR_Cpp/ # VS project folder (contains SecuredPHR_Cpp.cpp, .vcxproj and main .cpp)
├── SecuredPHR_Cpp.sln
├── .gitignore
└── README.md


## Current Status
- Minimal HTTP server exposing:
  - "GET /" → "<h1>Secured Sharing Of Health Records!</h1>"

## Prerequisites
- Visual Studio 2022 with "Desktop development with C++"
- [cpp-httplib](https://github.com/yhirose/cpp-httplib) (header-only HTTP server) — "include/httplib.h"
- Git (optional for contributors)
- SQLite(https://www.sqlite.org/) (for database functionality)

## Build & Run (Visual Studio)
1. Clone the repository:
   ->git bash
   ->git clone https://github.com/Yogesh-0108/SecuredPHR_Cpp.git
2. In the path where the repo is cloned, Open `SecuredPHR_Cpp.sln` in Visual Studio 2022.
3. Configuration: Debug | x64.
4. Ensure "Properties" -> "C/C++ → Additional Include Directories" contains:
   - "$(ProjectDir)..\include"  (so "httplib.h" is found)
   - later-> "$(ProjectDir)..\sqlite"  (for SQLite headers)
5. Build: "Ctrl + Shift + b".
6. Run: "Ctrl + F5" (or click "Local Windows Debugger").
7. Visit: "http://localhost:8080/".

## Roadmap

* Add SQLite integration (create/open DB, basic CRUD Operations)
* Serve static assets from /assets
* Add authentication for patients & doctors
* AES Encryption for both doctors & patients.

## Contributions

Pull requests are welcome. For major changes, please open an issue first to discuss what you’d like to change.
