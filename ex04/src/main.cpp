/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:37:53 by amantara          #+#    #+#             */
/*   Updated: 2022/07/09 12:01:19 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
using namespace std;

string ft_replace(string content, string s1, string s2) {
    int i;
    int occurrences;
    string newLine;
    size_t found;
    
    newLine = "";
    occurrences = 1;
    found = 0;
    i = 0;
       
    while (i < content.length()){
        found = content.find(s1, i);
            if (i == found){
                newLine += s2;
                i = i + s1.length() - 1;
                found = 0;
            } else {
                newLine += content[i];
            }
        i++;
    }
    return (newLine); 
}

int main(int argc, char **argv) {

    string file_name;
    string all_content;
    string line;
    fstream my_file_input;
    fstream my_file_output;

    
    if (argc < 4 || argc > 4) {
        cout << "Error en los parametros" << endl;
        return (0);
    }
    
    file_name = argv[1];
    my_file_input.open(file_name, ios::in);
    file_name += ".replace";
    my_file_output.open(file_name, ios::out);

    while (getline(my_file_input, line)) {
        my_file_output << ft_replace(line, argv[2], argv[3]) << endl;
    }

    return (0);
}
    