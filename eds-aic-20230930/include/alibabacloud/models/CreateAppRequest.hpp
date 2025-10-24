// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppRequestCustomAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(CustomAppInfo, customAppInfo_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(InstallParam, installParam_);
      DARABONBA_PTR_TO_JSON(OssAppUrl, ossAppUrl_);
      DARABONBA_PTR_TO_JSON(SignApk, signApk_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(CustomAppInfo, customAppInfo_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(InstallParam, installParam_);
      DARABONBA_PTR_FROM_JSON(OssAppUrl, ossAppUrl_);
      DARABONBA_PTR_FROM_JSON(SignApk, signApk_);
    };
    CreateAppRequest() = default ;
    CreateAppRequest(const CreateAppRequest &) = default ;
    CreateAppRequest(CreateAppRequest &&) = default ;
    CreateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequest() = default ;
    CreateAppRequest& operator=(const CreateAppRequest &) = default ;
    CreateAppRequest& operator=(CreateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->bizRegionId_ == nullptr && return this->customAppInfo_ == nullptr && return this->description_ == nullptr && return this->fileName_ == nullptr && return this->filePath_ == nullptr
        && return this->iconUrl_ == nullptr && return this->installParam_ == nullptr && return this->ossAppUrl_ == nullptr && return this->signApk_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAppRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // customAppInfo Field Functions 
    bool hasCustomAppInfo() const { return this->customAppInfo_ != nullptr;};
    void deleteCustomAppInfo() { this->customAppInfo_ = nullptr;};
    inline const CreateAppRequestCustomAppInfo & customAppInfo() const { DARABONBA_PTR_GET_CONST(customAppInfo_, CreateAppRequestCustomAppInfo) };
    inline CreateAppRequestCustomAppInfo customAppInfo() { DARABONBA_PTR_GET(customAppInfo_, CreateAppRequestCustomAppInfo) };
    inline CreateAppRequest& setCustomAppInfo(const CreateAppRequestCustomAppInfo & customAppInfo) { DARABONBA_PTR_SET_VALUE(customAppInfo_, customAppInfo) };
    inline CreateAppRequest& setCustomAppInfo(CreateAppRequestCustomAppInfo && customAppInfo) { DARABONBA_PTR_SET_RVALUE(customAppInfo_, customAppInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateAppRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateAppRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline CreateAppRequest& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // installParam Field Functions 
    bool hasInstallParam() const { return this->installParam_ != nullptr;};
    void deleteInstallParam() { this->installParam_ = nullptr;};
    inline string installParam() const { DARABONBA_PTR_GET_DEFAULT(installParam_, "") };
    inline CreateAppRequest& setInstallParam(string installParam) { DARABONBA_PTR_SET_VALUE(installParam_, installParam) };


    // ossAppUrl Field Functions 
    bool hasOssAppUrl() const { return this->ossAppUrl_ != nullptr;};
    void deleteOssAppUrl() { this->ossAppUrl_ = nullptr;};
    inline string ossAppUrl() const { DARABONBA_PTR_GET_DEFAULT(ossAppUrl_, "") };
    inline CreateAppRequest& setOssAppUrl(string ossAppUrl) { DARABONBA_PTR_SET_VALUE(ossAppUrl_, ossAppUrl) };


    // signApk Field Functions 
    bool hasSignApk() const { return this->signApk_ != nullptr;};
    void deleteSignApk() { this->signApk_ = nullptr;};
    inline string signApk() const { DARABONBA_PTR_GET_DEFAULT(signApk_, "") };
    inline CreateAppRequest& setSignApk(string signApk) { DARABONBA_PTR_SET_VALUE(signApk_, signApk) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The information about the custom app.
    // 
    // > 
    // 
    // *   If you want to pass in a custom app, configure the `CustomAppInfo` parameter. Take note that the six fields within it are mandatory.
    // 
    // *   A custom app has a higher priority than an app from the Alibaba Cloud Workspace Application Center. If you configure the `CustomAppInfo` parameter, the `FileName` and `FilePath` pair or the `OssAppUrl` will not take effect.
    std::shared_ptr<CreateAppRequestCustomAppInfo> customAppInfo_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The name used by the app file in Object Storage Service (OSS). This parameter, combined with `FilePath`, uniquely identifies the OSS path of the app file.
    // 
    // > 
    // 
    // *   If you want to pass in an app from the Alibaba Cloud Workspace Application Center, configure the `FileName` and `FilePath` parameters. Alternatively, configure the `OssAppUrl` parameter. The FileName and FilePath parameters takes precedence over the OssAppUrl parameter.
    // 
    // *   Log on to the [Elastic Desktop Service (EDS) Enterprise](https://eds.console.aliyun.com/osshelp) console, upload the app file to the Application Center according to the on-screen instructions, and then retrieve the parameter value.
    std::shared_ptr<string> fileName_ = nullptr;
    // The OSS bucket path to the app file. This parameter, combined with `FileName`, uniquely identifies the OSS path of the app file.
    // 
    // > 
    // 
    // *   If you want to pass in an app from the Alibaba Cloud Workspace Application Center, configure the `FileName` and `FilePath` parameters. Alternatively, configure the `OssAppUrl` parameter. The FileName and FilePath parameters takes precedence over the OssAppUrl parameter.
    // 
    // *   Log on to the [EDS Enterprise](https://eds.console.aliyun.com/osshelp) console, upload the app file to the Application Center according to the on-screen instructions, and then retrieve the parameter value.
    std::shared_ptr<string> filePath_ = nullptr;
    // The icon URL of the application.
    std::shared_ptr<string> iconUrl_ = nullptr;
    // The parameters used for installing the application. By default, the `-r` parameter is included when you install an application.
    std::shared_ptr<string> installParam_ = nullptr;
    // The OSS bucket endpoint of the app file.
    // 
    // > 
    // 
    // *   If you want to pass in an app from the Alibaba Cloud Workspace Application Center, configure the `FileName` and `FilePath` parameters. Alternatively, configure the `OssAppUrl` parameter. The FileName and FilePath parameters takes precedence over the OssAppUrl parameter.
    // 
    // *   Log on to the [EDS Enterprise](https://eds.console.aliyun.com/osshelp) console, upload the app file to the Application Center according to the on-screen instructions, and then retrieve the parameter value.
    std::shared_ptr<string> ossAppUrl_ = nullptr;
    std::shared_ptr<string> signApk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
