int student_count = 21;
int female_student_count = 3;

int male_student_count = student_count - female_student_count;
double ratio = female_student_count / static_cast<double>(male_student_count);
std::cout << "The Ratio of women to men is " << ratio << endl;
