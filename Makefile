final:compile run

compile:
	@# @echo "Compiling..."
	@gcc main.c matrixLib.c -o main
run:
	@# echo "Running..."
	@./main
clear:
	@rm main
	@# echo "Cleaning up..."
