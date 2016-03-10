# EnrichAssignments
//C stucture to store the given data


struct person_info
{
  char contact_person_id[20];
  char firstname[20];
  char lastname[20];
  char email[30];
}
struct college_info
{
  char contact_id[20];
  char contact_name[20];
  char street[20];
  char area[20];
  char city[20];
  struct person_info p[100];
}clg[100];
