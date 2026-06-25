// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(CustomAppInfo, customAppInfoShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(InstallParam, installParam_);
      DARABONBA_PTR_TO_JSON(OssAppUrl, ossAppUrl_);
      DARABONBA_PTR_TO_JSON(SignApk, signApk_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(CustomAppInfo, customAppInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(InstallParam, installParam_);
      DARABONBA_PTR_FROM_JSON(OssAppUrl, ossAppUrl_);
      DARABONBA_PTR_FROM_JSON(SignApk, signApk_);
    };
    CreateAppShrinkRequest() = default ;
    CreateAppShrinkRequest(const CreateAppShrinkRequest &) = default ;
    CreateAppShrinkRequest(CreateAppShrinkRequest &&) = default ;
    CreateAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppShrinkRequest() = default ;
    CreateAppShrinkRequest& operator=(const CreateAppShrinkRequest &) = default ;
    CreateAppShrinkRequest& operator=(CreateAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->bizRegionId_ == nullptr && this->customAppInfoShrink_ == nullptr && this->description_ == nullptr && this->fileName_ == nullptr && this->filePath_ == nullptr
        && this->iconUrl_ == nullptr && this->installParam_ == nullptr && this->ossAppUrl_ == nullptr && this->signApk_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAppShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // customAppInfoShrink Field Functions 
    bool hasCustomAppInfoShrink() const { return this->customAppInfoShrink_ != nullptr;};
    void deleteCustomAppInfoShrink() { this->customAppInfoShrink_ = nullptr;};
    inline string getCustomAppInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(customAppInfoShrink_, "") };
    inline CreateAppShrinkRequest& setCustomAppInfoShrink(string customAppInfoShrink) { DARABONBA_PTR_SET_VALUE(customAppInfoShrink_, customAppInfoShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateAppShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateAppShrinkRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline CreateAppShrinkRequest& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // installParam Field Functions 
    bool hasInstallParam() const { return this->installParam_ != nullptr;};
    void deleteInstallParam() { this->installParam_ = nullptr;};
    inline string getInstallParam() const { DARABONBA_PTR_GET_DEFAULT(installParam_, "") };
    inline CreateAppShrinkRequest& setInstallParam(string installParam) { DARABONBA_PTR_SET_VALUE(installParam_, installParam) };


    // ossAppUrl Field Functions 
    bool hasOssAppUrl() const { return this->ossAppUrl_ != nullptr;};
    void deleteOssAppUrl() { this->ossAppUrl_ = nullptr;};
    inline string getOssAppUrl() const { DARABONBA_PTR_GET_DEFAULT(ossAppUrl_, "") };
    inline CreateAppShrinkRequest& setOssAppUrl(string ossAppUrl) { DARABONBA_PTR_SET_VALUE(ossAppUrl_, ossAppUrl) };


    // signApk Field Functions 
    bool hasSignApk() const { return this->signApk_ != nullptr;};
    void deleteSignApk() { this->signApk_ = nullptr;};
    inline string getSignApk() const { DARABONBA_PTR_GET_DEFAULT(signApk_, "") };
    inline CreateAppShrinkRequest& setSignApk(string signApk) { DARABONBA_PTR_SET_VALUE(signApk_, signApk) };


  protected:
    // The application name.
    shared_ptr<string> appName_ {};
    // The region ID.
    shared_ptr<string> bizRegionId_ {};
    // The custom application information.
    // 
    // > - If you pass a custom application, pass the `CustomAppInfo` parameter. All six fields in this object parameter are required.
    // >
    // > - Custom applications have a higher priority than applications from the WUYING Workspace app center. If you pass the `CustomAppInfo` parameter, `FileName` and `FilePath`, or `OssAppUrl` will be invalid.
    shared_ptr<string> customAppInfoShrink_ {};
    // The application description.
    shared_ptr<string> description_ {};
    // The name of the application file stored in Object Storage Service (OSS). This parameter and `FilePath` together determine the unique OSS address.
    // 
    // > - If you pass an application from the WUYING Workspace app center, you must pass `FileName` and `FilePath`, or `OssAppUrl`. The former takes precedence.
    // >
    // > - Log on to the [WUYING Workspace console](https://eds.console.aliyun.com/osshelp). Follow the on-screen instructions to upload your application file to the WUYING Workspace app center to obtain this parameter.
    shared_ptr<string> fileName_ {};
    // The storage address of the application file in an OSS bucket. This parameter and `FileName` together determine the unique OSS address.
    // 
    // > - If you pass an application from the WUYING Workspace app center, you must pass `FileName` and `FilePath`, or `OssAppUrl`. The former takes precedence.
    // >
    // > - Log on to the [WUYING Workspace console](https://eds.console.aliyun.com/osshelp). Follow the on-screen instructions to upload your application file to the WUYING Workspace app center to obtain this parameter.
    shared_ptr<string> filePath_ {};
    // The URL of the application icon.
    shared_ptr<string> iconUrl_ {};
    // The installation parameters. The `-r` installation parameter is included by default when you install the application.
    shared_ptr<string> installParam_ {};
    // The OSS address of the application.
    // 
    // > - If you pass an application from the WUYING Workspace app center, you must pass `FileName` and `FilePath`, or `OssAppUrl`. The former takes precedence.
    // >
    // > - Log on to the [WUYING Workspace console](https://eds.console.aliyun.com/osshelp). Follow the on-screen instructions to upload your application file to the WUYING Workspace app center to obtain this parameter.
    shared_ptr<string> ossAppUrl_ {};
    // Specifies whether to perform a system signature.
    shared_ptr<string> signApk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
