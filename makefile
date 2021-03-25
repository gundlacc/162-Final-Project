
FinalProject: main.o CoachCar.o DiningCar.o Engine.o Item.o LoungeCar.o ObservationCar.o Player.o SleepCar.o Space.o Train.o validator.o
	g++ -std=c++0x main.o CoachCar.o DiningCar.o Engine.o Item.o LoungeCar.o ObservationCar.o Player.o SleepCar.o Space.o Train.o validator.o -o FinalProject
	
main.o: main.cpp
	g++ -std=c++0x -c main.cpp

CoachCar.o: CoachCar.cpp
	g++ -std=c++0x -c CoachCar.cpp
	
DiningCar.o: DiningCar.cpp
	g++ -std=c++0x -c DiningCar.cpp
	
Engine.o: Engine.cpp
	g++ -std=c++0x -c Engine.cpp
	
Item.o: Item.cpp
	g++ -std=c++0x -c Item.cpp
	
LoungeCar.o: LoungeCar.cpp
	g++ -std=c++0x -c LoungeCar.cpp
	
ObservationCar.o: ObservationCar.cpp
	g++ -std=c++0x -c ObservationCar.cpp
	
Player.o: Player.cpp
	g++ -std=c++0x -c Player.cpp
	
SleepCar.o: SleepCar.cpp
	g++ -std=c++0x -c SleepCar.cpp
	
Space.o: Space.cpp
	g++ -std=c++0x -c Space.cpp
	
Train.o: Train.cpp
	g++ -std=c++0x -c Train.cpp

validator.o: validator.cpp
	g++ -std=c++0x -c validator.cpp

clean:
	rm *.o FinalProject