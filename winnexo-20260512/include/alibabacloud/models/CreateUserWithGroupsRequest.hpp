// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERWITHGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERWITHGROUPSREQUEST_HPP_
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
  class CreateUserWithGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserWithGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(passwordEncrypted, passwordEncrypted_);
      DARABONBA_PTR_TO_JSON(roleCodes, roleCodes_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(wnAccountId, wnAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserWithGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(passwordEncrypted, passwordEncrypted_);
      DARABONBA_PTR_FROM_JSON(roleCodes, roleCodes_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(wnAccountId, wnAccountId_);
    };
    CreateUserWithGroupsRequest() = default ;
    CreateUserWithGroupsRequest(const CreateUserWithGroupsRequest &) = default ;
    CreateUserWithGroupsRequest(CreateUserWithGroupsRequest &&) = default ;
    CreateUserWithGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserWithGroupsRequest() = default ;
    CreateUserWithGroupsRequest& operator=(const CreateUserWithGroupsRequest &) = default ;
    CreateUserWithGroupsRequest& operator=(CreateUserWithGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->passwordEncrypted_ == nullptr && this->roleCodes_ == nullptr && this->tenantId_ == nullptr && this->userGroupIds_ == nullptr && this->wnAccountId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateUserWithGroupsRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // passwordEncrypted Field Functions 
    bool hasPasswordEncrypted() const { return this->passwordEncrypted_ != nullptr;};
    void deletePasswordEncrypted() { this->passwordEncrypted_ = nullptr;};
    inline string getPasswordEncrypted() const { DARABONBA_PTR_GET_DEFAULT(passwordEncrypted_, "") };
    inline CreateUserWithGroupsRequest& setPasswordEncrypted(string passwordEncrypted) { DARABONBA_PTR_SET_VALUE(passwordEncrypted_, passwordEncrypted) };


    // roleCodes Field Functions 
    bool hasRoleCodes() const { return this->roleCodes_ != nullptr;};
    void deleteRoleCodes() { this->roleCodes_ = nullptr;};
    inline const vector<string> & getRoleCodes() const { DARABONBA_PTR_GET_CONST(roleCodes_, vector<string>) };
    inline vector<string> getRoleCodes() { DARABONBA_PTR_GET(roleCodes_, vector<string>) };
    inline CreateUserWithGroupsRequest& setRoleCodes(const vector<string> & roleCodes) { DARABONBA_PTR_SET_VALUE(roleCodes_, roleCodes) };
    inline CreateUserWithGroupsRequest& setRoleCodes(vector<string> && roleCodes) { DARABONBA_PTR_SET_RVALUE(roleCodes_, roleCodes) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateUserWithGroupsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateUserWithGroupsRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateUserWithGroupsRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // wnAccountId Field Functions 
    bool hasWnAccountId() const { return this->wnAccountId_ != nullptr;};
    void deleteWnAccountId() { this->wnAccountId_ = nullptr;};
    inline string getWnAccountId() const { DARABONBA_PTR_GET_DEFAULT(wnAccountId_, "") };
    inline CreateUserWithGroupsRequest& setWnAccountId(string wnAccountId) { DARABONBA_PTR_SET_VALUE(wnAccountId_, wnAccountId) };


  protected:
    // The display name of the user. The name must be unique within the tenant and cannot exceed 100 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The Base64-encoded password ciphertext encrypted by using the RSA-OAEP-SHA256 algorithm.
    // 
    // This parameter is required.
    shared_ptr<string> passwordEncrypted_ {};
    // The list of initial system role codes. If this parameter is not specified, the `APPLICATION_USER` role is assigned by default.
    shared_ptr<vector<string>> roleCodes_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass this parameter explicitly by using `--tenant-id`.
    shared_ptr<string> tenantId_ {};
    // The list of initial user group IDs. A maximum of 100 user group IDs can be specified. All user groups must belong to the current tenant.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The WINNEXO logon account. This parameter is a unique identifier and cannot be empty.
    // 
    // This parameter is required.
    shared_ptr<string> wnAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
