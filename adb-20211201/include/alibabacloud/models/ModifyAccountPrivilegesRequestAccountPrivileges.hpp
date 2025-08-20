// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUESTACCOUNTPRIVILEGES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUESTACCOUNTPRIVILEGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAccountPrivilegesRequestAccountPrivileges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegesRequestAccountPrivileges& obj) { 
      DARABONBA_PTR_TO_JSON(PrivilegeObject, privilegeObject_);
      DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_TO_JSON(Privileges, privileges_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegesRequestAccountPrivileges& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivilegeObject, privilegeObject_);
      DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
      DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
    };
    ModifyAccountPrivilegesRequestAccountPrivileges() = default ;
    ModifyAccountPrivilegesRequestAccountPrivileges(const ModifyAccountPrivilegesRequestAccountPrivileges &) = default ;
    ModifyAccountPrivilegesRequestAccountPrivileges(ModifyAccountPrivilegesRequestAccountPrivileges &&) = default ;
    ModifyAccountPrivilegesRequestAccountPrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegesRequestAccountPrivileges() = default ;
    ModifyAccountPrivilegesRequestAccountPrivileges& operator=(const ModifyAccountPrivilegesRequestAccountPrivileges &) = default ;
    ModifyAccountPrivilegesRequestAccountPrivileges& operator=(ModifyAccountPrivilegesRequestAccountPrivileges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privilegeObject_ != nullptr
        && this->privilegeType_ != nullptr && this->privileges_ != nullptr; };
    // privilegeObject Field Functions 
    bool hasPrivilegeObject() const { return this->privilegeObject_ != nullptr;};
    void deletePrivilegeObject() { this->privilegeObject_ = nullptr;};
    inline const Models::ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject & privilegeObject() const { DARABONBA_PTR_GET_CONST(privilegeObject_, Models::ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject) };
    inline Models::ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject privilegeObject() { DARABONBA_PTR_GET(privilegeObject_, Models::ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject) };
    inline ModifyAccountPrivilegesRequestAccountPrivileges& setPrivilegeObject(const Models::ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject & privilegeObject) { DARABONBA_PTR_SET_VALUE(privilegeObject_, privilegeObject) };
    inline ModifyAccountPrivilegesRequestAccountPrivileges& setPrivilegeObject(Models::ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject && privilegeObject) { DARABONBA_PTR_SET_RVALUE(privilegeObject_, privilegeObject) };


    // privilegeType Field Functions 
    bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
    void deletePrivilegeType() { this->privilegeType_ = nullptr;};
    inline string privilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
    inline ModifyAccountPrivilegesRequestAccountPrivileges& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const vector<string> & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
    inline vector<string> privileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
    inline ModifyAccountPrivilegesRequestAccountPrivileges& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline ModifyAccountPrivilegesRequestAccountPrivileges& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


  protected:
    // The objects on which you want to grant permissions, including databases, tables, and columns.
    std::shared_ptr<Models::ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject> privilegeObject_ = nullptr;
    // The permission level that you want to assign to the database account. You can call the `DescribeEnabledPrivileges` operation to query the permission level that can be assigned to the database account.
    std::shared_ptr<string> privilegeType_ = nullptr;
    // The permissions that you want to grant to the database account.
    std::shared_ptr<vector<string>> privileges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
