// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AuthorizeRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    AuthorizeRoleRequest() = default ;
    AuthorizeRoleRequest(const AuthorizeRoleRequest &) = default ;
    AuthorizeRoleRequest(AuthorizeRoleRequest &&) = default ;
    AuthorizeRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeRoleRequest() = default ;
    AuthorizeRoleRequest& operator=(const AuthorizeRoleRequest &) = default ;
    AuthorizeRoleRequest& operator=(AuthorizeRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleIds_ == nullptr
        && return this->targetUserId_ == nullptr; };
    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string roleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline AuthorizeRoleRequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline AuthorizeRoleRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The ID of the role to be assigned. If you want to assign multiple roles to the specified RAM user, separate the IDs of the roles with semicolons (;). If you leave this parameter empty, the roles assigned to the specified RAM user are revoked.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleIds_ = nullptr;
    // The ID of the RAM user to which you want to assign the roles.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
