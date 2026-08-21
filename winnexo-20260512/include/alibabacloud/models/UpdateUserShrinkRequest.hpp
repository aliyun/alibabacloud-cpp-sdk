// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(isActive, isActive_);
      DARABONBA_PTR_TO_JSON(roleCodes, roleCodesShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(isActive, isActive_);
      DARABONBA_PTR_FROM_JSON(roleCodes, roleCodesShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    UpdateUserShrinkRequest() = default ;
    UpdateUserShrinkRequest(const UpdateUserShrinkRequest &) = default ;
    UpdateUserShrinkRequest(UpdateUserShrinkRequest &&) = default ;
    UpdateUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserShrinkRequest() = default ;
    UpdateUserShrinkRequest& operator=(const UpdateUserShrinkRequest &) = default ;
    UpdateUserShrinkRequest& operator=(UpdateUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->isActive_ == nullptr && this->roleCodesShrink_ == nullptr && this->tenantId_ == nullptr && this->userGroupIdsShrink_ == nullptr && this->wnUserId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateUserShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline UpdateUserShrinkRequest& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


    // roleCodesShrink Field Functions 
    bool hasRoleCodesShrink() const { return this->roleCodesShrink_ != nullptr;};
    void deleteRoleCodesShrink() { this->roleCodesShrink_ = nullptr;};
    inline string getRoleCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(roleCodesShrink_, "") };
    inline UpdateUserShrinkRequest& setRoleCodesShrink(string roleCodesShrink) { DARABONBA_PTR_SET_VALUE(roleCodesShrink_, roleCodesShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateUserShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIdsShrink Field Functions 
    bool hasUserGroupIdsShrink() const { return this->userGroupIdsShrink_ != nullptr;};
    void deleteUserGroupIdsShrink() { this->userGroupIdsShrink_ = nullptr;};
    inline string getUserGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userGroupIdsShrink_, "") };
    inline UpdateUserShrinkRequest& setUserGroupIdsShrink(string userGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(userGroupIdsShrink_, userGroupIdsShrink) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline UpdateUserShrinkRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The display name of the user.
    shared_ptr<string> displayName_ {};
    // Specifies whether the account is activated. Valid values:
    //  - **true**: Activated.
    // - **false**: Not activated.
    shared_ptr<bool> isActive_ {};
    // The new list of system role codes (full replacement, must contain at least one role). Valid values: SUPER_ADMIN / SYSTEM_ADMIN / SEMANTIC_ADMIN / SKILL_ADMIN / KB_ADMIN / AGENT_ADMIN / APPLICATION_USER.
    shared_ptr<string> roleCodesShrink_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
    // The new list of user group IDs (full replacement. If not specified, the value is not modified).
    shared_ptr<string> userGroupIdsShrink_ {};
    // The ID of the target user (WINNEXO platform user ID).
    // 
    // This parameter is required.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
