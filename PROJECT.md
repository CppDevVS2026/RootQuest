# # Root Quest

## Overview
**Root Quest** is an immersive, text-based RPG where the computer's actual file system serves as the live game world. Instead of simulating an environment in memory, the game uses real directories as physical map locations (e.g., towns, dungeons) and standard files as game entities (the player, NPCs, items, and quests). It gamifies file management and directory tracking by turning system navigation into an adventure.

## Core Mechanics
- **The World as a File System**: Exploring a new area in the game means physically navigating into a new directory folder.
- **Entities as Files**: The player, NPCs, and items exist as actual files.
- **Real-Time System Interaction**: In-game actions physically alter the hard drive. If the player travels to a new zone or picks up an item, the underlying files are moved or modified. These changes can be witnessed live in the Windows Explorer as files appear and disappear.
- **File-Based Dialogue and Stats**: Talking to an NPC involves reading their file contents. Updating character stats, managing inventory, or saving progress writes new data directly into sequential-access text files.

## Technical Stack & Architecture
- **Language**: Pure C (C23)
- **System API**: Win32 API
- **Target Environment**: Windows 11
- **Core Operations**: Relies heavily on C file I/O operations (`fopen`, `fprintf`, `fscanf`, `fread`, `fwrite`) combined with Win32 API functions for scanning directories, tracking file locations, and executing system-level movements.