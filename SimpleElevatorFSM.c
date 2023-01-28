#include <stdio.h>

void reset () {
  printf("\033[0m");
}

void redLight () {
  printf("\033[37;41m");
  printf("  ");
  reset();
}

void yellowLight () {
  printf("\033[37;43m");
  printf("   ");
  reset();
}


void open_door(){
    printf("----------------------------------------\n");
    printf("||                                    ||\n");
    printf("||                                    ||\n");
    printf("||                                    ||\n");
    printf("||                                    ||\n");
    printf("||                                    ||\n");
    printf("||                                    ||\n");
    printf("----------------------------------------\n");

}

void close_door(){
    printf("----------------------------------------\n");
    printf("|                   ||                 |\n");
    printf("|                   ||                 |\n");
    printf("|                   ||                 |\n");
    printf("|                   ||                 |\n");
    printf("|                   ||                 |\n");
    printf("|                   ||                 |\n");
    printf("----------------------------------------\n");

}


void topFloor_doorOpen(){
    reset();
    printf("----------------------------------------\n");
    printf("|  Bottom-Floor    Top-Floor     Door  |\n");
    printf("|                     ");
    yellowLight();
    printf("              |\n");
    open_door();


    
}

void topFloor_doorClosed(){
    reset();
    printf("----------------------------------------\n");
    printf("|  Bottom-Floor    Top-Floor     Door  |\n");
    printf("|                     ");
    yellowLight();
    printf("         ");
    redLight();
    printf("   |\n");
    close_door();
 

    
}

void bottomFloor_doorOpen(){
    reset();
    printf("----------------------------------------\n");
    printf("|  Bottom-Floor    Top-Floor     Door  |\n");
    printf("|      ");
    yellowLight();
    printf("                             |\n");
    open_door();

    
}

void bottomFloor_doorClosed(){
    reset();
    printf("----------------------------------------\n");
    printf("|  Bottom-Floor    Top-Floor     Door  |\n");
    printf("|       ");
    yellowLight();
    printf("                       ");
    redLight();
    printf("   |\n");
    close_door();

    
}

enum State {bottomDoorOpen, bottomDoorClosed, topDoorClosed, topDoorOpen};
enum Input {up = 'u', down = 'd', none = 'n'};

int main(void){
    bottomFloor_doorOpen();
    
    enum State current_state = bottomDoorOpen;
    enum Input input;
    while(1){
         

        printf("Enter input (u for up, d for down, n for none and open the door): ");
        scanf(" %c",&input);

        switch(current_state){
            case bottomDoorOpen:
                if(input == up){
                    current_state = bottomDoorClosed;
                    bottomFloor_doorClosed();
                }
                else if(input == down ||input == none ){
                    current_state = bottomDoorOpen;
                    bottomFloor_doorOpen();

                }
                else{
                    printf("Invalid input\n");
                }

                break;
            
            case bottomDoorClosed:
                if(input == up){
                    current_state = topDoorClosed;
                    topFloor_doorClosed();
                }
                else if(input == down){
                    current_state = bottomDoorClosed;
                    bottomFloor_doorClosed();

                }
                else if(input == none){
                    current_state = bottomDoorOpen;
                    bottomFloor_doorOpen();

                }
                else{
                    printf("Invalid input\n");
                }
                break;
            
            case topDoorClosed:
                if(input == up){
                    current_state = topDoorClosed;
                    topFloor_doorClosed();
                }
                else if(input == none ){
                    current_state = topDoorOpen;
                    topFloor_doorOpen();
                }
                else if(input == down){
                    current_state = bottomDoorClosed;
                    bottomFloor_doorClosed();
                }
                else{
                    printf("Invalid input\n");
                }
                break;

            case topDoorOpen:
                if(input == down){
                    current_state = topDoorClosed;
                    topFloor_doorClosed();
                }
                else if(input == up ||input == none ){
                    current_state = topDoorOpen;
                    topFloor_doorOpen();

                }
                else{
                    printf("Invalid input\n");
                }
                break;
           
        }
   
         
    
            
            
    }
   
    return 0;


}

    
