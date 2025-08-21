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
    virtual bool empty() const override { this->accessTokenValidity_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->displayName_ != nullptr && this->isMultiTenant_ != nullptr && this->predefinedScopes_ != nullptr
        && this->protocolVersion_ != nullptr && this->redirectUris_ != nullptr && this->refreshTokenValidity_ != nullptr && this->requiredScopes_ != nullptr && this->secretRequired_ != nullptr; };
    // accessTokenValidity Field Functions 
    bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
    void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
    inline int32_t accessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, 0) };
    inline CreateApplicationRequest& setAccessTokenValidity(int32_t accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateApplicationRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateApplicationRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isMultiTenant Field Functions 
    bool hasIsMultiTenant() const { return this->isMultiTenant_ != nullptr;};
    void deleteIsMultiTenant() { this->isMultiTenant_ = nullptr;};
    inline bool isMultiTenant() const { DARABONBA_PTR_GET_DEFAULT(isMultiTenant_, false) };
    inline CreateApplicationRequest& setIsMultiTenant(bool isMultiTenant) { DARABONBA_PTR_SET_VALUE(isMultiTenant_, isMultiTenant) };


    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline string predefinedScopes() const { DARABONBA_PTR_GET_DEFAULT(predefinedScopes_, "") };
    inline CreateApplicationRequest& setPredefinedScopes(string predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };


    // protocolVersion Field Functions 
    bool hasProtocolVersion() const { return this->protocolVersion_ != nullptr;};
    void deleteProtocolVersion() { this->protocolVersion_ = nullptr;};
    inline string protocolVersion() const { DARABONBA_PTR_GET_DEFAULT(protocolVersion_, "") };
    inline CreateApplicationRequest& setProtocolVersion(string protocolVersion) { DARABONBA_PTR_SET_VALUE(protocolVersion_, protocolVersion) };


    // redirectUris Field Functions 
    bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
    void deleteRedirectUris() { this->redirectUris_ = nullptr;};
    inline string redirectUris() const { DARABONBA_PTR_GET_DEFAULT(redirectUris_, "") };
    inline CreateApplicationRequest& setRedirectUris(string redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };


    // refreshTokenValidity Field Functions 
    bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
    void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
    inline int32_t refreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, 0) };
    inline CreateApplicationRequest& setRefreshTokenValidity(int32_t refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


    // requiredScopes Field Functions 
    bool hasRequiredScopes() const { return this->requiredScopes_ != nullptr;};
    void deleteRequiredScopes() { this->requiredScopes_ = nullptr;};
    inline string requiredScopes() const { DARABONBA_PTR_GET_DEFAULT(requiredScopes_, "") };
    inline CreateApplicationRequest& setRequiredScopes(string requiredScopes) { DARABONBA_PTR_SET_VALUE(requiredScopes_, requiredScopes) };


    // secretRequired Field Functions 
    bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
    void deleteSecretRequired() { this->secretRequired_ = nullptr;};
    inline bool secretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
    inline CreateApplicationRequest& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


  protected:
    // The validity period of the access token.
    // 
    // Valid values: 900 to 10800. Unit: seconds.
    // 
    // Default value: 3600.
    std::shared_ptr<int32_t> accessTokenValidity_ = nullptr;
    // The application name.
    // 
    // The name can be up to 64 characters in length. The name can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> appName_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   WebApp: a web application that interacts with a browser.
    // *   NativeApp: a native application that runs on an operating system, such as a desktop operating system or a mobile operating system.
    // *   ServerApp: an application that accesses Alibaba Cloud services without the need of manual user logon. User provisioning is automated based on the System for Cross-Domain Identity Management (SCIM) protocol.
    // 
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // The display name of the application.
    // 
    // The name can be up to 24 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // Indicates whether the application can be installed by using other Alibaba Cloud accounts. Valid values:
    // 
    // *   true: If you do not set this parameter for applications of the NativeApp and ServerApp types, true is used.
    // *   false: If you do not set this parameter for applications of the WebApp type, false is used.
    std::shared_ptr<bool> isMultiTenant_ = nullptr;
    // The scope of application permissions.
    // 
    // For more information about the application permission scope, see [Open authorization scope](https://help.aliyun.com/document_detail/93693.html). You can also call the [ListPredefinedScopes](https://help.aliyun.com/document_detail/187206.html) operation to query the permissions that are supported by different types of applications.
    // 
    // If you enter multiple permission scopes, separate them with semicolons (;).
    std::shared_ptr<string> predefinedScopes_ = nullptr;
    std::shared_ptr<string> protocolVersion_ = nullptr;
    // The callback URL.
    // 
    // If you enter multiple callback URLs, separate them with semicolons (;).
    std::shared_ptr<string> redirectUris_ = nullptr;
    // The validity period of the refreshed token.
    // 
    // Valid values: 7200 to 31536000. Unit: seconds.
    // 
    // Default value:
    // 
    // *   For applications of the WebApp and ServerApp types, if this parameter is left empty, the value 2592000 is used. The value 2592000 indicates that the validity period of the refreshed token is 30 days.
    // *   For applications of the NativeApp type, if this parameter is left empty, the value 7776000 is used. The value 7776000 indicates that the validity period of the refreshed token is 90 days.
    std::shared_ptr<int32_t> refreshTokenValidity_ = nullptr;
    // The required permission.
    // 
    // You can specify one or more permissions for the `RequiredScopes` parameter. After you specify this parameter, the required permissions are automatically selected and cannot be revoked when a user grants permissions on the application.
    // 
    // If you enter multiple permission scopes, separate them with semicolons (;).
    // 
    // >  If the permission that you specify for the `RequiredScopes` parameter is not included in the value of the `PredefinedScopes` parameter, the permission does not take effect.
    std::shared_ptr<string> requiredScopes_ = nullptr;
    // Indicates whether a secret is required. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >- For applications of the WebApp and ServerApp types, this parameter is automatically set to true and cannot be changed.
    // >- For applications of the NativeApp type, this parameter can be set to true or false. If you do not set this parameter, false is used. Applications of the NativeApp type run in untrusted environments and the secrets of these applications are not protected. Therefore, we recommend that you do not set this parameter to true unless otherwise specified. For more information, see [Use an application of the NativeApp type to log on to Alibaba Cloud](https://help.aliyun.com/document_detail/93697.html).
    std::shared_ptr<bool> secretRequired_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
