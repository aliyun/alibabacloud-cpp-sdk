// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLEREVOKECMD_HPP_
#define ALIBABACLOUD_MODELS_ROLEREVOKECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RoleRevokeCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RoleRevokeCmd& obj) { 
      DARABONBA_PTR_TO_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_TO_JSON(authorizerType, authorizerType_);
      DARABONBA_PTR_TO_JSON(roleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, RoleRevokeCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_FROM_JSON(authorizerType, authorizerType_);
      DARABONBA_PTR_FROM_JSON(roleId, roleId_);
    };
    RoleRevokeCmd() = default ;
    RoleRevokeCmd(const RoleRevokeCmd &) = default ;
    RoleRevokeCmd(RoleRevokeCmd &&) = default ;
    RoleRevokeCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RoleRevokeCmd() = default ;
    RoleRevokeCmd& operator=(const RoleRevokeCmd &) = default ;
    RoleRevokeCmd& operator=(RoleRevokeCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizerId_ == nullptr
        && this->authorizerType_ == nullptr && this->roleId_ == nullptr; };
    // authorizerId Field Functions 
    bool hasAuthorizerId() const { return this->authorizerId_ != nullptr;};
    void deleteAuthorizerId() { this->authorizerId_ = nullptr;};
    inline string getAuthorizerId() const { DARABONBA_PTR_GET_DEFAULT(authorizerId_, "") };
    inline RoleRevokeCmd& setAuthorizerId(string authorizerId) { DARABONBA_PTR_SET_VALUE(authorizerId_, authorizerId) };


    // authorizerType Field Functions 
    bool hasAuthorizerType() const { return this->authorizerType_ != nullptr;};
    void deleteAuthorizerType() { this->authorizerType_ = nullptr;};
    inline string getAuthorizerType() const { DARABONBA_PTR_GET_DEFAULT(authorizerType_, "") };
    inline RoleRevokeCmd& setAuthorizerType(string authorizerType) { DARABONBA_PTR_SET_VALUE(authorizerType_, authorizerType) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline RoleRevokeCmd& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authorizerId_ {};
    // This parameter is required.
    shared_ptr<string> authorizerType_ {};
    // This parameter is required.
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
