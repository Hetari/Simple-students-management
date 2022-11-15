void into_file(const vector<Student> &f, string s_name, int s_id, int s_age, int s_phone, int s_degree[])
{
    ofstream my_file("All_Students.txt", ios_base::app);
    if (my_file)
    {
        my_file << s_name << '*' << s_id << '*' << s_age << '*' << s_phone << '*';
        for (int j = 0; j < 6; j++)
            my_file << s_degree[j] << ' ';
        my_file << endl;
    }
    my_file.close();
}

void add(vector<Student> &a, int size)
{
    a.push_back(Student());
    cout << "name: ";
    cin >> a[size].name;

    cout << "id: ";
    cin >> a[size].id;

    cout << "age : ";
    cin >> a[size].age;

    cout << "phone : ";
    cin >> a[size].phone;

    cout << "degrees : ";
    for (int j = 0; j < 6; j++)
    {
        cin >> a[size].degrees[j];
        while (a[size].degrees[j] < 0 || a[size].degrees[j] > 100)
        {
            cerr << "You can not enter a degree that is less than 0 or bigger than 100!" << endl;
            cout << "Write it again: ";
            cin >> a[size].degrees[j];
        }
    }

    into_file(a, a[size].name, a[size].id, a[size].age, a[size].phone, a[size].degrees);
    cout << endl;
}

void edit_student(vector<Student> &e, int id_copy_2, int size)
{
    int index = find_index(e, id_copy_2);
    cout << "name: ";
    cin >> e[index].name;
    cout << "id: ";
    cin >> e[index].id;
    cout << "age : ";
    cin >> e[index].age;
    cout << "phone : ";
    cin >> e[index].phone;
    cout << "degree : ";
    for (int j = 0; j < 6; j++)
    {
        cin >> e[index].degrees[j];
        while (e[index].degrees[j] < 0 || e[index].degrees[j] > 100)
        {
            cout << "You can not enter a degree that is less than 0 or bigger than 100!" << endl;
            cout << "Write it again: ";
            cin >> e[index].degrees[j];
        }
    }
    cout << endl;

    ofstream ofs;
    ofs.open("All_Students.txt", ofstream::out | ofstream::trunc);
    ofs.close();
    for (int i = 0; i < e.size(); i++)
    {
        ofstream my_file_2("All_Students.txt", ios_base::app);
        if (my_file_2)
        {
            my_file_2 << e[i].name << '*' << e[i].id << '*' << e[i].age << '*' << e[i].phone << '*';
            for (int j = 0; j < 6; j++)
                my_file_2 << e[i].degrees[j] << ' ';
            my_file_2 << endl;
        }
        my_file_2.close();
    }
}
