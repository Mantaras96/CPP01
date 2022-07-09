/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:37:53 by amantara          #+#    #+#             */
/*   Updated: 2022/07/07 16:53:01 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
using namespace std;

void ft_replace(string content, string s1, string s2) {
    int i;
    int ocurrences;
    string newLine;
    size_t found;
    
    newLine = "";
    ocurrences = 0;
    found = 0;
    i = 0;
    
    cout << "Content:" << content << endl;   
    cout << "length:" << content.length() << endl;   
    while (i < content.length()){
        found = content.find(s1, found + ocurrences);
            if (i == found){
                newLine += s2;
                ocurrences++;
                i = i + s1.length() - 1;
                found = 0;
            } else {
                newLine += content[i];
            }
        i++;
    }
    cout << "Nueva linea:" << newLine << endl;    
}

int main(int argc, char **argv) {

    string file_name;
    string all_content;
    fstream my_file_input;
    fstream my_file_output;

    
    // if (argc < 4 || argc > 4) {
    //     cout << "Error en los parametros" << endl;
    //     return (0);
    // }
    
    // file_name = argv[1];
    file_name = "./test.txt";

    my_file_input.open(file_name, ios::in);
    
    file_name += ".replace";
    cout << file_name << endl;

    my_file_output.open(file_name, ios::out);
    char ch;
    // while(1) {
    //     my_file_input >> ch;
    //     all_content += ch;
    //     if(my_file_input.eof())
    //         break;
    // }

    string line;

    while (getline(my_file_input, line)) {
        ft_replace(line, "perdedores", "a");
    }

    return (0);
}
    