# Modern C23 Meson Project Template

[![CI Build](https://github.com/<your-username>/<your-repo-name>/actions/workflows/ci.yml/badge.svg)](https://github.com/<your-username>/<your-repo-name>/actions)

A professional, out-of-the-box C project template using the **Meson Build System**, targetting the **C23 Standard**, configured with **Clangd** integration, and featuring automated unit testing with **Unity**.

## 🚀 Features

- **Standard C23**: Configured to compile with the latest standard standard C features (`c_std=c23`).
- **Decoupled Architecture**: Separation of concerns with dedicated folders for libraries (`libs/`), applications (`apps/`), and unit tests (`tests/`).
- **Unit Testing Out-of-the-Box**: Integrated with the **Unity** testing framework via Meson subproject wrapping.
- **Portability**: Workspace-relative VS Code configurations for seamless IDE integration.
- **Continuous Integration**: Pre-configured GitHub Actions workflow to verify builds and test runs on every push and pull request.

## 📋 Prerequisites

To configure and compile this project, you need:

1. **Python 3** (with `pip` to install Meson)
2. **Meson** build system:
   ```bash
   pip install meson
   ```
3. **Ninja** build tool:
   - *Windows (MSYS2/Chocolatey)*: `pacman -S mingw-w64-x86_64-ninja` or `choco install ninja`
   - *Ubuntu/Debian*: `sudo apt-get install ninja-build`
   - *macOS*: `brew install ninja`
4. **C Compiler** supporting C23 features (GCC 13+, Clang 18+, or MSVC 19.38+)

## 🛠️ Getting Started

### 1. Create a Repository from this Template
Click the green **"Use this template"** button at the top of the GitHub repository page to spawn a new repository.

### 2. Setup Build Configuration
Initialize the Meson build directory. This will download the Unity test dependency automatically:
```bash
meson setup builddir
```

### 3. Compile the Code
Build libraries, applications, and tests:
```bash
meson compile -C builddir
```

### 4. Run the Application
```bash
./builddir/apps/app/app
# Or on Windows:
./builddir/apps/app/app.exe
```

### 5. Run the Test Suite
```bash
meson test -C builddir
```

## 📁 Project Structure

```
├── .github/                 # GitHub workflows & templates
├── .vscode/                 # VS Code workspace settings
├── apps/                    # Executable binaries
│   └── app/                 
├── libs/                    # Core libraries
│   └── my_lib/              
├── subprojects/             # Wrap dependencies (Unity)
└── tests/                   # Test targets
    └── my_lib_test/         
```

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
