all: main.exe
	@echo "~~~~~~~~~~~~~~"
	@echo "Build main.exe"
	@echo "~~~~~~~~~~~~~~"

clean:
	@echo "~~~~~~~~~~~~~~"
	@echo " Clean project"
	@echo "~~~~~~~~~~~~~~"
	rm -r main.exe *.o

main.exe: *.o
	@echo "~~~~~~~~~~~~~~"
	@echo "--Build .exe--"
	@echo "~~~~~~~~~~~~~~"
	g++ -o main.exe *.o

*.o: *.cpp
	@echo "~~~~~~~~~~~~~~"
	@echo "---Build .o---"
	@echo "~~~~~~~~~~~~~~"
	g++ -c *.cpp
