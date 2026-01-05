// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class CustomAppInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomAppInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ApkSize, apkSize_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(PackageName, packageName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      };
      friend void from_json(const Darabonba::Json& j, CustomAppInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ApkSize, apkSize_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      };
      CustomAppInfo() = default ;
      CustomAppInfo(const CustomAppInfo &) = default ;
      CustomAppInfo(CustomAppInfo &&) = default ;
      CustomAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomAppInfo() = default ;
      CustomAppInfo& operator=(const CustomAppInfo &) = default ;
      CustomAppInfo& operator=(CustomAppInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apkSize_ == nullptr
        && this->downloadUrl_ == nullptr && this->md5_ == nullptr && this->packageName_ == nullptr && this->version_ == nullptr && this->versionCode_ == nullptr; };
      // apkSize Field Functions 
      bool hasApkSize() const { return this->apkSize_ != nullptr;};
      void deleteApkSize() { this->apkSize_ = nullptr;};
      inline string getApkSize() const { DARABONBA_PTR_GET_DEFAULT(apkSize_, "") };
      inline CustomAppInfo& setApkSize(string apkSize) { DARABONBA_PTR_SET_VALUE(apkSize_, apkSize) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline CustomAppInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline CustomAppInfo& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // packageName Field Functions 
      bool hasPackageName() const { return this->packageName_ != nullptr;};
      void deletePackageName() { this->packageName_ = nullptr;};
      inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
      inline CustomAppInfo& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline CustomAppInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionCode Field Functions 
      bool hasVersionCode() const { return this->versionCode_ != nullptr;};
      void deleteVersionCode() { this->versionCode_ = nullptr;};
      inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
      inline CustomAppInfo& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    protected:
      // The size of the .apk file. Unit: MB.
      shared_ptr<string> apkSize_ {};
      // The download URL of the app.
      shared_ptr<string> downloadUrl_ {};
      // The MD5 value of the .apk file.
      shared_ptr<string> md5_ {};
      // The name of the app package.
      shared_ptr<string> packageName_ {};
      // The version of the app.
      shared_ptr<string> version_ {};
      // The code of the app version.
      shared_ptr<string> versionCode_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->bizRegionId_ == nullptr && this->customAppInfo_ == nullptr && this->description_ == nullptr && this->fileName_ == nullptr && this->filePath_ == nullptr
        && this->iconUrl_ == nullptr && this->installParam_ == nullptr && this->ossAppUrl_ == nullptr && this->signApk_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAppRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // customAppInfo Field Functions 
    bool hasCustomAppInfo() const { return this->customAppInfo_ != nullptr;};
    void deleteCustomAppInfo() { this->customAppInfo_ = nullptr;};
    inline const CreateAppRequest::CustomAppInfo & getCustomAppInfo() const { DARABONBA_PTR_GET_CONST(customAppInfo_, CreateAppRequest::CustomAppInfo) };
    inline CreateAppRequest::CustomAppInfo getCustomAppInfo() { DARABONBA_PTR_GET(customAppInfo_, CreateAppRequest::CustomAppInfo) };
    inline CreateAppRequest& setCustomAppInfo(const CreateAppRequest::CustomAppInfo & customAppInfo) { DARABONBA_PTR_SET_VALUE(customAppInfo_, customAppInfo) };
    inline CreateAppRequest& setCustomAppInfo(CreateAppRequest::CustomAppInfo && customAppInfo) { DARABONBA_PTR_SET_RVALUE(customAppInfo_, customAppInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateAppRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateAppRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline CreateAppRequest& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // installParam Field Functions 
    bool hasInstallParam() const { return this->installParam_ != nullptr;};
    void deleteInstallParam() { this->installParam_ = nullptr;};
    inline string getInstallParam() const { DARABONBA_PTR_GET_DEFAULT(installParam_, "") };
    inline CreateAppRequest& setInstallParam(string installParam) { DARABONBA_PTR_SET_VALUE(installParam_, installParam) };


    // ossAppUrl Field Functions 
    bool hasOssAppUrl() const { return this->ossAppUrl_ != nullptr;};
    void deleteOssAppUrl() { this->ossAppUrl_ = nullptr;};
    inline string getOssAppUrl() const { DARABONBA_PTR_GET_DEFAULT(ossAppUrl_, "") };
    inline CreateAppRequest& setOssAppUrl(string ossAppUrl) { DARABONBA_PTR_SET_VALUE(ossAppUrl_, ossAppUrl) };


    // signApk Field Functions 
    bool hasSignApk() const { return this->signApk_ != nullptr;};
    void deleteSignApk() { this->signApk_ = nullptr;};
    inline string getSignApk() const { DARABONBA_PTR_GET_DEFAULT(signApk_, "") };
    inline CreateAppRequest& setSignApk(string signApk) { DARABONBA_PTR_SET_VALUE(signApk_, signApk) };


  protected:
    // The name of the application.
    shared_ptr<string> appName_ {};
    // The ID of the region.
    shared_ptr<string> bizRegionId_ {};
    // The information about the custom app.
    // 
    // > 
    // 
    // *   If you want to pass in a custom app, configure the `CustomAppInfo` parameter. Take note that the six fields within it are mandatory.
    // 
    // *   A custom app has a higher priority than an app from the Alibaba Cloud Workspace Application Center. If you configure the `CustomAppInfo` parameter, the `FileName` and `FilePath` pair or the `OssAppUrl` will not take effect.
    shared_ptr<CreateAppRequest::CustomAppInfo> customAppInfo_ {};
    // The description of the application.
    shared_ptr<string> description_ {};
    // The name used by the app file in Object Storage Service (OSS). This parameter, combined with `FilePath`, uniquely identifies the OSS path of the app file.
    // 
    // > 
    // 
    // *   If you want to pass in an app from the Alibaba Cloud Workspace Application Center, configure the `FileName` and `FilePath` parameters. Alternatively, configure the `OssAppUrl` parameter. The FileName and FilePath parameters takes precedence over the OssAppUrl parameter.
    // 
    // *   Log on to the [Elastic Desktop Service (EDS) Enterprise](https://eds.console.aliyun.com/osshelp) console, upload the app file to the Application Center according to the on-screen instructions, and then retrieve the parameter value.
    shared_ptr<string> fileName_ {};
    // The OSS bucket path to the app file. This parameter, combined with `FileName`, uniquely identifies the OSS path of the app file.
    // 
    // > 
    // 
    // *   If you want to pass in an app from the Alibaba Cloud Workspace Application Center, configure the `FileName` and `FilePath` parameters. Alternatively, configure the `OssAppUrl` parameter. The FileName and FilePath parameters takes precedence over the OssAppUrl parameter.
    // 
    // *   Log on to the [EDS Enterprise](https://eds.console.aliyun.com/osshelp) console, upload the app file to the Application Center according to the on-screen instructions, and then retrieve the parameter value.
    shared_ptr<string> filePath_ {};
    // The icon URL of the application.
    shared_ptr<string> iconUrl_ {};
    // The parameters used for installing the application. By default, the `-r` parameter is included when you install an application.
    shared_ptr<string> installParam_ {};
    // The OSS bucket endpoint of the app file.
    // 
    // > 
    // 
    // *   If you want to pass in an app from the Alibaba Cloud Workspace Application Center, configure the `FileName` and `FilePath` parameters. Alternatively, configure the `OssAppUrl` parameter. The FileName and FilePath parameters takes precedence over the OssAppUrl parameter.
    // 
    // *   Log on to the [EDS Enterprise](https://eds.console.aliyun.com/osshelp) console, upload the app file to the Application Center according to the on-screen instructions, and then retrieve the parameter value.
    shared_ptr<string> ossAppUrl_ {};
    shared_ptr<string> signApk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
