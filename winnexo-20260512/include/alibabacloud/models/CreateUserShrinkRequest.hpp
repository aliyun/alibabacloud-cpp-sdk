// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(passwordEncrypted, passwordEncrypted_);
      DARABONBA_PTR_TO_JSON(roleCodes, roleCodesShrink_);
      DARABONBA_PTR_TO_JSON(ssoProvider, ssoProvider_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnAccountId, wnAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(passwordEncrypted, passwordEncrypted_);
      DARABONBA_PTR_FROM_JSON(roleCodes, roleCodesShrink_);
      DARABONBA_PTR_FROM_JSON(ssoProvider, ssoProvider_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnAccountId, wnAccountId_);
    };
    CreateUserShrinkRequest() = default ;
    CreateUserShrinkRequest(const CreateUserShrinkRequest &) = default ;
    CreateUserShrinkRequest(CreateUserShrinkRequest &&) = default ;
    CreateUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserShrinkRequest() = default ;
    CreateUserShrinkRequest& operator=(const CreateUserShrinkRequest &) = default ;
    CreateUserShrinkRequest& operator=(CreateUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->passwordEncrypted_ == nullptr && this->roleCodesShrink_ == nullptr && this->ssoProvider_ == nullptr && this->tenantId_ == nullptr && this->wnAccountId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateUserShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // passwordEncrypted Field Functions 
    bool hasPasswordEncrypted() const { return this->passwordEncrypted_ != nullptr;};
    void deletePasswordEncrypted() { this->passwordEncrypted_ = nullptr;};
    inline string getPasswordEncrypted() const { DARABONBA_PTR_GET_DEFAULT(passwordEncrypted_, "") };
    inline CreateUserShrinkRequest& setPasswordEncrypted(string passwordEncrypted) { DARABONBA_PTR_SET_VALUE(passwordEncrypted_, passwordEncrypted) };


    // roleCodesShrink Field Functions 
    bool hasRoleCodesShrink() const { return this->roleCodesShrink_ != nullptr;};
    void deleteRoleCodesShrink() { this->roleCodesShrink_ = nullptr;};
    inline string getRoleCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(roleCodesShrink_, "") };
    inline CreateUserShrinkRequest& setRoleCodesShrink(string roleCodesShrink) { DARABONBA_PTR_SET_VALUE(roleCodesShrink_, roleCodesShrink) };


    // ssoProvider Field Functions 
    bool hasSsoProvider() const { return this->ssoProvider_ != nullptr;};
    void deleteSsoProvider() { this->ssoProvider_ = nullptr;};
    inline string getSsoProvider() const { DARABONBA_PTR_GET_DEFAULT(ssoProvider_, "") };
    inline CreateUserShrinkRequest& setSsoProvider(string ssoProvider) { DARABONBA_PTR_SET_VALUE(ssoProvider_, ssoProvider) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateUserShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnAccountId Field Functions 
    bool hasWnAccountId() const { return this->wnAccountId_ != nullptr;};
    void deleteWnAccountId() { this->wnAccountId_ = nullptr;};
    inline string getWnAccountId() const { DARABONBA_PTR_GET_DEFAULT(wnAccountId_, "") };
    inline CreateUserShrinkRequest& setWnAccountId(string wnAccountId) { DARABONBA_PTR_SET_VALUE(wnAccountId_, wnAccountId) };


  protected:
    // The cluster name.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The base64-encoded password ciphertext encrypted by using RSA-OAEP-SHA256 (required).
    // 
    // This parameter is required.
    shared_ptr<string> passwordEncrypted_ {};
    // The list of new system role codes (full replacement, must contain at least one role). Valid values: SUPER_ADMIN, SYSTEM_ADMIN, SEMANTIC_ADMIN, SKILL_ADMIN, KB_ADMIN, AGENT_ADMIN, and APPLICATION_USER.
    shared_ptr<string> roleCodesShrink_ {};
    // The SSO provider type. This parameter is optional if the tenant has only one external logon method. This parameter is required if the tenant has multiple external logon methods. Currently, createUser supports BUILD_IN and AGENT_ONE.
    shared_ptr<string> ssoProvider_ {};
    // The ID of the tenant on which the operation takes effect.
    shared_ptr<string> tenantId_ {};
    // The WINNEXO logon account (unique identifier, required).
    // 
    // This parameter is required.
    shared_ptr<string> wnAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
