// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTAGENTUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTAGENTUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GrantAgentUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantAgentUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(permissions, permissionsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(userIds, userIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GrantAgentUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(permissions, permissionsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(userIds, userIdsShrink_);
    };
    GrantAgentUsersShrinkRequest() = default ;
    GrantAgentUsersShrinkRequest(const GrantAgentUsersShrinkRequest &) = default ;
    GrantAgentUsersShrinkRequest(GrantAgentUsersShrinkRequest &&) = default ;
    GrantAgentUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantAgentUsersShrinkRequest() = default ;
    GrantAgentUsersShrinkRequest& operator=(const GrantAgentUsersShrinkRequest &) = default ;
    GrantAgentUsersShrinkRequest& operator=(GrantAgentUsersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireDate_ == nullptr
        && this->operatingObjectName_ == nullptr && this->permissionsShrink_ == nullptr && this->tenantId_ == nullptr && this->userGroupIdsShrink_ == nullptr && this->userIdsShrink_ == nullptr; };
    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline GrantAgentUsersShrinkRequest& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline GrantAgentUsersShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // permissionsShrink Field Functions 
    bool hasPermissionsShrink() const { return this->permissionsShrink_ != nullptr;};
    void deletePermissionsShrink() { this->permissionsShrink_ = nullptr;};
    inline string getPermissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionsShrink_, "") };
    inline GrantAgentUsersShrinkRequest& setPermissionsShrink(string permissionsShrink) { DARABONBA_PTR_SET_VALUE(permissionsShrink_, permissionsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GrantAgentUsersShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIdsShrink Field Functions 
    bool hasUserGroupIdsShrink() const { return this->userGroupIdsShrink_ != nullptr;};
    void deleteUserGroupIdsShrink() { this->userGroupIdsShrink_ = nullptr;};
    inline string getUserGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userGroupIdsShrink_, "") };
    inline GrantAgentUsersShrinkRequest& setUserGroupIdsShrink(string userGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(userGroupIdsShrink_, userGroupIdsShrink) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string getUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline GrantAgentUsersShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


  protected:
    // 授权截止时间戳（毫秒），不传表示永不过期
    shared_ptr<int64_t> expireDate_ {};
    // 数字员工名称
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // 权限列表：USE（使用权限）和/或 MANAGE（管理权限），不传时默认仅 USE；不得为空列表
    shared_ptr<string> permissionsShrink_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 被授权的用户组 ID 列表（16位 hex 字符串）
    shared_ptr<string> userGroupIdsShrink_ {};
    // 被授权的用户 ID 列表
    shared_ptr<string> userIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
