/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:37:53 by amantara          #+#    #+#             */
/*   Updated: 2022/07/02 16:31:42 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
using namespace std;

void ft_replace(string content, string s1, string s2) {
    int i;
    int ocurrences
    string newLine;
    
    ocurrences = 0;
    while (content[i]){
        size_t found = content.find(s1, found + ocurrences);
        if (found != string::npos) {
            if (i == found){
                newLine += s2
                ocurrences++;
                i = i + s1.length();
            } else {
                newLine += content[i]
            }
        }
    }
    
    
}

int main(int argc, char **argv) {

    string file_name;
    string all_content;
    fstream my_file_input;
    fstream my_file_output;

    if (argc < 4 || argc > 4) {
        cout << "Error en los parametros" << endl;
        return (0);
    }
    file_name = argv[1];

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
        cout << line << endl;
        ft_replace(line, argv[2], argv[3]);
    }

    return (0);
}
    