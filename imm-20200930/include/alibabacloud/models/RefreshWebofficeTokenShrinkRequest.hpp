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
        && return this->credentialConfigShrink_ == nullptr && return this->projectName_ == nullptr && return this->refreshToken_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline RefreshWebofficeTokenShrinkRequest& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


  protected:
    // Weboffice access token. Obtain it through the [GenerateWebofficeToken](https://help.aliyun.com/document_detail/478226.html) or [RefreshWebofficeToken](https://help.aliyun.com/document_detail/478227.html) interfaces.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessToken_ = nullptr;
    // **If there are no special requirements, leave it blank.**
    // 
    // Chained authorization configuration, optional. For more information, see [Access Other Entity Resources Using Chained Authorization](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // Project name. For more information on how to obtain it, see [Create Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Weboffice refresh token. Obtain it through the [GenerateWebofficeToken](https://help.aliyun.com/document_detail/478226.html) or [RefreshWebofficeToken](https://help.aliyun.com/document_detail/478227.html) interfaces.
    // 
    // This parameter is required.
    std::shared_ptr<string> refreshToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
