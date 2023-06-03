### Description

- This code is being developed in ROS1 Noetic
- It is part of the projects developed by the research group Optimization and Control of Distributed Systems
- Working with Navio2, Raspberry pi 4 and Ardupilot
- The main goal is to establish a communication bridge that enables the retrieval and transmission of information to Navio2, using mavros.

# ASV_Loyola_US_bridge_Navio2

![](https://www.uloyola.es/templates/v6/images/isologo_loyola_principal.svg)

# Package

## asv_bridge

This package includes the nodes in charge of the communication between the navio2 and the application in ros2 that will be executed in an external cpu.

## asv_bridge_interfaces

This package includes the messages, services and personalized actions for the execution of the different control algorithms, message declarations should not be included in the other nodes

## asv_bridge_bringup

This package includes the launchers used for tests or high-level executions, it is important to review the dependencies before including the execution of nodes.