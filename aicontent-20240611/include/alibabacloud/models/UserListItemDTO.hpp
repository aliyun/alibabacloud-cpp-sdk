// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERLISTITEMDTO_HPP_
#define ALIBABACLOUD_MODELS_USERLISTITEMDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserDepartmentDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class UserListItemDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserListItemDTO& obj) { 
      DARABONBA_PTR_TO_JSON(departments, departments_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(loginName, loginName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, UserListItemDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(departments, departments_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(loginName, loginName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    UserListItemDTO() = default ;
    UserListItemDTO(const UserListItemDTO &) = default ;
    UserListItemDTO(UserListItemDTO &&) = default ;
    UserListItemDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserListItemDTO() = default ;
    UserListItemDTO& operator=(const UserListItemDTO &) = default ;
    UserListItemDTO& operator=(UserListItemDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departments_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->loginName_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr; };
    // departments Field Functions 
    bool hasDepartments() const { return this->departments_ != nullptr;};
    void deleteDepartments() { this->departments_ = nullptr;};
    inline const vector<UserDepartmentDTO> & getDepartments() const { DARABONBA_PTR_GET_CONST(departments_, vector<UserDepartmentDTO>) };
    inline vector<UserDepartmentDTO> getDepartments() { DARABONBA_PTR_GET(departments_, vector<UserDepartmentDTO>) };
    inline UserListItemDTO& setDepartments(const vector<UserDepartmentDTO> & departments) { DARABONBA_PTR_SET_VALUE(departments_, departments) };
    inline UserListItemDTO& setDepartments(vector<UserDepartmentDTO> && departments) { DARABONBA_PTR_SET_RVALUE(departments_, departments) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline UserListItemDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UserListItemDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline UserListItemDTO& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UserListItemDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline UserListItemDTO& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    shared_ptr<vector<UserDepartmentDTO>> departments_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> loginName_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> phone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
