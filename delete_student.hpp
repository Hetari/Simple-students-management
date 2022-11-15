// StackOverFlow
int find_index(vector<Student> &v, int ident)
{
    auto it = find_if(v.begin(), v.end(), [ident](const Student &a)
                      { return a.id == ident; });
    if (it == v.end())
        return -1; // or throw, depending on requirements
    else
        return it - v.begin();
}
// StackOverFlow

void dele(vector<Student> &c, int id_2)
{
    c.erase(c.begin() + find_index(c, id_2));
// ============================================================================
    ofstream ofs;
    ofs.open("All_Students.txt", ofstream::out | ofstream::trunc);
    ofs.close();

    for (int i = 0; i < c.size(); i++)
    {
        ofstream my_file_3("All_Students.txt", ios_base::app);
        if (my_file_3)
        {
            my_file_3 << c[i].name << '*' << c[i].id << '*' << c[i].age << '*' << c[i].phone << '*';
            for (int j = 0; j < 6; j++)
                my_file_3 << c[i].degrees[j] << ' ';
            my_file_3 << endl;
        }
        my_file_3.close();
    }
}

// bool find_id(vector<Student> &vec, int s_id)
// {
//     for (auto member : vec)
//     {
//         auto it = std::find_if(vec.begin(), vec.end(), [s_id](Student &s)
//                                { return s_id == s.id; });
//         if (vec.end() != it)
//             return true;
//     }
//     return false;
// }
