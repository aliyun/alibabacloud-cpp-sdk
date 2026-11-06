// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDBINDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDBINDAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAndBindAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndBindAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIconUrl, appIconUrl_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(OriginAppType, originAppType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UrlSuffix, urlSuffix_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndBindAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIconUrl, appIconUrl_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(OriginAppType, originAppType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UrlSuffix, urlSuffix_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreateAndBindAppRequest() = default ;
    CreateAndBindAppRequest(const CreateAndBindAppRequest &) = default ;
    CreateAndBindAppRequest(CreateAndBindAppRequest &&) = default ;
    CreateAndBindAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndBindAppRequest() = default ;
    CreateAndBindAppRequest& operator=(const CreateAndBindAppRequest &) = default ;
    CreateAndBindAppRequest& operator=(CreateAndBindAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIconUrl_ == nullptr
        && this->appName_ == nullptr && this->imageId_ == nullptr && this->originAppType_ == nullptr && this->port_ == nullptr && this->urlSuffix_ == nullptr
        && this->versionId_ == nullptr; };
    // appIconUrl Field Functions 
    bool hasAppIconUrl() const { return this->appIconUrl_ != nullptr;};
    void deleteAppIconUrl() { this->appIconUrl_ = nullptr;};
    inline string getAppIconUrl() const { DARABONBA_PTR_GET_DEFAULT(appIconUrl_, "") };
    inline CreateAndBindAppRequest& setAppIconUrl(string appIconUrl) { DARABONBA_PTR_SET_VALUE(appIconUrl_, appIconUrl) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAndBindAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateAndBindAppRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // originAppType Field Functions 
    bool hasOriginAppType() const { return this->originAppType_ != nullptr;};
    void deleteOriginAppType() { this->originAppType_ = nullptr;};
    inline string getOriginAppType() const { DARABONBA_PTR_GET_DEFAULT(originAppType_, "") };
    inline CreateAndBindAppRequest& setOriginAppType(string originAppType) { DARABONBA_PTR_SET_VALUE(originAppType_, originAppType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateAndBindAppRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // urlSuffix Field Functions 
    bool hasUrlSuffix() const { return this->urlSuffix_ != nullptr;};
    void deleteUrlSuffix() { this->urlSuffix_ = nullptr;};
    inline string getUrlSuffix() const { DARABONBA_PTR_GET_DEFAULT(urlSuffix_, "") };
    inline CreateAndBindAppRequest& setUrlSuffix(string urlSuffix) { DARABONBA_PTR_SET_VALUE(urlSuffix_, urlSuffix) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreateAndBindAppRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The URL of the application icon. Specify an accessible icon URL to display a custom icon.
    shared_ptr<string> appIconUrl_ {};
    // The name of the application to be created, which is used to identify the application in the image.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The ID of the image to which the application is bound. The image must be a custom image or community image that can be managed by the current account.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The application type. If omitted, the default value is CLIENT_BASE. Valid values:
    // 
    // - **CLIENT_BASE**: Client application.
    // - **WEB_BASE**: Browser application.
    // - **CLOUD_NATIVE_BASE**: Cloud-native application.
    // - **PORT_SERVICE_BASE**: Port service application.
    // - **AGENT_SERVICE_BASE**: Agent application.
    shared_ptr<string> originAppType_ {};
    // The application service port. For applications that require port-based access, specify the actual port number that the application listens on.
    shared_ptr<string> port_ {};
    // The path suffix of the application access URL, which is used together with the application service port to describe the access entry point.
    shared_ptr<string> urlSuffix_ {};
    // The ID of the image version to which the application is bound. If omitted, the current active version of the image specified by ImageId is used. If specified, the version must belong to the image.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
