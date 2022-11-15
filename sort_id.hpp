bool compare(const Student &first, const Student &second)
{
    if (first.id < second.id)
        return true;
    else
        return false;
}
