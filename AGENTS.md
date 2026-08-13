# AGENTS.md

## Scope and Goal
- This repository is a small C++ practice workspace for DSA basics.
- Most files in `1D_Array/` are standalone programs with their own `main()`.

## Project Layout
- Practice source files: `1D_Array/*.cpp`
- Per-folder compiled outputs: `1D_Array/output/`
- Top-level output folder: `output/`
- Local editor/tooling config: `.vscode/settings.json`, `.vscode/c_cpp_properties.json`, `.vscode/launch.json`

## Build and Run (Windows, MinGW)
- Compile one file at a time (do not compile all `1D_Array/*.cpp` together, because multiple files define `main()`).
- Preferred command pattern:

  `g++ -std=c++17 -Wall -Wextra -Wpedantic <source.cpp> -o <output.exe>`

- Example:

  `g++ -std=c++17 -Wall -Wextra -Wpedantic 1D_Array/Triangle_Type.cpp -o output/Triangle_Type.exe`

  `./output/Triangle_Type.exe`

## Agent Editing Conventions
- Keep solutions beginner-friendly and minimal; avoid over-engineering.
- Preserve the single-file exercise style unless explicitly asked to refactor.
- Use standard input/output patterns already present in files.
- Keep includes simple and consistent with neighboring files.
- Prefer fixing only the requested file(s); avoid broad formatting-only changes.

## Validation Expectations
- After editing a `.cpp` file, compile that file directly to confirm no syntax errors.
- If behavior changes, provide a short sample input/output in chat.

## Known Pitfalls
- Some files may intentionally be learning experiments; do not "clean up" unrelated code unless asked.
- `C/C++ Runner` settings already define strict warning flags and GCC/GDB tooling; align manual commands with that setup.

## References
- Compiler and warning defaults: [`.vscode/settings.json`](.vscode/settings.json)
- IntelliSense compiler path: [`.vscode/c_cpp_properties.json`](.vscode/c_cpp_properties.json)
- Debug launch profile: [`.vscode/launch.json`](.vscode/launch.json)