CC = gcc
CFLAGS = -Wall -g
LDFLAGS = 
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin
EXEC = liblcthw

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

all: $(BIN_DIR)/$(EXEC)

$(BIN_DIR)/$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(BIN_DIR)/$(EXEC) $(LDFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)/*.o $(BIN_DIR)/$(EXEC)
