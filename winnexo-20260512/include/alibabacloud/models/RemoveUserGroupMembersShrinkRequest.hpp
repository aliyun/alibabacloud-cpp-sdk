// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RemoveUserGroupMembersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserGroupMembersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(userIds, userIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserGroupMembersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(userIds, userIdsShrink_);
    };
    RemoveUserGroupMembersShrinkRequest() = default ;
    RemoveUserGroupMembersShrinkRequest(const RemoveUserGroupMembersShrinkRequest &) = default ;
    RemoveUserGroupMembersShrinkRequest(RemoveUserGroupMembersShrinkRequest &&) = default ;
    RemoveUserGroupMembersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserGroupMembersShrinkRequest() = default ;
    RemoveUserGroupMembersShrinkRequest& operator=(const RemoveUserGroupMembersShrinkRequest &) = default ;
    RemoveUserGroupMembersShrinkRequest& operator=(RemoveUserGroupMembersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->tenantId_ == nullptr && this->userGroupId_ == nullptr && this->userIdsShrink_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline RemoveUserGroupMembersShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline RemoveUserGroupMembersShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline RemoveUserGroupMembersShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RemoveUserGroupMembersShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline RemoveUserGroupMembersShrinkRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string getUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline RemoveUserGroupMembersShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The tenant ID. This is a common parameter. You can explicitly pass this parameter in winnexo-cli by using `--tenant-id`.
    shared_ptr<string> tenantId_ {};
    // The ID of the target user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
    // The list of platform user IDs to be removed. You can specify one or more IDs.
    // 
    // This parameter is required.
    shared_ptr<string> userIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
