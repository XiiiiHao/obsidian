# Virtualization
## The abstraction : The Process
### Definition
A abstraction provided by the OS of a running program. Simply it is just a running program.
**Machine State:**
* memory
* registers; such as PC
* I/O information
### Process API
* Create
* Destroy
* Wait
* Miscellaneous Control; such as suspend and resume
* Status
### Process Creation
1. The OS loads the code and static data into memory, into the address space.
2. Allocate memory for the stack.
3. Do some initialization work about the I/O.
4. Just run main(). Jump to the main() routine,transfer the control of the CPU to the newly created process.
### Process States
Different events (e.g. ,getting scheduled or descheduled ,or waiting for an I/O to complete) transition a process from one of these to the other.
* Running
* Ready
* Blocked
* others ,like zombie state,initial state
### Data Structures
Process list