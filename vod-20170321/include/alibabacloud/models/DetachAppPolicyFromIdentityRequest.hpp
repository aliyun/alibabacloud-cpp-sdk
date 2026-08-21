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
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->identityName_ == nullptr && this->identityType_ == nullptr && this->policyNames_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DetachAppPolicyFromIdentityRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string getIdentityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline DetachAppPolicyFromIdentityRequest& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline DetachAppPolicyFromIdentityRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline DetachAppPolicyFromIdentityRequest& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


  protected:
    // The application ID. If the policy name is VODAppAdministratorAccess, this parameter is optional. For other policies, this parameter is required.
    // - Value (default): **app-1000000**.
    // - For more information, see [Multi-application](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
    // The identity name.
    // 
    // - If the type is RamUser, specify the Resource Access Management (RAM) user ID.
    // - If the type is RamRole, specify the role name.
    // 
    // This parameter is required.
    shared_ptr<string> identityName_ {};
    // The identity type. Valid values:
    // - **RamUser**: Resource Access Management (RAM) user.
    // - **RamRole**: RAM role.
    // 
    // This parameter is required.
    shared_ptr<string> identityType_ {};
    // The policy names. Separate multiple names with commas (,). Only system policies are supported. Valid values:
    // - **VODAppFullAccess**: permissions to manage and operate all resources in the application.
    // - **VODAppReadOnlyAccess**: read-only permissions for all resources in the application.
    // - **VODAppAdministratorAccess**: application administrator permissions.
    // 
    // This parameter is required.
    shared_ptr<string> policyNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
