// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DepartmentRoleCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(departmentRoles, departmentRoles_);
      DARABONBA_PTR_TO_JSON(loginName, loginName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(departmentRoles, departmentRoles_);
      DARABONBA_PTR_FROM_JSON(loginName, loginName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    ModelRouterCreateUserRequest() = default ;
    ModelRouterCreateUserRequest(const ModelRouterCreateUserRequest &) = default ;
    ModelRouterCreateUserRequest(ModelRouterCreateUserRequest &&) = default ;
    ModelRouterCreateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateUserRequest() = default ;
    ModelRouterCreateUserRequest& operator=(const ModelRouterCreateUserRequest &) = default ;
    ModelRouterCreateUserRequest& operator=(ModelRouterCreateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentRoles_ == nullptr
        && this->loginName_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr; };
    // departmentRoles Field Functions 
    bool hasDepartmentRoles() const { return this->departmentRoles_ != nullptr;};
    void deleteDepartmentRoles() { this->departmentRoles_ = nullptr;};
    inline const vector<DepartmentRoleCmd> & getDepartmentRoles() const { DARABONBA_PTR_GET_CONST(departmentRoles_, vector<DepartmentRoleCmd>) };
    inline vector<DepartmentRoleCmd> getDepartmentRoles() { DARABONBA_PTR_GET(departmentRoles_, vector<DepartmentRoleCmd>) };
    inline ModelRouterCreateUserRequest& setDepartmentRoles(const vector<DepartmentRoleCmd> & departmentRoles) { DARABONBA_PTR_SET_VALUE(departmentRoles_, departmentRoles) };
    inline ModelRouterCreateUserRequest& setDepartmentRoles(vector<DepartmentRoleCmd> && departmentRoles) { DARABONBA_PTR_SET_RVALUE(departmentRoles_, departmentRoles) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline ModelRouterCreateUserRequest& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelRouterCreateUserRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ModelRouterCreateUserRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    // The department roles to assign to the user during creation. This parameter is optional.
    shared_ptr<vector<DepartmentRoleCmd>> departmentRoles_ {};
    // The logon name. This parameter is required. The logon name can be the same as the phone number.
    // 
    // This parameter is required.
    shared_ptr<string> loginName_ {};
    // The name. This parameter is required. The value must be 2 to 20 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The phone number. This parameter is required.
    shared_ptr<string> phone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
