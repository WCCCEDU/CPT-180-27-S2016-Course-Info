// Program constants
const std::string INIT = "init";
const std::string EDIT = "edit";

// Inital user inputs
std::string mode = "init";
std::string edit_field = "name";

if(mode == INIT){
  std::string name = "";
  std::cin >> name;
  std::cout << name;

  std::string pet_name = "";
  std::cin >> pet_name = "";
  std::cout << pet_name;
}else if(mode == EDIT){
  if(edit_field == "name"){
    std::string name = "";
    std::cin >> name;
    std::cout << name;
  }else if(edit_field == "pet_name"){
    std::string pet_name = "";
    std::cin >> pet_name = "";
    std::cout << pet_name;
  }
}
