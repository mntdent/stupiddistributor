builtmain: ./main/main.c
	mkdir ./builtmain
	gcc ./main/*.c ./main/*/*.c -o ./builtmain/main
clean:
	rm -rf ./builtmain
