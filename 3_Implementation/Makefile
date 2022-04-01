PROJECT_NAME = Bank_Maintanance

# Output directory
BUILD = build

# All source code files
SRC = src/Bank_Main.c \
Bank.c \

# All test source files
TEST_SRC = src/Bank_Main.c\
test/Test_Bank_Main.c\
unity/unity.c\

TEST_VALGRIND = src/Bank_Main.c\
test/test_Bank_Main1.c\
unity/unity.c\

# All include folders with header files
INC = inc/Bank_Main.h

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Default target built
$(PROJECT_NAME):all


# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out



# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o build/Bank_Test.out

valgrind:$(BUILD)
	gcc $(TEST_VALGRIND) $(INC) -o build/testVal.out

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
	
coverage:
	gcc $(SRC) $(INC) -o build/Bank.out
	gcov -a build/Bank.out

# Create new build folder if not present
$(BUILD):
	mkdir build
