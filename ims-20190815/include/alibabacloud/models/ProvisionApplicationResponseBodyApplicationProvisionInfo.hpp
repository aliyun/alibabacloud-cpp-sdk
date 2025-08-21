// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODYAPPLICATIONPROVISIONINFO_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONAPPLICATIONRESPONSEBODYAPPLICATIONPROVISIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ProvisionApplicationResponseBodyApplicationProvisionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionApplicationResponseBodyApplicationProvisionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppPrincipalName, appPrincipalName_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionApplicationResponseBodyApplicationProvisionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppPrincipalName, appPrincipalName_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    ProvisionApplicationResponseBodyApplicationProvisionInfo() = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfo(const ProvisionApplicationResponseBodyApplicationProvisionInfo &) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfo(ProvisionApplicationResponseBodyApplicationProvisionInfo &&) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionApplicationResponseBodyApplicationProvisionInfo() = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfo& operator=(const ProvisionApplicationResponseBodyApplicationProvisionInfo &) = default ;
    ProvisionApplicationResponseBodyApplicationProvisionInfo& operator=(ProvisionApplicationResponseBodyApplicationProvisionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->appId_ != nullptr && this->appName_ != nullptr && this->appPrincipalName_ != nullptr && this->createDate_ != nullptr && this->delegatedScope_ != nullptr
        && this->displayName_ != nullptr && this->tenantId_ != nullptr && this->updateDate_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appPrincipalName Field Functions 
    bool hasAppPrincipalName() const { return this->appPrincipalName_ != nullptr;};
    void deleteAppPrincipalName() { this->appPrincipalName_ = nullptr;};
    inline string appPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(appPrincipalName_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setAppPrincipalName(string appPrincipalName) { DARABONBA_PTR_SET_VALUE(appPrincipalName_, appPrincipalName) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // delegatedScope Field Functions 
    bool hasDelegatedScope() const { return this->delegatedScope_ != nullptr;};
    void deleteDelegatedScope() { this->delegatedScope_ = nullptr;};
    inline const Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope & delegatedScope() const { DARABONBA_PTR_GET_CONST(delegatedScope_, Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope) };
    inline Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope delegatedScope() { DARABONBA_PTR_GET(delegatedScope_, Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope) };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setDelegatedScope(const Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope & delegatedScope) { DARABONBA_PTR_SET_VALUE(delegatedScope_, delegatedScope) };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setDelegatedScope(Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope && delegatedScope) { DARABONBA_PTR_SET_RVALUE(delegatedScope_, delegatedScope) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ProvisionApplicationResponseBodyApplicationProvisionInfo& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The name of the application principal. The value is in the `<app_name>@app.<account_id>.onaliyun.com` format.
    std::shared_ptr<string> appPrincipalName_ = nullptr;
    // The time when the application was installed. The value is a timestamp.
    std::shared_ptr<string> createDate_ = nullptr;
    // The information about the permissions that are granted to the application.
    std::shared_ptr<Models::ProvisionApplicationResponseBodyApplicationProvisionInfoDelegatedScope> delegatedScope_ = nullptr;
    // The display name of the application.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the Alibaba Cloud account for which the application was installed.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The update time. The value is a timestamp.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
