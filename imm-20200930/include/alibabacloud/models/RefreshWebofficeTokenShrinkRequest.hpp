// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHWEBOFFICETOKENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHWEBOFFICETOKENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class RefreshWebofficeTokenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshWebofficeTokenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RefreshToken, refreshToken_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshWebofficeTokenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RefreshToken, refreshToken_);
    };
    RefreshWebofficeTokenShrinkRequest() = default ;
    RefreshWebofficeTokenShrinkRequest(const RefreshWebofficeTokenShrinkRequest &) = default ;
    RefreshWebofficeTokenShrinkRequest(RefreshWebofficeTokenShrinkRequest &&) = default ;
    RefreshWebofficeTokenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshWebofficeTokenShrinkRequest() = default ;
    RefreshWebofficeTokenShrinkRequest& operator=(const RefreshWebofficeTokenShrinkRequest &) = default ;
    RefreshWebofficeTokenShrinkRequest& operator=(RefreshWebofficeTokenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->credentialConfigShrink_ == nullptr && this->projectName_ == nullptr && this->refreshToken_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string getRefreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


  protected:
    // The Weboffice access token. You can obtain the token by calling the [GenerateWebofficeToken](https://help.aliyun.com/document_detail/478226.html) or [RefreshWebofficeToken](https://help.aliyun.com/document_detail/478227.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> accessToken_ {};
    // **Leave this parameter empty unless you have special requirements.**
    // 
    // The China authorization configuration. This parameter is optional. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<string> credentialConfigShrink_ {};
    // The project name. For information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The Weboffice refresh token. You can obtain the token by calling the [GenerateWebofficeToken](https://help.aliyun.com/document_detail/478226.html) or [RefreshWebofficeToken](https://help.aliyun.com/document_detail/478227.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> refreshToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
