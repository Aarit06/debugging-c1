#include <iostream>

int main () {
    std::string move, player, sticks, follow, hunt, new_house;
    std::cout << "chose a name: ";
    std::cin >> player;
    std::cout << "run from jinbong to win" << std::endl;
    std::cout << "Okay " << player << ", you see a wild jinbong. he doesnt see you yet, you have time to escape" << std::endl;
    std::cout << "Type 'run' to leave" << std::endl << "type 'hide' to hide" << std::endl;
    std::cin >> move;

    if (move != "run") {
        std::cout << "bad choice lmao, jinbong spots you. he is now walking towards you. you keep walking, but you're not fast enough\n" << "you are trying your best but its just not worth it so you do the only reasonable thing, \n" << "lie down and wait for jinbong to approach you. \n" << "im afraid this is the end, " << player << ", see you on the other side \n";
    } else if (move == "run") {
        std::cout << "you see jinbong right behind you, he hasn't noticed you yet, you keep walking to be safe. \n";
    
        std::cout << "you see some wood & sticks along the way. type 'yes' to pick it up, type 'no' to leave it: ";
        std::cin >> sticks;

        if (sticks != "yes") {
            std::cout << "you didnt pick up the sticks, ok ig\n";
        } else if (sticks == "yes") {
            std::cout << "smort\n";
        }
        std::cout << "you look around, jinbong is nowhere to be found. you've lost him for now and may rest for the night, who knows where he might be tmrw\n";
        if (sticks == "yes") {
            std::cout << "you use the sticks and wood you collected earlier to make a temporary shelter. you may rest now\n";
        } else if (sticks == "no") {
            std::cout << "you have no wood to build a shelter so you must sleep in the cold, hoping jinbong doesnt find you.\n";
        }
        std::cout << "you're lucky, he didnt find you. you keep walking\n";
        std::cout << "a long time after walking, you see jinbong again, do you want to follow him?\n";
        std::cin >> follow;
        if (follow == "yes") {
            std::cout << "you are following him but he starts to turn back. ";
            if (sticks == "no") {
                std::cout << "you start to run towards your shelter for the night. as you approach the spot where you slept, it comes back to you. YOU SLEPT IN THE COLD. wish you took the wood now, huh?";
            } else if (sticks == "yes") {
                std::cout << "you manage to run away and reach your shelter in time. you are now hiding in your shelter till the time jinbong goes away. ";
                std::cout << "you have been in here for about 40 minutes and you are getting hungry. do you want to go outside?";
                std::cin >> hunt;
                if (hunt == "yes") {
                    std::cout << "you go out to hunt, you hunt, you get food, and continue to walk in the direction of the wild jinbong. i must warn you though. it is very dangerous to get in contact with a wild jinbong. good luck " << player;
                    std::cout << "its been almost a day of walking, you are tired, do you wanna setup another house??";
                    std::cin >> new_house;
                    //if ()
                }
            }
        }
    }

}