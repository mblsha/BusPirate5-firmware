// en-us is our base language translation file
#include "translation/base.h"
static char const * const pl_pl[]={
	[T_ON]="Wł.",
	[T_OFF]="Wył.",
	[T_GND]="GND",
	[T_INPUT]="INPUT",
	[T_OUTPUT]="OUTPUT",
	[T_EXIT]="Wyjście",
	[T_LOADED]="Załadowano",
	[T_SAVED]="Zapisano",
	[T_USE_PREVIOUS_SETTINGS]="Użyć poprzednich ustawień?",
	[T_MODE_ERROR_NO_EFFECT]="BŁĄD: polecenie nie ma tutaj efektu",
	[T_MODE_ERROR_NO_EFFECT_HIZ]="Polecenienie ma efektu w trybie HiZ, naciśnij 'm' aby wybrać tryb",
	[T_MODE_NO_HELP_AVAILABLE]="Brak dostępnej pomocy",
	[T_PRESS_ANY_KEY_TO_EXIT]="Naciśnij jakiś klawisz aby wyjść",
	[T_MODE_MODE_SELECTION]="Wybór trybu",
	[T_MODE_MODE]="Tryb",
	[T_MODE_NUMBER_DISPLAY_FORMAT]="Numeryczny format wyśwetlania",
	[T_MODE_INVALID_OPTION]="Nieprawidłowa opcja",
	[T_MODE_CHOOSE_AVAILABLE_PIN]="Wybierz dostępny pin:",
	[T_MODE_ALL_PINS_IN_USE]="Wszystkie piny w użyciu",
	[T_MODE_PULLUP_RESISTORS]="Rezystory Pull-up",
	[T_MODE_POWER_SUPPLY]="Zasilanie",
	[T_MODE_DISABLED]="Wyłączone",
	[T_MODE_DISPLAY]="Display",
	[T_MODE_DISPLAY_SELECTION]="Display selection",
	[T_MODE_ENABLED]="Włączone",
	[T_MODE_BITORDER]="Kolejność bitów",
	[T_MODE_BITORDER_MSB]="MSB",
	[T_MODE_BITORDER_LSB]="LSB",
	[T_MODE_DELAY]="Opóźnienie",
	[T_MODE_US]="us",
	[T_MODE_MS]="ms",
	[T_MODE_ADC_VOLTAGE]="Volts on",
	[T_MODE_ERROR_PARSING_MACRO]="Błąd parsowania makra",
	[T_MODE_ERROR_NO_MACROS_AVAILABLE]="Brak dostępnych makr",
	[T_MODE_ERROR_MACRO_NOT_DEFINED]="Makro nie zdefiniowane",
	[T_MODE_PWM_GENERATE_FREQUENCY]="Wygeneruj częstotliwość",
	[T_MODE_FREQ_MEASURE_FREQUENCY]="Pomiar częstotliwości",
	[T_MODE_FREQ_FREQUENCY]="Częstotliwość",
	[T_MODE_FREQ_DUTY_CYCLE]="Cykl pracy częstotliwości",
	[T_PSU_DAC_ERROR]="Błąd DAC PSU, uruchom self-test",
	[T_PSU_CURRENT_LIMIT_ERROR]="Natężenie ponad limit, wyłączono zasilanie",
	[T_PSU_SHORT_ERROR]="Potencjalne zwarcie, wyłączono zasilanie",
	[T_PSU_ALREADY_DISABLED_ERROR]="Zasilanie już wyłączone",
	[T_SYNTAX_EXCEEDS_MAX_SLOTS]="Wynik przekracza dostępną przestrzeń (%d slotów)",
	[T_HWSPI_SPEED_MENU]="Prędkość SPI",
	[T_HWSPI_SPEED_MENU_1]="1 do 62500KHz",
	[T_HWSPI_SPEED_PROMPT]="KHz (%s%dKHz*%s)",
	[T_HWSPI_BITS_MENU]="Bity danych",
	[T_HWSPI_BITS_MENU_1]="4 do 8 bitów",
	[T_HWSPI_BITS_PROMPT]="Bity/Bitów (%s%d*%s)",
	[T_HWSPI_CLOCK_POLARITY_MENU]="Polaryzacja zegara",
	[T_HWSPI_CLOCK_POLARITY_MENU_1]="Idle LOW",
	[T_HWSPI_CLOCK_POLARITY_MENU_2]="Idle HIGH",
	[T_HWSPI_CLOCK_POLARITY_PROMPT]="Polaryzacja",
	[T_HWSPI_CLOCK_PHASE_MENU]="Faza zegara",
	[T_HWSPI_CLOCK_PHASE_MENU_1]="LEADING edge",
	[T_HWSPI_CLOCK_PHASE_MENU_2]="TRAILING edge",
	[T_HWSPI_CLOCK_PHASE_PROMPT]="Faza",
	[T_HWSPI_CS_IDLE_MENU]="Chip select",
	[T_HWSPI_CS_IDLE_MENU_1]="Active HIGH (CS)",
	[T_HWSPI_CS_IDLE_MENU_2]="Active LOW (/CS)",
	[T_HWSPI_CS_IDLE_PROMPT]="CS",
	[T_HWSPI_ACTUAL_SPEED_KHZ]="Faktyczna prędkość",
	[T_HWSPI_CS_SELECT]="CS Włączone",
	[T_HWSPI_CS_DESELECT]="CS Wyłączone",
	[T_UART_SPEED_MENU]="Prędkość UART",
	[T_UART_SPEED_MENU_1]="1200, 2400, 4800, 9600, 19200, 38400, 57600, 115200 itd.",
	[T_UART_SPEED_PROMPT]="Szerokość transmisji (%s%d*%s)",
	[T_UART_PARITY_MENU]="Parzystość",
	[T_UART_PARITY_MENU_1]="Brak",
	[T_UART_PARITY_MENU_2]="Parzyste",
	[T_UART_PARITY_MENU_3]="Nieparzyste",
	[T_UART_PARITY_PROMPT]="Parzystość",
	[T_UART_DATA_BITS_MENU]="Bity danych",
	[T_UART_DATA_BITS_MENU_1]="5 do 8 bitów",
	[T_UART_DATA_BITS_PROMPT]="(%s%d*%s) Bity/Bitów",
	[T_UART_STOP_BITS_MENU]="Bity zatrzymania",
	[T_UART_STOP_BITS_MENU_1]="1",
	[T_UART_STOP_BITS_MENU_2]="2",
	[T_UART_STOP_BITS_PROMPT]="Bity",
	[T_UART_BLOCKING_MENU]="Używaj funkcji blokujących?",
	[T_UART_BLOCKING_MENU_1]="Nie",
	[T_UART_BLOCKING_MENU_2]="Tak",
	[T_UART_BLOCKING_PROMPT]="Blokowanie",
	[T_UART_ACTUAL_SPEED_BAUD]="Faktyczna szerokość transmisji",
	[T_UART_BAUD]="szerokość transmisji",
	[T_UART_OPEN]="UART OTWARTY",
	[T_UART_OPEN_WITH_READ]="UART OTWARTY (ASYNC READ)",
	[T_UART_CLOSE]="UART ZAMKNIĘTY",
	[T_UART_NO_DATA_READ]="Brak danych do odczytu",
	[T_UART_NO_DATA_TIMEOUT]="Odczyt danych przekroczył limit czasu",
	[T_HWI2C_SPEED_MENU]="Prędkość I2C",
	[T_HWI2C_SPEED_MENU_1]="1KHz do 1000KHz",
	[T_HWI2C_SPEED_PROMPT]="KHz (%s%dKHz*%s)",
	[T_HWI2C_DATA_BITS_MENU]="Bity danych",
	[T_HWI2C_DATA_BITS_MENU_1]="8",
	[T_HWI2C_DATA_BITS_MENU_2]="10",
	[T_HWI2C_DATA_BITS_PROMPT]="Bitów",
	[T_HWI2C_START]="I2C START",
	[T_HWI2C_STOP]="I2C STOP",
	[T_HWI2C_ACK]="ACK",
	[T_HWI2C_NACK]="NACK",
	[T_HWI2C_NO_PULLUP_DETECTED]="Nie wykryto rezystorów pull-up. Użyj P aby je włączyć",
	[T_HWI2C_TIMEOUT]="Przekroczenie limitu czasu I2C",
	[T_HWI2C_I2C_ERROR]="Błąd magistrali I2C",
	[T_HWLED_DEVICE_MENU]="Rodzaj LED",
	[T_HWLED_DEVICE_MENU_1]="WS2812/SK6812/'NeoPixel' (single wire interface)",
	[T_HWLED_DEVICE_MENU_2]="APA102/SK9822 (clock and data interface)",
	[T_HWLED_DEVICE_MENU_3]="LEDy na płytce (16 SK6812s)",
	[T_HWLED_DEVICE_PROMPT]="Typ",
	[T_HWLED_NUM_LEDS_MENU]="Ilość LEDów w pasku",
	[T_HWLED_NUM_LEDS_MENU_1]="1 do 10000",
	[T_HWLED_NUM_LEDS_PROMPT]="LEDy (%s%d*%s)",
	[T_HWLED_RESET]="RESET",
	[T_HWLED_FRAME_START]="RAMKA STARTu (0x00000000)",
	[T_HWLED_FRAME_STOP]="RAMKA STOPu (0xFFFFFFFF)",
	[T_HW1WIRE_RESET]="1-Wire RESET",
	[T_HW1WIRE_PRESENCE_DETECT]="Wykryto urządzenie",
	[T_HW1WIRE_NO_DEVICE]="Nie wykryto urządzenia",
	[T_CMDLN_INVALID_COMMAND]="Niepoprawne polecenie: %s. Użyj ? aby użyskać pomoc.",
	[T_CMDLN_NO_HELP]="Pomoc dla tego polecenia jest aktualnie niedostępna.",
	[T_CMDLN_LS]="ls {katalog} - listuje pliki w aktualnej lokacji albo {katalogu}.",
	[T_CMDLN_CD]="cd {katalog} - przechodzi do {katalogu}.",
	[T_CMDLN_MKDIR]="mkdir {katalog} - tworzy {katalog}.",
	[T_CMDLN_RM]="rm {plik/katalog} - usuwa plik lub (zawartość) katalog/katalogu.",
	[T_CMDLN_CAT]="cat {plik} - wyświetla zawartość {pliku}.",
	[T_CMDLN_MODE]="m - zmienia tryb protokołu, pokazuje menu wyboru.",
	[T_CMDLN_PSU_EN]="W - włącza zasilanie na płytce, pokazuje menu konfiguracji.",
	[T_CMDLN_RESET]="# - resetuje i restartuje Bus Pirate'a.",
	[T_CMDLN_BOOTLOAD]="$ - resetuje i wchodzi w tryb bootloadera do aktualizacji.",
	[T_CMDLN_INT_FORMAT]="= {wartość} - konwertuje {wartość} do BIN/DEC/HEX/ASCII.",
	[T_CMDLN_INT_INVERSE]="| {wartość} - inwertuje bity {wartośći}.",
	[T_CMDLN_HELP]="? - pokazuje pomoc dla polecenia i składni.",
	[T_CMDLN_CONFIG_MENU]="c - otwieramenu konfiguacji Bus Pirate'a.",
	[T_CMDLN_FREQ_ONE]="f {IOx} - jednorazowo mierzy częstotliwość na pinie {IOx}.",
	[T_CMDLN_FREQ_CONT]="F {IOx} - mierzy częstotliwość na pinie {IOx} w sposób ciągły.",
	[T_CMDLN_PWM_CONFIG]="G - konfiguruje generator częstotliwości (PWM) na dostępnym pinie IOx.",
	[T_CMDLN_PWM_DIS]="g {IOx} - wyłącza generator częstotliwości (PWM) na pinie {IOx}.",
	[T_CMDLN_HELP_MODE]="h - pokazuje ekran pomocy specyficzny dla trybu.",
	[T_CMDLN_HELP_DISPLAY]="hd - show display mode specific help screen.",
	[T_CMDLN_INFO]="i - pokazuje informację o Bus Pirate'cie i ekran statusu.",
	[T_CMDLN_BITORDER_MSB]="l - ustawia kolejność wyjścia na Najbardziej Znaczący Bit (MSB).",
	[T_CMDLN_BITORDER_LSB]="L - ustawia kolejność wyjścia na Najmniej Znaczący Bit (LSB).",
	[T_CMDLN_DISPLAY_FORMAT]="o - konfiguruje format wyświetlania numerów.",
	[T_CMDLN_PULLUPS_EN]="P - włącza rezystory pull-up na płytce.",
	[T_CMDLN_PULLUPS_DIS]="p - wyłącza rezystory pull-up na płytce.",
	[T_CMDLN_PSU_DIS]="w - wyłącza zasilanie na płytce.",
	[T_CMDLN_ADC_CONT]="V {IOx} - mierzy napięcie na pinie {IOx} w sposób ciągły. Pomiń numer pinu aby mierzyć na wszystkich pinach.",
	[T_CMDLN_ADC_ONE]="v {IOx} - jednorazowo mierzy napięciena pinie {IOx}. Pomiń numer pinu aby zmierzyć jednorazowo na wszystkich pinach.",
	[T_CMDLN_SELFTEST]="~ - przeprowadza self-test fabryczny. Odłącz wszystkie urządzenia i zmień na tryb HiZ przed rozpoczęciem testu.",
	[T_CMDLN_AUX_IN]="@ {IOx} - ustawia pin {IOx} jako wejściowy, czyta stan pinu.",
	[T_CMDLN_AUX_LOW]="a {IOx} - ustawia pin {IOx} jako wyjściowy i stan niski.",
	[T_CMDLN_AUX_HIGH]="A {IOx} - ustawia pin {IOx} jako wyjściowy i stan wysoki.",
	[T_CMDLN_DUMP]="dump {plik} {urządzenie} - zrzuca zawarość pamięci flash {urządzenia} do {pliku}. Uwaga: aktualnie eksperymentalna funkcja, która działa tylko z 25LC020 w trybie SPI.",
	[T_CMDLN_LOAD]="load {plik} {urządzenie} - wczytuje zawartość {pliku} do pamięci flash {urządzenia}. Uwaga: aktualnie eksperymentalna funkcja, która działa tylko z 25LC020 w trybie SPI.",
	[T_CMDLN_DISPLAY]="d - change display mode, show selection menu.",
	[T_CMDLN_LOGIC]="logic {frequency in kHz} {samples} {trigger pin} {trigger level} - logic analyzer. {frequency} 1kHz-62500kHz, {trigger pin} 0:7, {trigger level} 0:1.",
	[T_CMDLN_HEX]="hex {file} - print contents of {file} in HEX",
	[T_HELP_TITLE]="General Commands\t\t\tBus Syntax",
	[T_HELP_GENERAL_COMMANDS]="General Commands",
	[T_HELP_BUS_SYNTAX]="Bus Syntax",
	[T_HELP_DISK_COMMANDS]="Disc Commands",
	[T_HELP_BLANK]="\t\t\t",
	[T_HELP_SECTION_IO]="work with pins, input, output measurement",
	[T_HELP_SECTION_CAPTURE]="measure analog and digital signals",
	[T_HELP_SECTION_CONFIGURE]="configure the terminal, LEDs, display and mode",
	[T_HELP_SECTION_SYSTEM]="restart, firmware updates and diagnostic",
	[T_HELP_SECTION_FILES]="list files and navigate the storage",
	[T_HELP_SECTION_MODE]="enter a mode to use protocols",
	[T_HELP_SECTION_SYNTAX]="send and receive data in modes using bus syntax",
	[T_HELP_SECTION_HELP]="get more help",
	[T_HELP_GREATER_THAN]="Uruchom Składnię Magistrali (patrz Bus Syntax)",
	[T_HELP_SYNTAX_ADC]="Mierzy volty na IO.x\t",
	[T_HELP_CMD_LS]="Listuj pliki",
	[T_HELP_CMD_CD]="Zmień katalog",
	[T_HELP_CMD_MKDIR]="Twórz katalog",
	[T_HELP_CMD_RM]="Usuń plik/katalog",
	[T_HELP_CMD_FORMAT]="Format storage disk (FAT16)",
	[T_HELP_CMD_CAT]="Pokaż zawartość pliku",
	[T_HELP_CMD_HEX]="Print file contents in HEX",
	[T_HELP_CAPTURE_SCOPE]="Oscilloscope interface",
	[T_HELP_CAPTURE_LA]="Logic analyzer interface",
	[T_HELP_1_2]="Konwertuje x/odwraca x\t",
	[T_HELP_1_3]="Wewnętrzny test (self-test)\t\t",
	[T_HELP_1_4]="Resetuj Bus Pirate'a\t",
	[T_HELP_1_5]="Przejdź do bootloadera\t",
	[T_HELP_1_6]="Opóźnij 1 us/MS (d:4 aby powtórzyć)",
	[T_HELP_1_7]="Ustaw stan pinu IO.x (low/HI/READ)",
	[T_HELP_COMMAND_AUX]="Ustaw stan pinu IO x (low/HI/READ)",
	[T_HELP_COMMAND_DISPLAY]="Change screen display mode",
	[T_HELP_1_9]="Menu konfiguracyjne\t",
	[T_HELP_1_22]="Pokaż wolty na pinie IOx (jednorazowo/CIĄGLE)",
	[T_HELP_1_10]="Pokaż wolty na wszystkich pinach IOs (jednorazowo/CIĄGLE)",
	[T_HELP_1_11]="Zmierz częstotliwość na pinie IOx (jednorazowo/CIĄGLE)",
	[T_HELP_1_23]="Monitoruj częstotliwość (wył./WŁ.)\t",
	[T_HELP_1_12]="Generuj częstotliwość (wył./WŁ.)",
	[T_HELP_HELP_GENERAL]="General help (you're reading me!)",
	[T_HELP_HELP_DISPLAY]="Help with a display mode such as the scope",
	[T_HELP_HELP_MODE]="Help specific to a protocol mode such as I2C",
	[T_HELP_HELP_COMMAND]="Add -h for command help: ls -h",
	[T_HELP_1_14]="Wersja/Status\t",
	[T_HELP_1_15]="Kolejność bitów (msb/LSB)\t",
	[T_HELP_1_16]="Zmień tryb\t\t",
	[T_HELP_1_17]="Ustaw format wyświetlania numerów",
	[T_HELP_1_18]="Rezystory Pull-up (wył./WŁ.)",
	[T_HELP_1_19]="-\t\t\t",
	[T_HELP_1_20]="Pokaż wolty/stany\t",
	[T_HELP_1_21]="Zasilanie (wył./WŁ.)\t",
	[T_HELP_2_1]="Mode macro x/list all\t",
	[T_HELP_2_3]="Uruchom",
	[T_HELP_2_4]="Zatrzymaj",
	[T_HELP_2_5]="Uruchom z odczytem",
	[T_HELP_2_6]="Zatrzymaj",
	[T_HELP_2_7]="Wyślij stringa",
	[T_HELP_2_8]="",
	[T_HELP_2_9]="",
	[T_HELP_2_10]="Wyślij wartość",
	[T_HELP_2_11]="Przeczytaj",
	[T_HELP_2_12]="CLK hi",
	[T_HELP_2_13]="CLK lo",
	[T_HELP_2_14]="CLK tick",
	[T_HELP_2_15]="DAT hi",
	[T_HELP_2_16]="DAT lo",
	[T_HELP_2_17]="DAT przeczytany",
	[T_HELP_2_18]="Bit przeczytany",
	[T_HELP_2_19]="Powtórz np. r:10",
	[T_HELP_2_20]="Ilość bitów do zapisu/odczytu np. 0x55.2",
	[T_HELP_2_21]="Makra użytkownika x/pokaż wszystkie",
	[T_HELP_2_22]="Makra użytkownika przypisz x",
	[T_HELP_HINT]="Multiplikuj polecenia przy użyciu ; || &&.\r\n\r\nPatrz -h dla pomocy polecenia: ls -h",
	[T_INFO_FIRMWARE]="Firmware",
	[T_INFO_BOOTLOADER]="Bootloader",
	[T_INFO_WITH]="z",
	[T_INFO_RAM]="RAM",
	[T_INFO_FLASH]="FLASH",
	[T_INFO_SN]="S/N",
	[T_INFO_WEBSITE]="https://BusPirate.com/",
	[T_INFO_TF_CARD]="Karta SD/TF",
	[T_INFO_FILE_SYSTEM]="System Plików",
	[T_NOT_DETECTED]="Nie Wykryto",
	[T_INFO_AVAILABLE_MODES]="Dostępne tryby",
	[T_INFO_CURRENT_MODE]="Aktywny tryb",
	[T_INFO_POWER_SUPPLY]="Zasilanie",
	[T_INFO_CURRENT_LIMIT]="Limit natężenia",
	[T_INFO_PULLUP_RESISTORS]="Rezystory pull-up",
	[T_INFO_FREQUENCY_GENERATORS]="Generatory częstotliwości",
	[T_INFO_DISPLAY_FORMAT]="Format wyświetlania",
	[T_INFO_DATA_FORMAT]="Format danych",
	[T_INFO_BITS]="bity/bitów",
	[T_INFO_BITORDER]="kolejność bitów",
	[T_CONFIG_FILE]="Plik konfiguracyjny",
	[T_CONFIG_CONFIGURATION_OPTIONS]="Opcje konfiguracyjne",
	[T_CONFIG_LANGUAGE]="Język",
	[T_CONFIG_ANSI_COLOR_MODE]="Tryb kolorowy ANSI",
	[T_CONFIG_ANSI_TOOLBAR_MODE]="Tryb ANSI toolbar",
	[T_CONFIG_LANGUAGE_ENGLISH]="Angielski",
	[T_CONFIG_LANGUAGE_CHINESE]="Chiński (uproszczony)",
	[T_CONFIG_LANGUAGE_POLISH]="Polski",
	[T_CONFIG_LANGUAGE_BOSNIAN]="Bosnian",
	[T_CONFIG_DISABLE]="Wyłącz",
	[T_CONFIG_ENABLE]="Włącz",
	[T_CONFIG_SCREENSAVER]="Wygaszacz ekranu LCD",
	[T_CONFIG_SCREENSAVER_5]="5 minut",
	[T_CONFIG_SCREENSAVER_10]="10 minut",
	[T_CONFIG_SCREENSAVER_15]="15 minut",
	[T_CONFIG_LEDS_EFFECT]="Efekt LED",
	[T_CONFIG_LEDS_EFFECT_SOLID]="Stały",
	[T_CONFIG_LEDS_EFFECT_ANGLEWIPE]="Angle wipe",
	[T_CONFIG_LEDS_EFFECT_CENTERWIPE]="Center wipe",
	[T_CONFIG_LEDS_EFFECT_CLOCKWISEWIPE]="Clockwise wipe",
	[T_CONFIG_LEDS_EFFECT_TOPDOWNWIPE]="Top side wipe",
	[T_CONFIG_LEDS_EFFECT_SCANNER]="Skaner",
	[T_CONFIG_LEDS_EFFECT_CYCLE]="Party mode",
	[T_CONFIG_LEDS_COLOR]="Kolor LED",
	[T_CONFIG_LEDS_COLOR_RAINBOW]="Tęcza",
	[T_CONFIG_LEDS_COLOR_RED]="Czerwony",
	[T_CONFIG_LEDS_COLOR_ORANGE]="Pomarańczowy",
	[T_CONFIG_LEDS_COLOR_YELLOW]="Żółty",
	[T_CONFIG_LEDS_COLOR_GREEN]="Zielony",
	[T_CONFIG_LEDS_COLOR_BLUE]="Niebieski",
	[T_CONFIG_LEDS_COLOR_PURPLE]="Fioletowy",
	[T_CONFIG_LEDS_COLOR_PINK]="Różowy",
	[T_CONFIG_LEDS_BRIGHTNESS]="Jasność LEDów",
	[T_CONFIG_LEDS_BRIGHTNESS_10]="10%",
	[T_CONFIG_LEDS_BRIGHTNESS_20]="20%",
	[T_CONFIG_LEDS_BRIGHTNESS_30]="30%",
	[T_CONFIG_LEDS_BRIGHTNESS_40]="40%",
	[T_CONFIG_LEDS_BRIGHTNESS_50]="50%",
	[T_CONFIG_LEDS_BRIGHTNESS_100]="100% ***UWAGA: uszkodzi port USB bez zewnętrznego zasilacza***",

};

static_assert(count_of(pl_pl)==T_LAST_ITEM_ALWAYS_AT_THE_END, "Missing pl_pl translations!");
