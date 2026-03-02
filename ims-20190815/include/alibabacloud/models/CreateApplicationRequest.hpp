// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(IsMultiTenant, isMultiTenant_);
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
      DARABONBA_PTR_TO_JSON(ProtocolVersion, protocolVersion_);
      DARABONBA_PTR_TO_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_TO_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_TO_JSON(RequiredScopes, requiredScopes_);
      DARABONBA_PTR_TO_JSON(SecretRequired, secretRequired_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(IsMultiTenant, isMultiTenant_);
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
      DARABONBA_PTR_FROM_JSON(ProtocolVersion, protocolVersion_);
      DARABONBA_PTR_FROM_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_FROM_JSON(RequiredScopes, requiredScopes_);
      DARABONBA_PTR_FROM_JSON(SecretRequired, secretRequired_);
    };
    CreateApplicationRequest() = default ;
    CreateApplicationRequest(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest(CreateApplicationRequest &&) = default ;
    CreateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequest() = default ;
    CreateApplicationRequest& operator=(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest& operator=(CreateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTokenValidity_ == nullptr
        && this->appName_ == nullptr && this->appType_ == nullptr && this->displayName_ == nullptr && this->isMultiTenant_ == nullptr && this->predefinedScopes_ == nullptr
        && this->protocolVersion_ == nullptr && this->redirectUris_ == nullptr && this->refreshTokenValidity_ == nullptr && this->requiredScopes_ == nullptr && this->secretRequired_ == nullptr; };
    // accessTokenValidity Field Functions 
    bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
    void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
    inline int32_t getAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, 0) };
    inline CreateApplicationRequest& setAccessTokenValidity(int32_t accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateApplicationRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateApplicationRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isMultiTenant Field Functions 
    bool hasIsMultiTenant() const { return this->isMultiTenant_ != nullptr;};
    void deleteIsMultiTenant() { this->isMultiTenant_ = nullptr;};
    inline bool getIsMultiTenant() const { DARABONBA_PTR_GET_DEFAULT(isMultiTenant_, false) };
    inline CreateApplicationRequest& setIsMultiTenant(bool isMultiTenant) { DARABONBA_PTR_SET_VALUE(isMultiTenant_, isMultiTenant) };


    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline string getPredefinedScopes() const { DARABONBA_PTR_GET_DEFAULT(predefinedScopes_, "") };
    inline CreateApplicationRequest& setPredefinedScopes(string predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };


    // protocolVersion Field Functions 
    bool hasProtocolVersion() const { return this->protocolVersion_ != nullptr;};
    void deleteProtocolVersion() { this->protocolVersion_ = nullptr;};
    inline string getProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(protocolVersion_, "") };
    inline CreateApplicationRequest& setProtocolVersion(string protocolVersion) { DARABONBA_PTR_SET_VALUE(protocolVersion_, protocolVersion) };


    // redirectUris Field Functions 
    bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
    void deleteRedirectUris() { this->redirectUris_ = nullptr;};
    inline string getRedirectUris() const { DARABONBA_PTR_GET_DEFAULT(redirectUris_, "") };
    inline CreateApplicationRequest& setRedirectUris(string redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };


    // refreshTokenValidity Field Functions 
    bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
    void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
    inline int32_t getRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, 0) };
    inline CreateApplicationRequest& setRefreshTokenValidity(int32_t refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


    // requiredScopes Field Functions 
    bool hasRequiredScopes() const { return this->requiredScopes_ != nullptr;};
    void deleteRequiredScopes() { this->requiredScopes_ = nullptr;};
    inline string getRequiredScopes() const { DARABONBA_PTR_GET_DEFAULT(requiredScopes_, "") };
    inline CreateApplicationRequest& setRequiredScopes(string requiredScopes) { DARABONBA_PTR_SET_VALUE(requiredScopes_, requiredScopes) };


    // secretRequired Field Functions 
    bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
    void deleteSecretRequired() { this->secretRequired_ = nullptr;};
    inline bool getSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
    inline CreateApplicationRequest& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


  protected:
    // The validity period of the access token.
    // 
    // Valid values: 900 to 10800. Unit: seconds.
    // 
    // Default value: 3600.
    shared_ptr<int32_t> accessTokenValidity_ {};
    // The application name.
    // 
    // The name can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> appName_ {};
    // The type of the application. Valid values:
    // 
    // - WebApp: a web application that is based on browser interaction.
    // 
    // - NativeApp: a native application that runs on an operating system, such as a desktop or mobile operating system.
    // 
    // - ServerApp: an application that directly accesses Alibaba Cloud services without user logon. Currently, only applications that use the System for Cross-domain Identity Management (SCIM) protocol for user synchronization are supported.
    // 
    // This parameter is required.
    shared_ptr<string> appType_ {};
    // The display name of the application.
    // 
    // The name can be up to 24 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // Specifies whether the application can be installed by other Alibaba Cloud accounts. Valid values:
    // 
    // - true: For NativeApp and ServerApp applications, the default value is \\`true\\` if you leave this parameter empty.
    // 
    // - false: For WebApp applications, the default value is \\`false\\` if you leave this parameter empty.
    shared_ptr<bool> isMultiTenant_ {};
    // The scopes of the application.
    // 
    // For information about the valid values and descriptions of scopes, see [OAuth scopes](https://help.aliyun.com/document_detail/93693.html). You can also call the [ListPredefinedScopes](https://help.aliyun.com/document_detail/187206.html) operation to obtain the scopes that are supported by different application types.
    // 
    // To enter multiple scopes, separate them with semicolons (;).
    shared_ptr<string> predefinedScopes_ {};
    // The OAuth protocol version of the application. Valid values:
    // 
    // - `2.0`: OAuth 2.0.
    // 
    // - `2.1`: OAuth 2.1.
    // 
    // Default value: `2.0`.
    shared_ptr<string> protocolVersion_ {};
    // The webhook address.
    // 
    // To enter multiple webhook addresses, separate them with semicolons (;).
    shared_ptr<string> redirectUris_ {};
    // The validity period of the refresh token.
    // 
    // Valid values: 7200 to 31536000. Unit: seconds.
    // 
    // Default value:
    // 
    // - For NativeApp and ServerApp applications, the default value is 2,592,000 seconds (30 days) if you leave this parameter empty.
    // 
    // - For WebApp applications, the default value is 7,776,000 seconds (90 days) if you leave this parameter empty.
    shared_ptr<int32_t> refreshTokenValidity_ {};
    // The required scopes.
    // 
    // You can specify one or more scopes in `RequiredScopes` as required. When a user grants permissions to the application, the required scopes are selected by default and cannot be deselected.
    // 
    // To enter multiple scopes, separate them with semicolons (;).
    // 
    // > If a scope that you specify in `RequiredScopes` is not within the range of `PredefinedScopes`, the required setting for that scope does not take effect.
    shared_ptr<string> requiredScopes_ {};
    // Specifies whether an application key is required. Valid values:
    // 
    // - true
    // 
    // - false
    // 
    // > * For WebApp and ServerApp applications, this parameter is forcibly set to \\`true\\` and cannot be changed.
    // 
    // - For NativeApp applications, you can set this parameter to \\`true\\` or \\`false\\`. If you do not set this parameter, the default value is \\`false\\`. Because these applications often run in untrusted environments where application keys cannot be effectively protected, do not set this parameter to \\`true\\` unless necessary. For more information, see [Log on to Alibaba Cloud from a native application](https://help.aliyun.com/document_detail/93697.html).
    shared_ptr<bool> secretRequired_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
