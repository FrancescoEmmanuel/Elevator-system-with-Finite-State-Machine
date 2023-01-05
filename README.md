# Two floor elevator system finite state machine
This repository is a Finite State Machine for a two floor elevator system that I have made
written in C.

## What is Finite State Machine (FSM)?

An FSM is a computation/mathematical model used to simulate some computer programs and sequential logic.
It has a finite amount of states and can only be in one state at a given time. It can change between states and produce outputs
in response to given inputs. 

## Two floor elevator system

### Description
This system is an elevator system for two floors (only top and bottom floor).
The initial state of the elevator is on the bottom floor with its door opened.

#### Inputs
1. Up button
2. Down button

#### States

There are 4 states to this system:

1. The elevator is on the bottom floor with its door opened - When the up button is pushed,
the door will close and the system will move to state #2. When the down button,none of the buttons, or both of the buttons
are pushed, the system will remain on this state as it is already on the bottom floor.

2. The elevator is on the bottom floor with its door closed - when the up button

