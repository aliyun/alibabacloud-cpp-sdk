// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINFORESPONSEBODYAPPLICATIONPROVISIONINFO_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINFORESPONSEBODYAPPLICATIONPROVISIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo() = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo(const GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo &) = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo(GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo &&) = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo() = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& operator=(const GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo &) = default ;
    GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& operator=(GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->appId_ != nullptr && this->appName_ != nullptr && this->createDate_ != nullptr && this->delegatedScope_ != nullptr && this->displayName_ != nullptr
        && this->updateDate_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // delegatedScope Field Functions 
    bool hasDelegatedScope() const { return this->delegatedScope_ != nullptr;};
    void deleteDelegatedScope() { this->delegatedScope_ = nullptr;};
    inline const Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope & delegatedScope() const { DARABONBA_PTR_GET_CONST(delegatedScope_, Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope) };
    inline Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope delegatedScope() { DARABONBA_PTR_GET(delegatedScope_, Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope) };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setDelegatedScope(const Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope & delegatedScope) { DARABONBA_PTR_SET_VALUE(delegatedScope_, delegatedScope) };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setDelegatedScope(Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope && delegatedScope) { DARABONBA_PTR_SET_RVALUE(delegatedScope_, delegatedScope) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetApplicationProvisionInfoResponseBodyApplicationProvisionInfo& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the application was installed. The value is a timestamp.
    std::shared_ptr<string> createDate_ = nullptr;
    // The information about the scopes of permissions that are granted to the application.
    std::shared_ptr<Models::GetApplicationProvisionInfoResponseBodyApplicationProvisionInfoDelegatedScope> delegatedScope_ = nullptr;
    // The display name of the application.
    std::shared_ptr<string> displayName_ = nullptr;
    // The update time. The value is a timestamp.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
