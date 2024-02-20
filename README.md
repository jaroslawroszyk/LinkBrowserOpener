# LinkBrowserOpener

**Description:**

This C++ program reads URLs from a file named `links.txt` and opens them in a web browser. It supports Windows, Linux, and macOS platforms.

---

**Usage:**

1. **Compile:**
   
   To compile the program, use a C++ compiler such as g++:

   ```
   g++ main.cpp -o open_links
   ```

2. **Execution:**

   After compilation, run the executable:

   ```
   ./open_links
   ```

3. **Input:**

   Ensure there's a file named `links.txt` in the same directory as the executable. Each line in `links.txt` should contain a URL that you want to open in the web browser.

4. **Supported Platforms:**

   - **Windows:** Uses `ShellExecute` to open URLs.
   - **Linux:** Uses `xdg-open` command.
   - **macOS:** Uses `open` command.

---

**Note:**

- Make sure to have a default web browser configured on your system.
- If you encounter any issues, ensure that the `links.txt` file is correctly formatted and accessible.

---

**Disclaimer:**

This program comes with no warranties. Use it at your own risk.

---