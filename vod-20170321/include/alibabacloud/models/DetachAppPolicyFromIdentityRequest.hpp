// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHAPPPOLICYFROMIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHAPPPOLICYFROMIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DetachAppPolicyFromIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachAppPolicyFromIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
    };
    friend void from_json(const Darabonba::Json& j, DetachAppPolicyFromIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
    };
    DetachAppPolicyFromIdentityRequest() = default ;
    DetachAppPolicyFromIdentityRequest(const DetachAppPolicyFromIdentityRequest &) = default ;
    DetachAppPolicyFromIdentityRequest(DetachAppPolicyFromIdentityRequest &&) = default ;
    DetachAppPolicyFromIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachAppPolicyFromIdentityRequest() = default ;
    DetachAppPolicyFromIdentityRequest& operator=(const DetachAppPolicyFromIdentityRequest &) = default ;
    DetachAppPolicyFromIdentityRequest& operator=(DetachAppPolicyFromIdentityRequest &&) = default ;
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
    inline DetachAppPolicyFromIdentityRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string identityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline DetachAppPolicyFromIdentityRequest& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string identityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline DetachAppPolicyFromIdentityRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string policyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline DetachAppPolicyFromIdentityRequest& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


  protected:
    // The ID of the application. This parameter is optional if you set PolicyNames to VODAppAdministratorAccess. This parameter is required if you set PolicyNames to a value other than VODAppAdministratorAccess.
    // 
    // *   Default value: **app-1000000**.
    // *   For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the RAM user or the name of the RAM role.
    // 
    // *   Specifies the ID of the RAM user for this parameter if you set IdentityType to RamUser.
    // *   Specifies the name of the RAM role for this parameter if you set IdentityType to RamRole.
    // 
    // This parameter is required.
    std::shared_ptr<string> identityName_ = nullptr;
    // The type of the identity. Valid values:
    // 
    // *   **RamUser**: RAM user
    // *   **RamRole**: RAM role
    // 
    // This parameter is required.
    std::shared_ptr<string> identityType_ = nullptr;
    // The name of the policy. Separate multiple names with commas (,). Only system policies are supported.
    // 
    // *   **VODAppFullAccess**: permissions to manage all resources in an application
    // *   **VODAppReadOnlyAccess**: permissions to read all resources in an application
    // *   **VODAppAdministratorAccess**: permissions of the application administrator
    // 
    // This parameter is required.
    std::shared_ptr<string> policyNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
