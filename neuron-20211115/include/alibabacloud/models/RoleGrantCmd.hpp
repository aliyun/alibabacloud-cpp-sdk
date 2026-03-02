// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLEGRANTCMD_HPP_
#define ALIBABACLOUD_MODELS_ROLEGRANTCMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthorizationResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RoleGrantCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RoleGrantCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(authorizationResourceList, authorizationResourceList_);
      DARABONBA_PTR_TO_JSON(roleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, RoleGrantCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(authorizationResourceList, authorizationResourceList_);
      DARABONBA_PTR_FROM_JSON(roleId, roleId_);
    };
    RoleGrantCmd() = default ;
    RoleGrantCmd(const RoleGrantCmd &) = default ;
    RoleGrantCmd(RoleGrantCmd &&) = default ;
    RoleGrantCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RoleGrantCmd() = default ;
    RoleGrantCmd& operator=(const RoleGrantCmd &) = default ;
    RoleGrantCmd& operator=(RoleGrantCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->authorizationResourceList_ == nullptr && this->roleId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline RoleGrantCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // authorizationResourceList Field Functions 
    bool hasAuthorizationResourceList() const { return this->authorizationResourceList_ != nullptr;};
    void deleteAuthorizationResourceList() { this->authorizationResourceList_ = nullptr;};
    inline const vector<AuthorizationResource> & getAuthorizationResourceList() const { DARABONBA_PTR_GET_CONST(authorizationResourceList_, vector<AuthorizationResource>) };
    inline vector<AuthorizationResource> getAuthorizationResourceList() { DARABONBA_PTR_GET(authorizationResourceList_, vector<AuthorizationResource>) };
    inline RoleGrantCmd& setAuthorizationResourceList(const vector<AuthorizationResource> & authorizationResourceList) { DARABONBA_PTR_SET_VALUE(authorizationResourceList_, authorizationResourceList) };
    inline RoleGrantCmd& setAuthorizationResourceList(vector<AuthorizationResource> && authorizationResourceList) { DARABONBA_PTR_SET_RVALUE(authorizationResourceList_, authorizationResourceList) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline RoleGrantCmd& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    shared_ptr<vector<AuthorizationResource>> authorizationResourceList_ {};
    // This parameter is required.
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
