# Root Quest - Project Checklist

## 1. Character State & Definitions (`libs/character/`)
- [ ] Define `CharacterStats` struct in `character.h` (e.g. Write Speed, Seek Time, Integrity, Read Speed, Cache Size, Privilege).
- [ ] Define `CharacterClass` enum in `character.h` (e.g. Admin, Explorer, Archiver, Scripter).
- [ ] Define `Character` struct in `character.h` (containing name, class, stats, current directory, HP, etc).
- [ ] Implement `save_character` in `character.c` to write the character data to a sequential text file (`.char`).
- [ ] Implement `load_character` in `character.c` to read the character data from a file into the `Character` struct.

## 2. Stat Generator (`libs/character_generator/stat_generator.*`)
- [ ] Implement `generate_stats_standard()` to return a fixed stat array (e.g., 15, 14, 13, 12, 10, 8).
- [ ] Implement `generate_stats_random(seed)` to roll random stats (e.g., 4d6 drop lowest).
- [ ] Implement `generate_stats_from_file(filepath)` to generate stats based on reading a real file's metadata/checksum from the hard drive.
- [ ] Implement `print_stats(stream, stats)` to format the stats neatly for console output or file writing.

## 3. Character Generator (`libs/character_generator/character_generator.*`)
- [ ] Implement `create_new_character()` to act as the high-level orchestrator.
- [ ] Add logic to prompt the player for a character name.
- [ ] Add logic to prompt the player for their class choice.
- [ ] Hook up the stat generator to roll their stats.
- [ ] Call `save_character()` to save the finalized new character to the file system to start the game.

## 4. Testing & Integration
- [ ] Write tests in `tests/my_lib_test/test_my_lib.c` (or rename to `test_character_generator.c`) to verify stat rolling math.
- [ ] Integrate character generation flow into `apps/app/main.c`.
