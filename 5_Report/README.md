# Requirements
  ## Introduction

Basically  automation  in  systems  would  help  reduce  wastage  of  resources  in  various  ways,  one  such  way  for  the 
prevention  of  wastage  of  water  resource  to  control  the  water  tanks  from  overflow.  In  this  automated  world,  the 
handling  of  any  kind  of  devices  with  comfort  is  made  to  be  the  easiest  factor  everywhere.  Considering  this  aspect 
of  comfort  zones  and  the  prevention  of  wastage  of  resources,  a  design  of  an  automated  overflow  control  circuit 
unit  was  proposed.  The  proposal  was  designed  on  the  perspective  of  controlling  the  flow  of  water 
into  the  tanks  automatically. 
  ## Features
1.Shows water level <br />
2.cut off water automatically <br />
3.User friendly.
# SWOT ANALYSIS
  ## Strengths
 1.conservation of water resource <br /> 
 2.Manual effort reduction 
   ## Weakness
 Maintanance is required.  
  ## Opportunities

Program can be changed based on our convenience.
  ## Threats

competitive due to more versions of Products.
# 4W's and 1H
  ## Who
This Product can be used by any consumers because its simple user friendly.
  ## What

It makes water tank fill and cut off water automatically. 
  ## When

When the water level is low the tank fill automatic. 
  ## Where

This sysstem can be used in any place like home,office,park,etc...
  ## How

The system controled by atmega328 which act ass brain.
# Detailed requirements
  ## High level requirements 

| ID | Description | Status |
| ------ | ------ | ------ |
| HLR1 | display level | Implemented |
| HLR2 | flow water when level low | Implemented
| HLR3 | stop water flow when level is reached| Implemented
  ## Low level requirements 

| ID | Description | Status |
| ------ | ------ | ------ |
| LLR1 | if low level switch open before uplevel the water won't flow | Implemented |
| LLR2 | the system works without errors |Implemented

# Design
| High Level Diagram | Low Level Diagram |
| ------------------ | ---------------- |
| ![beh1](https://user-images.githubusercontent.com/94284577/144244702-6e67dd84-6774-41f6-8085-a36290305c10.png) | ![beh2](https://user-images.githubusercontent.com/94284577/144244747-66e86594-00d3-465b-aedc-988879b62570.jpg) |

| High Level Diagram | Low Level Diagram |
| ------------------ | ---------------- |
| ![str1](https://user-images.githubusercontent.com/94284577/144245180-94a8565c-a7e0-46ed-8f23-4c329291ebe1.png) | ![str2](https://user-images.githubusercontent.com/94284577/144245192-79c365ba-cd1e-447e-b4a4-f0d112614875.png) |
 ### Circuit diagram

![Screenshot from 2021-12-01 18-57-15](https://user-images.githubusercontent.com/94284577/144245354-93c4f027-d581-4b74-880b-25d1ef2abc10.png)

 ## Test Plan and Output

## High level test plan

| **Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Status**  |    
|-------------|-----------------|------------|-------------|----------------|------------------|
| H_01 | Display Level Of Water | NA | 0L - 3000L | 700L | Pass
| H_02 | LED Glows when both Switches Open | NA | LED Glows | LED Glows | Pass    |
| H_03 | LED OFF when both Switches Closed| NA | LED OFF|LED OFF| Pass   |

## Low level test plan

| **Test ID** | **Description** | **Exp Input** | **Exp Output** | **Actual Output** |**Status**  |    
|-------------|-----------------|------------|-------------|----------------|------------------|
| L_01 | LED Glows when UCC only open |  NA| LED Glows | LED Glows |Pass |
| L_02 | Level of water varies from 0L - 3000L | NA | varies from 0L - 3000L  | varies from 0L-3000L | Pass

