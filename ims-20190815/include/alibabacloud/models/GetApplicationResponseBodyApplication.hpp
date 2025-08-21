// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyApplicationDelegatedScope.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyApplicationRedirectUris.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(IsMultiTenant, isMultiTenant_);
      DARABONBA_PTR_TO_JSON(ProtocolVersion, protocolVersion_);
      DARABONBA_PTR_TO_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_TO_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_TO_JSON(SecretRequired, secretRequired_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(IsMultiTenant, isMultiTenant_);
      DARABONBA_PTR_FROM_JSON(ProtocolVersion, protocolVersion_);
      DARABONBA_PTR_FROM_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_FROM_JSON(SecretRequired, secretRequired_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication(GetApplicationResponseBodyApplication &&) = default ;
    GetApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication& operator=(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication& operator=(GetApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenValidity_ != nullptr
        && this->accountId_ != nullptr && this->appId_ != nullptr && this->appName_ != nullptr && this->appType_ != nullptr && this->createDate_ != nullptr
        && this->delegatedScope_ != nullptr && this->displayName_ != nullptr && this->isMultiTenant_ != nullptr && this->protocolVersion_ != nullptr && this->redirectUris_ != nullptr
        && this->refreshTokenValidity_ != nullptr && this->secretRequired_ != nullptr && this->updateDate_ != nullptr; };
    // accessTokenValidity Field Functions 
    bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
    void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
    inline int32_t accessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, 0) };
    inline GetApplicationResponseBodyApplication& setAccessTokenValidity(int32_t accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetApplicationResponseBodyApplication& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetApplicationResponseBodyApplication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApplicationResponseBodyApplication& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetApplicationResponseBodyApplication& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetApplicationResponseBodyApplication& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // delegatedScope Field Functions 
    bool hasDelegatedScope() const { return this->delegatedScope_ != nullptr;};
    void deleteDelegatedScope() { this->delegatedScope_ = nullptr;};
    inline const Models::GetApplicationResponseBodyApplicationDelegatedScope & delegatedScope() const { DARABONBA_PTR_GET_CONST(delegatedScope_, Models::GetApplicationResponseBodyApplicationDelegatedScope) };
    inline Models::GetApplicationResponseBodyApplicationDelegatedScope delegatedScope() { DARABONBA_PTR_GET(delegatedScope_, Models::GetApplicationResponseBodyApplicationDelegatedScope) };
    inline GetApplicationResponseBodyApplication& setDelegatedScope(const Models::GetApplicationResponseBodyApplicationDelegatedScope & delegatedScope) { DARABONBA_PTR_SET_VALUE(delegatedScope_, delegatedScope) };
    inline GetApplicationResponseBodyApplication& setDelegatedScope(Models::GetApplicationResponseBodyApplicationDelegatedScope && delegatedScope) { DARABONBA_PTR_SET_RVALUE(delegatedScope_, delegatedScope) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetApplicationResponseBodyApplication& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isMultiTenant Field Functions 
    bool hasIsMultiTenant() const { return this->isMultiTenant_ != nullptr;};
    void deleteIsMultiTenant() { this->isMultiTenant_ = nullptr;};
    inline bool isMultiTenant() const { DARABONBA_PTR_GET_DEFAULT(isMultiTenant_, false) };
    inline GetApplicationResponseBodyApplication& setIsMultiTenant(bool isMultiTenant) { DARABONBA_PTR_SET_VALUE(isMultiTenant_, isMultiTenant) };


    // protocolVersion Field Functions 
    bool hasProtocolVersion() const { return this->protocolVersion_ != nullptr;};
    void deleteProtocolVersion() { this->protocolVersion_ = nullptr;};
    inline string protocolVersion() const { DARABONBA_PTR_GET_DEFAULT(protocolVersion_, "") };
    inline GetApplicationResponseBodyApplication& setProtocolVersion(string protocolVersion) { DARABONBA_PTR_SET_VALUE(protocolVersion_, protocolVersion) };


    // redirectUris Field Functions 
    bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
    void deleteRedirectUris() { this->redirectUris_ = nullptr;};
    inline const Models::GetApplicationResponseBodyApplicationRedirectUris & redirectUris() const { DARABONBA_PTR_GET_CONST(redirectUris_, Models::GetApplicationResponseBodyApplicationRedirectUris) };
    inline Models::GetApplicationResponseBodyApplicationRedirectUris redirectUris() { DARABONBA_PTR_GET(redirectUris_, Models::GetApplicationResponseBodyApplicationRedirectUris) };
    inline GetApplicationResponseBodyApplication& setRedirectUris(const Models::GetApplicationResponseBodyApplicationRedirectUris & redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };
    inline GetApplicationResponseBodyApplication& setRedirectUris(Models::GetApplicationResponseBodyApplicationRedirectUris && redirectUris) { DARABONBA_PTR_SET_RVALUE(redirectUris_, redirectUris) };


    // refreshTokenValidity Field Functions 
    bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
    void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
    inline int32_t refreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, 0) };
    inline GetApplicationResponseBodyApplication& setRefreshTokenValidity(int32_t refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


    // secretRequired Field Functions 
    bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
    void deleteSecretRequired() { this->secretRequired_ = nullptr;};
    inline bool secretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
    inline GetApplicationResponseBodyApplication& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetApplicationResponseBodyApplication& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The validity period of the access token. Unit: seconds.
    std::shared_ptr<int32_t> accessTokenValidity_ = nullptr;
    // The ID of the Alibaba Cloud account to which the application belongs.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   WebApp: a web application.
    // *   NativeApp: a native application that runs on an operating system, such as a desktop or mobile operating system.
    // *   ServerApp: an application that can access Alibaba Cloud services without the need for user logon. Only applications that synchronize user information based on the System for Cross-domain Identity Management (SCIM) protocol are supported.
    std::shared_ptr<string> appType_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createDate_ = nullptr;
    // The information about the permissions that are granted on the application.
    std::shared_ptr<Models::GetApplicationResponseBodyApplicationDelegatedScope> delegatedScope_ = nullptr;
    // The display name of the application.
    std::shared_ptr<string> displayName_ = nullptr;
    // Indicates whether the application can be installed by using other Alibaba Cloud accounts.
    std::shared_ptr<bool> isMultiTenant_ = nullptr;
    std::shared_ptr<string> protocolVersion_ = nullptr;
    // The callback URL.
    std::shared_ptr<Models::GetApplicationResponseBodyApplicationRedirectUris> redirectUris_ = nullptr;
    // The validity period of the refresh token. Unit: seconds.
    std::shared_ptr<int32_t> refreshTokenValidity_ = nullptr;
    // Indicates whether a secret is required.
    std::shared_ptr<bool> secretRequired_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
