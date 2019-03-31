/*
File:         tide_analyzer.h
Purpose:      Contains prototypes
*/

#pragma once

FILE * open_file(FILE * file_pointer, char * fileName, char * mode);
void process_file(double array_to_populate[], FILE * pointer_to_data_file);