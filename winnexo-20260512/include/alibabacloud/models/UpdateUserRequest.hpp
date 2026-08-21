// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(isActive, isActive_);
      DARABONBA_PTR_TO_JSON(roleCodes, roleCodes_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(isActive, isActive_);
      DARABONBA_PTR_FROM_JSON(roleCodes, roleCodes_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    UpdateUserRequest() = default ;
    UpdateUserRequest(const UpdateUserRequest &) = default ;
    UpdateUserRequest(UpdateUserRequest &&) = default ;
    UpdateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserRequest() = default ;
    UpdateUserRequest& operator=(const UpdateUserRequest &) = default ;
    UpdateUserRequest& operator=(UpdateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->isActive_ == nullptr && this->roleCodes_ == nullptr && this->tenantId_ == nullptr && this->userGroupIds_ == nullptr && this->wnUserId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isActive Field Functions 
    bool hasIsActive() const { return this->isActive_ != nullptr;};
    void deleteIsActive() { this->isActive_ = nullptr;};
    inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
    inline UpdateUserRequest& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


    // roleCodes Field Functions 
    bool hasRoleCodes() const { return this->roleCodes_ != nullptr;};
    void deleteRoleCodes() { this->roleCodes_ = nullptr;};
    inline const vector<string> & getRoleCodes() const { DARABONBA_PTR_GET_CONST(roleCodes_, vector<string>) };
    inline vector<string> getRoleCodes() { DARABONBA_PTR_GET(roleCodes_, vector<string>) };
    inline UpdateUserRequest& setRoleCodes(const vector<string> & roleCodes) { DARABONBA_PTR_SET_VALUE(roleCodes_, roleCodes) };
    inline UpdateUserRequest& setRoleCodes(vector<string> && roleCodes) { DARABONBA_PTR_SET_RVALUE(roleCodes_, roleCodes) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateUserRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateUserRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateUserRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline UpdateUserRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The display name of the user.
    shared_ptr<string> displayName_ {};
    // Specifies whether the account is activated. Valid values:
    //  - **true**: Activated.
    // - **false**: Not activated.
    shared_ptr<bool> isActive_ {};
    // The new list of system role codes (full replacement, must contain at least one role). Valid values: SUPER_ADMIN / SYSTEM_ADMIN / SEMANTIC_ADMIN / SKILL_ADMIN / KB_ADMIN / AGENT_ADMIN / APPLICATION_USER.
    shared_ptr<vector<string>> roleCodes_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
    // The new list of user group IDs (full replacement. If not specified, the value is not modified).
    shared_ptr<vector<string>> userGroupIds_ {};
    // The ID of the target user (WINNEXO platform user ID).
    // 
    // This parameter is required.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
