void print_all(const vector<Student> &b, int size)
{
    cout << "name\t\tid\t\tage\t\tphone\t\tdegrees\n";
    for (int i = 0; i < size; i++)
    {
        cout << b[i].name << "\t\t";
        cout << b[i].id << "\t\t";
        cout << b[i].age << "\t\t";
        cout << b[i].phone << "\t\t";
        for (int j = 0; j < 6; j++)
            cout << b[i].degrees[j] << ' ';
        cout << endl;
    }
}

void select(vector<Student> &d, int id_copy)
{
    cout << "name\t\tid\t\tage\t\tphone\t\tdegrees\n";
    cout << d[find_index(d, id_copy)].name << "\t\t";
    cout << d[find_index(d, id_copy)].id << "\t\t";
    cout << d[find_index(d, id_copy)].age << "\t\t";
    cout << d[find_index(d, id_copy)].phone << "\t\t";
    for (int j = 0; j < 6; j++)
        cout << d[find_index(d, id_copy)].degrees[j] << ' ';
    cout << endl;
}
