/* 
 * File:   main.cpp
 * Author: Owner
 *
 * Created on March 31, 2015, 11:43 AM
 */

#include<iostream>
#include<fstream>
#include<string.h>
#include <stdlib.h>

//Functions

//Global Variables

using namespace std;

/*
 * 
 */

//Global variables
int PC = 0x0000;
int instruct_count = 0;

int main() {
    int clock = 0;
    while(PC<instruct_count){
        if(clock = 0){
            fetch();
        }
        
        clock++;
        
        if(clock== 1){
            decode();
        }
        
        clock++;
        
        if(clock== 2){
            execute();
        }
        
        if(clock== 3){
            memAccess();
        }
        
        if(clock== 4){
            writeBack();
        }
        
        if(clock > 4){
            fetch();
            decode();
            execute();
            memAccess();
            writeBack();
        }
    }
    return 0;
}

void fetch(){
    
}

void decode(){
    
}

void execute(){
    if(/*mem.sig -> jump = 1*/)
        J_instruct(mem.opCode, mem.address);
    else{
        if(mem.sig->ALUSrc = 0){
            R_instruct(mem.opCode, rs, rt);
        }else if(mem.sig-> ALUSrc = 1){
            I_instruct(mem.opCode, rs, rt, mem.address);
        }
    }
}

void memAccess(){
    
}

void writeBack(){
    
}

void R_instruct(int OpCode, int rs, int rt){
    int rd;
    //R instruction
    switch(/*some signal variable->ALUOp*/)
    {
        case 1: //ADD
            rd = rs + rt;
            break;
        case 2: // sub
            rd = rs - rt;
            break;
        case 3: //and
            rd = (rs & 0xFFFF) & (rt & 0xFFFF);
            break;
        case 4: //or
            rd = (rs & 0xFFFF) | (rt & 0xFFFF);
            break;
        case 5: //not
            rd = ~(rd & 0xFFFF);
            break;
        case 6: //xor
            rd = (rs & 0xFFFF) ^ (rt & 0xFFFF);
            break;
    }
}

void J_instruct(int OpCode, int address){
    
}

void I_instruct(int OpCode, int rs, int rt, int address){
    
}


