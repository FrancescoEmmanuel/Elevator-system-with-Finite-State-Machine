# Two floor elevator system finite state machine
In this repository, you can find a Finite State Machine for a two floor elevator system that I have made,
written in C.

## What is a Finite State Machine (FSM)?

An FSM is a computation/mathematical model used to simulate some computer programs and sequential logic.
It has a finite amount of states and can only be in one state at a given time. It can change between states and produce outputs
in response to given inputs. 

## Description of the system

This system is an elevator system for two floors (only has a top and bottom floor).
<br><br>
The initial state of this FSM is when the elevator is on the bottom floor with its door opened.


### Inputs
1. Up button
2. Down button

### The following are a set of rules that this system follows:
1. When none of the buttons are pushed - the elevator door will open.
2. When both of the buttons are pushed - nothing will happen.
3. When the elevator is on the top floor and the up button is pushed - nothing will happen.
4. When the elevator is on the bottom floor and the down button is pushed - nothing will happen.
5. The elevator can only move between floors when its door is closed.

### States

There are 4 states to this system:

1. **The elevator is on the bottom floor with its door opened.**
When the up button is pushed - the door will close and the system will move to state #2.
When the down button none of the buttons, or both of the buttons
are pushed - the system will remain at this state.

2. **The elevator is on the bottom floor with its door closed.** 
if the up button is still being pushed - the elevator will
proceed to move to the top floor and the system will move to state #3. When none of the buttons are pushed - the elevator door will open
and the system goes back to state #1. When the down button or both of the buttons are pushed - the system will 
remain at this state.

3. **The elevator is on the top floor with its door closed.**
When the down button is pushed - the elevator will proceed to move
to the bottom floor and the system will move to state # 2. When none of the buttons are pushed -
 the elevator door will open and the system will move to state # 4. When the up button or both the buttons are pushed - 
 the system will remain at this state.

4. **The elevator is on the top floor with its door opened.**
When the down button is pushed - the elevator door will close and the system will move to state #3.
When the up button, none of the buttons, or both of the buttons are pushed - the system will remain at this state.

### Visualization of the FSM

The following diagram is a visualization of this FSM:



