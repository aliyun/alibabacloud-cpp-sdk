// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVILEGEPOPCMD_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVILEGEPOPCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePrivilegePopCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivilegePopCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(roleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivilegePopCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(roleId, roleId_);
    };
    CreatePrivilegePopCmd() = default ;
    CreatePrivilegePopCmd(const CreatePrivilegePopCmd &) = default ;
    CreatePrivilegePopCmd(CreatePrivilegePopCmd &&) = default ;
    CreatePrivilegePopCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivilegePopCmd() = default ;
    CreatePrivilegePopCmd& operator=(const CreatePrivilegePopCmd &) = default ;
    CreatePrivilegePopCmd& operator=(CreatePrivilegePopCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->actions_ == nullptr && this->resource_ == nullptr && this->roleId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreatePrivilegePopCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline string getActions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
    inline CreatePrivilegePopCmd& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreatePrivilegePopCmd& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline CreatePrivilegePopCmd& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> actions_ {};
    shared_ptr<string> resource_ {};
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
