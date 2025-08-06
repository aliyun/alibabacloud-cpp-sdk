// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPPPOLICYTOIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPPPOLICYTOIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AttachAppPolicyToIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachAppPolicyToIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
    };
    friend void from_json(const Darabonba::Json& j, AttachAppPolicyToIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
    };
    AttachAppPolicyToIdentityRequest() = default ;
    AttachAppPolicyToIdentityRequest(const AttachAppPolicyToIdentityRequest &) = default ;
    AttachAppPolicyToIdentityRequest(AttachAppPolicyToIdentityRequest &&) = default ;
    AttachAppPolicyToIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachAppPolicyToIdentityRequest() = default ;
    AttachAppPolicyToIdentityRequest& operator=(const AttachAppPolicyToIdentityRequest &) = default ;
    AttachAppPolicyToIdentityRequest& operator=(AttachAppPolicyToIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->identityName_ != nullptr && this->identityType_ != nullptr && this->policyNames_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AttachAppPolicyToIdentityRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string identityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline AttachAppPolicyToIdentityRequest& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string identityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline AttachAppPolicyToIdentityRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string policyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline AttachAppPolicyToIdentityRequest& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


  protected:
    // The ID of the application. Default value: **app-1000000**. For more information, see [Multi-application service](https://help.aliyun.com/document_detail/113600.html).
    // 
    // > This parameter is optional only if you set the policy name to VODAppAdministratorAccess.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the RAM user or the name of the RAM role.
    // 
    // *   Specify the ID of the RAM user when the IdentityType parameter is set to RamUser.
    // *   Specify the name of the RAM role when the IdentityType parameter is set to RamRole.
    // 
    // This parameter is required.
    std::shared_ptr<string> identityName_ = nullptr;
    // The type of the identity. Valid values:
    // 
    // *   **RamUser**: a RAM user
    // *   **RamRole**: a RAM role
    // 
    // This parameter is required.
    std::shared_ptr<string> identityType_ = nullptr;
    // The name of the policy. Only system policies are supported. Separate multiple policy names with commas (,). Valid values:
    // 
    // *   **VODAppFullAccess**: permissions to manage all resources in an application.
    // *   **VODAppReadOnlyAccess**: permissions to read all resources in an application.
    // *   **VODAppAdministratorAccess**: permissions of the application administrator.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
