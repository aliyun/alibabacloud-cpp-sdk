// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(NewAccessTokenValidity, newAccessTokenValidity_);
      DARABONBA_PTR_TO_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_TO_JSON(NewIsMultiTenant, newIsMultiTenant_);
      DARABONBA_PTR_TO_JSON(NewPredefinedScopes, newPredefinedScopes_);
      DARABONBA_PTR_TO_JSON(NewRedirectUris, newRedirectUris_);
      DARABONBA_PTR_TO_JSON(NewRefreshTokenValidity, newRefreshTokenValidity_);
      DARABONBA_PTR_TO_JSON(NewRequiredScopes, newRequiredScopes_);
      DARABONBA_PTR_TO_JSON(NewSecretRequired, newSecretRequired_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(NewAccessTokenValidity, newAccessTokenValidity_);
      DARABONBA_PTR_FROM_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_FROM_JSON(NewIsMultiTenant, newIsMultiTenant_);
      DARABONBA_PTR_FROM_JSON(NewPredefinedScopes, newPredefinedScopes_);
      DARABONBA_PTR_FROM_JSON(NewRedirectUris, newRedirectUris_);
      DARABONBA_PTR_FROM_JSON(NewRefreshTokenValidity, newRefreshTokenValidity_);
      DARABONBA_PTR_FROM_JSON(NewRequiredScopes, newRequiredScopes_);
      DARABONBA_PTR_FROM_JSON(NewSecretRequired, newSecretRequired_);
    };
    UpdateApplicationRequest() = default ;
    UpdateApplicationRequest(const UpdateApplicationRequest &) = default ;
    UpdateApplicationRequest(UpdateApplicationRequest &&) = default ;
    UpdateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationRequest() = default ;
    UpdateApplicationRequest& operator=(const UpdateApplicationRequest &) = default ;
    UpdateApplicationRequest& operator=(UpdateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->newAccessTokenValidity_ != nullptr && this->newDisplayName_ != nullptr && this->newIsMultiTenant_ != nullptr && this->newPredefinedScopes_ != nullptr && this->newRedirectUris_ != nullptr
        && this->newRefreshTokenValidity_ != nullptr && this->newRequiredScopes_ != nullptr && this->newSecretRequired_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // newAccessTokenValidity Field Functions 
    bool hasNewAccessTokenValidity() const { return this->newAccessTokenValidity_ != nullptr;};
    void deleteNewAccessTokenValidity() { this->newAccessTokenValidity_ = nullptr;};
    inline int32_t newAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(newAccessTokenValidity_, 0) };
    inline UpdateApplicationRequest& setNewAccessTokenValidity(int32_t newAccessTokenValidity) { DARABONBA_PTR_SET_VALUE(newAccessTokenValidity_, newAccessTokenValidity) };


    // newDisplayName Field Functions 
    bool hasNewDisplayName() const { return this->newDisplayName_ != nullptr;};
    void deleteNewDisplayName() { this->newDisplayName_ = nullptr;};
    inline string newDisplayName() const { DARABONBA_PTR_GET_DEFAULT(newDisplayName_, "") };
    inline UpdateApplicationRequest& setNewDisplayName(string newDisplayName) { DARABONBA_PTR_SET_VALUE(newDisplayName_, newDisplayName) };


    // newIsMultiTenant Field Functions 
    bool hasNewIsMultiTenant() const { return this->newIsMultiTenant_ != nullptr;};
    void deleteNewIsMultiTenant() { this->newIsMultiTenant_ = nullptr;};
    inline bool newIsMultiTenant() const { DARABONBA_PTR_GET_DEFAULT(newIsMultiTenant_, false) };
    inline UpdateApplicationRequest& setNewIsMultiTenant(bool newIsMultiTenant) { DARABONBA_PTR_SET_VALUE(newIsMultiTenant_, newIsMultiTenant) };


    // newPredefinedScopes Field Functions 
    bool hasNewPredefinedScopes() const { return this->newPredefinedScopes_ != nullptr;};
    void deleteNewPredefinedScopes() { this->newPredefinedScopes_ = nullptr;};
    inline string newPredefinedScopes() const { DARABONBA_PTR_GET_DEFAULT(newPredefinedScopes_, "") };
    inline UpdateApplicationRequest& setNewPredefinedScopes(string newPredefinedScopes) { DARABONBA_PTR_SET_VALUE(newPredefinedScopes_, newPredefinedScopes) };


    // newRedirectUris Field Functions 
    bool hasNewRedirectUris() const { return this->newRedirectUris_ != nullptr;};
    void deleteNewRedirectUris() { this->newRedirectUris_ = nullptr;};
    inline string newRedirectUris() const { DARABONBA_PTR_GET_DEFAULT(newRedirectUris_, "") };
    inline UpdateApplicationRequest& setNewRedirectUris(string newRedirectUris) { DARABONBA_PTR_SET_VALUE(newRedirectUris_, newRedirectUris) };


    // newRefreshTokenValidity Field Functions 
    bool hasNewRefreshTokenValidity() const { return this->newRefreshTokenValidity_ != nullptr;};
    void deleteNewRefreshTokenValidity() { this->newRefreshTokenValidity_ = nullptr;};
    inline int32_t newRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(newRefreshTokenValidity_, 0) };
    inline UpdateApplicationRequest& setNewRefreshTokenValidity(int32_t newRefreshTokenValidity) { DARABONBA_PTR_SET_VALUE(newRefreshTokenValidity_, newRefreshTokenValidity) };


    // newRequiredScopes Field Functions 
    bool hasNewRequiredScopes() const { return this->newRequiredScopes_ != nullptr;};
    void deleteNewRequiredScopes() { this->newRequiredScopes_ = nullptr;};
    inline string newRequiredScopes() const { DARABONBA_PTR_GET_DEFAULT(newRequiredScopes_, "") };
    inline UpdateApplicationRequest& setNewRequiredScopes(string newRequiredScopes) { DARABONBA_PTR_SET_VALUE(newRequiredScopes_, newRequiredScopes) };


    // newSecretRequired Field Functions 
    bool hasNewSecretRequired() const { return this->newSecretRequired_ != nullptr;};
    void deleteNewSecretRequired() { this->newSecretRequired_ = nullptr;};
    inline bool newSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(newSecretRequired_, false) };
    inline UpdateApplicationRequest& setNewSecretRequired(bool newSecretRequired) { DARABONBA_PTR_SET_VALUE(newSecretRequired_, newSecretRequired) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The validity period of the access token.
    // 
    // Valid values: 900 to 10800. Unit: seconds.
    std::shared_ptr<int32_t> newAccessTokenValidity_ = nullptr;
    // The display name.
    std::shared_ptr<string> newDisplayName_ = nullptr;
    // Specifies whether the application can be installed by using other Alibaba Cloud accounts. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> newIsMultiTenant_ = nullptr;
    // The permission that is granted on the application.
    // 
    // For more information about the application permission scope, see [OAuth scopes](https://help.aliyun.com/document_detail/93693.html). You can also call the [ListPredefinedScopes](https://help.aliyun.com/document_detail/187206.html) operation to query the permissions that are supported by different types of applications.
    // 
    // If you enter multiple permissions, separate them with semicolons (;).
    // 
    // The new value of this parameter overwrites the original value, and the permission specified by the new value takes effect. For example, if the original value is `/acs/ccc`, and the new value is `/acs/alidns`, `/acs/alidns` takes effect. If you want to retain the original permission and the `/acs/alidns` permission, set the value to `/acs/ccc;/acs/alidns`.
    std::shared_ptr<string> newPredefinedScopes_ = nullptr;
    // The callback URL.
    // 
    // If you enter multiple callback URLs, separate them with semicolons (;).
    std::shared_ptr<string> newRedirectUris_ = nullptr;
    // The validity period of the refresh token.
    // 
    // Valid values: 7200 to 31536000. Unit: seconds.
    std::shared_ptr<int32_t> newRefreshTokenValidity_ = nullptr;
    // The required permission.
    // 
    // You can specify one or more permissions for the `RequiredScopes` parameter. After you specify this parameter, the required permissions are automatically selected and cannot be revoked when a user grants permissions on the application.
    // 
    // If you also specify the `NewPredefinedScopes` parameter, the `NewPredefinedScopes` parameter specifies the permissions that can be granted on the application, and this parameter specifies the required permissions.
    // 
    // If you enter multiple permissions, separate them with semicolons (;).
    // 
    // The new value of this parameter overwrites the original value, and the required permission specified by the new value takes effect.
    // 
    // >  If the permission that you specify for the `RequiredScopes` parameter is not included in value of the `PredefinedScopes` parameter, the permission does not take effect.
    std::shared_ptr<string> newRequiredScopes_ = nullptr;
    // Specifies whether a secret is required. Valid values:
    // 
    // *   true
    // *   false
    // 
    // > 
    // 
    // *   For applications of the WebApp and ServerApp types, this parameter is automatically set to true and cannot be changed.
    // *   For applications of the NativeApp type, this parameter can be set to true or false. If you do not set this parameter, false is used. Applications of the NativeApp type run in untrusted environments and the secrets of these applications are not protected. Therefore, we recommend that you do not set this parameter to true unless otherwise specified. For more information, see [Use an application of the NativeApp type to log on to Alibaba Cloud](https://help.aliyun.com/document_detail/93697.html).
    std::shared_ptr<bool> newSecretRequired_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
