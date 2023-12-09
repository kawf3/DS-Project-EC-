# DS-Project-EC-
CS303 (Fall23)- Extra Credit Project- 
The idea of this project is for when two picky eaters want to cook something with the limited items of food they have. 

When you run the code, you will be asked to input the amount of items for recipe 1 then what the items are (Ex. eggs, cheese, etc...) rate it from high (0), medium (1), and low (2) preference. Then do the same when asked for recipe 2. The program will loop twice. 

I changed the "priority" level to preference level and scheduling will be referred as list in my code. The recipe class uses std::priority_queue for the list member, making it a priority queue. The printList function creates a temporary priority queue for printing, preserving the original list. Which will simulate a multi-level priority queue scheduling system.

My IDE is Visual Studio and I used the "Console App" feature on Visual Studio for my project to use as the GUI. The user types commands into a terminal to operate and navigate the program and in this case the terminal will ask you a question and you will answer then once the program runs it will provide a dataset of numbers, items (food in this case), and level of preference. 
