// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTAGENTUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTAGENTUSERSREQUEST_HPP_
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
  class GrantAgentUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantAgentUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(permissions, permissions_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(userIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, GrantAgentUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(userIds, userIds_);
    };
    GrantAgentUsersRequest() = default ;
    GrantAgentUsersRequest(const GrantAgentUsersRequest &) = default ;
    GrantAgentUsersRequest(GrantAgentUsersRequest &&) = default ;
    GrantAgentUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantAgentUsersRequest() = default ;
    GrantAgentUsersRequest& operator=(const GrantAgentUsersRequest &) = default ;
    GrantAgentUsersRequest& operator=(GrantAgentUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireDate_ == nullptr
        && this->operatingObjectName_ == nullptr && this->permissions_ == nullptr && this->tenantId_ == nullptr && this->userGroupIds_ == nullptr && this->userIds_ == nullptr; };
    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline GrantAgentUsersRequest& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline GrantAgentUsersRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
    inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
    inline GrantAgentUsersRequest& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline GrantAgentUsersRequest& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GrantAgentUsersRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline GrantAgentUsersRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline GrantAgentUsersRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline GrantAgentUsersRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline GrantAgentUsersRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The authorization expiration timestamp in milliseconds. If this parameter is not specified, the authorization never expires.
    shared_ptr<int64_t> expireDate_ {};
    // The name of the digital human.
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // The permission items.
    shared_ptr<vector<string>> permissions_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The list of user group IDs.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The list of user IDs to be authorized.
    shared_ptr<vector<string>> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
