#!/bin/bash

#programme de gestion de l'allumage de led a partir du port serie
#a,z,d,e,q,s,d,m
cu -l /dev/ttyACMO -s 9600

	clear
	printf "========================================\n"
	printf "= *      *****	***    	   	       =\n"
	printf "= *  	 *	*  *       	       =\n"
	printf "= * 	 *****  *   *      	       =\n"
	printf "= *      * 	*  *       	       =\n"
	printf "= *****  ***** 	***    	       	       =\n"
	printf "========================================\n"
	read choix
	
