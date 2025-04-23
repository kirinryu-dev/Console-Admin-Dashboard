# Compiler settings
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Files
SRC = src/main.cpp
OUT = build/user_dashboard.exe

# Default build
all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

# Clean command
clean:
	rm -rf build

	// i prefere gulp tasks functions and pipe 
