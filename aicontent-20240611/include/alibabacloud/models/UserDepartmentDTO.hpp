// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERDEPARTMENTDTO_HPP_
#define ALIBABACLOUD_MODELS_USERDEPARTMENTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class UserDepartmentDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserDepartmentDTO& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientName, clientName_);
      DARABONBA_PTR_TO_JSON(roleCode, roleCode_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UserDepartmentDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientName, clientName_);
      DARABONBA_PTR_FROM_JSON(roleCode, roleCode_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
    };
    UserDepartmentDTO() = default ;
    UserDepartmentDTO(const UserDepartmentDTO &) = default ;
    UserDepartmentDTO(UserDepartmentDTO &&) = default ;
    UserDepartmentDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserDepartmentDTO() = default ;
    UserDepartmentDTO& operator=(const UserDepartmentDTO &) = default ;
    UserDepartmentDTO& operator=(UserDepartmentDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientName_ == nullptr && this->roleCode_ == nullptr && this->roleName_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline UserDepartmentDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline UserDepartmentDTO& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline UserDepartmentDTO& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UserDepartmentDTO& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<string> roleCode_ {};
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
