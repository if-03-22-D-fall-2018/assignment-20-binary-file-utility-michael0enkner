init:
	g++ -c -Wall -g init.cpp
	g++ init.o -o init
	./init

new_student:
	g++ -c -Wall -g new_student.cpp
	g++ new_student.o -o new_student
	./new_student

list_all_students:
	g++ -c -Wall -g list_all_students.cpp
	g++ list_all_students.o -o list_all_students
	./list_all_students

clean:
	rm -rf *o init add_student readfile
