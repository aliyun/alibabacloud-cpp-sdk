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
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->newAccessTokenValidity_ == nullptr && this->newDisplayName_ == nullptr && this->newIsMultiTenant_ == nullptr && this->newPredefinedScopes_ == nullptr && this->newRedirectUris_ == nullptr
        && this->newRefreshTokenValidity_ == nullptr && this->newRequiredScopes_ == nullptr && this->newSecretRequired_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // newAccessTokenValidity Field Functions 
    bool hasNewAccessTokenValidity() const { return this->newAccessTokenValidity_ != nullptr;};
    void deleteNewAccessTokenValidity() { this->newAccessTokenValidity_ = nullptr;};
    inline int32_t getNewAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(newAccessTokenValidity_, 0) };
    inline UpdateApplicationRequest& setNewAccessTokenValidity(int32_t newAccessTokenValidity) { DARABONBA_PTR_SET_VALUE(newAccessTokenValidity_, newAccessTokenValidity) };


    // newDisplayName Field Functions 
    bool hasNewDisplayName() const { return this->newDisplayName_ != nullptr;};
    void deleteNewDisplayName() { this->newDisplayName_ = nullptr;};
    inline string getNewDisplayName() const { DARABONBA_PTR_GET_DEFAULT(newDisplayName_, "") };
    inline UpdateApplicationRequest& setNewDisplayName(string newDisplayName) { DARABONBA_PTR_SET_VALUE(newDisplayName_, newDisplayName) };


    // newIsMultiTenant Field Functions 
    bool hasNewIsMultiTenant() const { return this->newIsMultiTenant_ != nullptr;};
    void deleteNewIsMultiTenant() { this->newIsMultiTenant_ = nullptr;};
    inline bool getNewIsMultiTenant() const { DARABONBA_PTR_GET_DEFAULT(newIsMultiTenant_, false) };
    inline UpdateApplicationRequest& setNewIsMultiTenant(bool newIsMultiTenant) { DARABONBA_PTR_SET_VALUE(newIsMultiTenant_, newIsMultiTenant) };


    // newPredefinedScopes Field Functions 
    bool hasNewPredefinedScopes() const { return this->newPredefinedScopes_ != nullptr;};
    void deleteNewPredefinedScopes() { this->newPredefinedScopes_ = nullptr;};
    inline string getNewPredefinedScopes() const { DARABONBA_PTR_GET_DEFAULT(newPredefinedScopes_, "") };
    inline UpdateApplicationRequest& setNewPredefinedScopes(string newPredefinedScopes) { DARABONBA_PTR_SET_VALUE(newPredefinedScopes_, newPredefinedScopes) };


    // newRedirectUris Field Functions 
    bool hasNewRedirectUris() const { return this->newRedirectUris_ != nullptr;};
    void deleteNewRedirectUris() { this->newRedirectUris_ = nullptr;};
    inline string getNewRedirectUris() const { DARABONBA_PTR_GET_DEFAULT(newRedirectUris_, "") };
    inline UpdateApplicationRequest& setNewRedirectUris(string newRedirectUris) { DARABONBA_PTR_SET_VALUE(newRedirectUris_, newRedirectUris) };


    // newRefreshTokenValidity Field Functions 
    bool hasNewRefreshTokenValidity() const { return this->newRefreshTokenValidity_ != nullptr;};
    void deleteNewRefreshTokenValidity() { this->newRefreshTokenValidity_ = nullptr;};
    inline int32_t getNewRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(newRefreshTokenValidity_, 0) };
    inline UpdateApplicationRequest& setNewRefreshTokenValidity(int32_t newRefreshTokenValidity) { DARABONBA_PTR_SET_VALUE(newRefreshTokenValidity_, newRefreshTokenValidity) };


    // newRequiredScopes Field Functions 
    bool hasNewRequiredScopes() const { return this->newRequiredScopes_ != nullptr;};
    void deleteNewRequiredScopes() { this->newRequiredScopes_ = nullptr;};
    inline string getNewRequiredScopes() const { DARABONBA_PTR_GET_DEFAULT(newRequiredScopes_, "") };
    inline UpdateApplicationRequest& setNewRequiredScopes(string newRequiredScopes) { DARABONBA_PTR_SET_VALUE(newRequiredScopes_, newRequiredScopes) };


    // newSecretRequired Field Functions 
    bool hasNewSecretRequired() const { return this->newSecretRequired_ != nullptr;};
    void deleteNewSecretRequired() { this->newSecretRequired_ = nullptr;};
    inline bool getNewSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(newSecretRequired_, false) };
    inline UpdateApplicationRequest& setNewSecretRequired(bool newSecretRequired) { DARABONBA_PTR_SET_VALUE(newSecretRequired_, newSecretRequired) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The validity period of the access token.
    // 
    // Valid values: 900 to 10800. Unit: seconds.
    shared_ptr<int32_t> newAccessTokenValidity_ {};
    // The new display name.
    shared_ptr<string> newDisplayName_ {};
    // Indicates whether the application can be installed by other Alibaba Cloud accounts. Valid values:
    // 
    // - true: The application can be installed.
    // 
    // - false: The application cannot be installed.
    shared_ptr<bool> newIsMultiTenant_ {};
    // The permission scopes of the application.
    // 
    // For more information about the valid values and descriptions of permission scopes, see [OAuth scopes](https://help.aliyun.com/document_detail/93693.html). You can also call the [ListPredefinedScopes](https://help.aliyun.com/document_detail/187206.html) operation to obtain the permission scopes that are supported by different types of applications.
    // 
    // If you enter multiple permission scopes, separate them with semicolons (;).
    // 
    // The new permission scopes overwrite the original ones. For example, if the original permission scope is `/acs/ccc` and you set the new permission scope to `/acs/alidns`, the permission scope that takes effect is `/acs/alidns`. If you want to add `/acs/alidns` to the original scope, set the new permission scope to `/acs/ccc;/acs/alidns`.
    shared_ptr<string> newPredefinedScopes_ {};
    // The webhook address.
    // 
    // If you enter multiple webhook addresses, separate them with semicolons (;).
    shared_ptr<string> newRedirectUris_ {};
    // The validity period of the refresh token.
    // 
    // Valid values: 7200 to 31536000. Unit: seconds.
    shared_ptr<int32_t> newRefreshTokenValidity_ {};
    // The required permission scopes of the application.
    // 
    // You can set one or more scopes specified in `RequiredScopes` as required. After a scope is set as required, it is selected by default and cannot be deselected when a user grants permissions to the application.
    // 
    // If you also specify `NewPredefinedScopes`, the list of application scopes is reset by `NewPredefinedScopes` first. Then, this parameter is used to configure whether the scopes are required.
    // 
    // If you enter multiple permission scopes, separate them with semicolons (;).
    // 
    // The new required scopes overwrite the original ones.
    // 
    // > If a scope that you specify for `RequiredScopes` is not within the range of `PredefinedScopes`, the required setting for that scope does not take effect.
    shared_ptr<string> newRequiredScopes_ {};
    // Indicates whether an application key is required. Valid values:
    // 
    // - true
    // 
    // - false
    // 
    // > * For applications of the WebApp and ServerApp types, this parameter is forcibly set to true and cannot be modified.
    // 
    // - For applications of the NativeApp type, you can set this parameter to true or false. The default value is false. These applications often run in untrusted environments and cannot effectively protect application keys. Do not set this parameter to true unless necessary. For more information, see [Log on to Alibaba Cloud using a native application](https://help.aliyun.com/document_detail/93697.html).
    shared_ptr<bool> newSecretRequired_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
