// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCLOUDAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCLOUDAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UploadCloudAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadCloudAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_TO_JSON(PkgLabels, pkgLabelsShrink_);
      DARABONBA_PTR_TO_JSON(PkgType, pkgType_);
    };
    friend void from_json(const Darabonba::Json& j, UploadCloudAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_FROM_JSON(PkgLabels, pkgLabelsShrink_);
      DARABONBA_PTR_FROM_JSON(PkgType, pkgType_);
    };
    UploadCloudAppShrinkRequest() = default ;
    UploadCloudAppShrinkRequest(const UploadCloudAppShrinkRequest &) = default ;
    UploadCloudAppShrinkRequest(UploadCloudAppShrinkRequest &&) = default ;
    UploadCloudAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadCloudAppShrinkRequest() = default ;
    UploadCloudAppShrinkRequest& operator=(const UploadCloudAppShrinkRequest &) = default ;
    UploadCloudAppShrinkRequest& operator=(UploadCloudAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->appVersion_ == nullptr && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->md5_ == nullptr && this->pkgFormat_ == nullptr
        && this->pkgLabelsShrink_ == nullptr && this->pkgType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UploadCloudAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline UploadCloudAppShrinkRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadCloudAppShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline UploadCloudAppShrinkRequest& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline UploadCloudAppShrinkRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // pkgFormat Field Functions 
    bool hasPkgFormat() const { return this->pkgFormat_ != nullptr;};
    void deletePkgFormat() { this->pkgFormat_ = nullptr;};
    inline string getPkgFormat() const { DARABONBA_PTR_GET_DEFAULT(pkgFormat_, "") };
    inline UploadCloudAppShrinkRequest& setPkgFormat(string pkgFormat) { DARABONBA_PTR_SET_VALUE(pkgFormat_, pkgFormat) };


    // pkgLabelsShrink Field Functions 
    bool hasPkgLabelsShrink() const { return this->pkgLabelsShrink_ != nullptr;};
    void deletePkgLabelsShrink() { this->pkgLabelsShrink_ = nullptr;};
    inline string getPkgLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(pkgLabelsShrink_, "") };
    inline UploadCloudAppShrinkRequest& setPkgLabelsShrink(string pkgLabelsShrink) { DARABONBA_PTR_SET_VALUE(pkgLabelsShrink_, pkgLabelsShrink) };


    // pkgType Field Functions 
    bool hasPkgType() const { return this->pkgType_ != nullptr;};
    void deletePkgType() { this->pkgType_ = nullptr;};
    inline string getPkgType() const { DARABONBA_PTR_GET_DEFAULT(pkgType_, "") };
    inline UploadCloudAppShrinkRequest& setPkgType(string pkgType) { DARABONBA_PTR_SET_VALUE(pkgType_, pkgType) };


  protected:
    // The application name. For Android apps, use the package name, such as com.aaa.bbb.
    // 
    // Value requirements:
    // 
    // 1. Length: 4–50 characters
    // 
    // 2. Allowed characters: lowercase letters, digits, underscores (_), hyphens (-), and dots (.)
    // 
    // 3. The first and last characters must be a letter or digit
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // Value requirements:
    // 
    // 1. Length: 1–50 characters
    // 
    // 2. Allowed characters: lowercase letters, digits, underscores (_), hyphens (-), and dots (.)
    // 
    // 3. The first and last characters must be a letter or digit
    // 
    // This parameter is required.
    shared_ptr<string> appVersion_ {};
    // A description of the application.
    shared_ptr<string> description_ {};
    // The download URL of the application package.
    // 
    // This parameter is required.
    shared_ptr<string> downloadUrl_ {};
    // The MD5 hash of the application package, used to verify package integrity.
    // 
    // This parameter is required.
    shared_ptr<string> md5_ {};
    // The package format. By default, this is inferred from the file extension in the DownloadUrl. Valid values:
    // 
    // 1. apk
    // 
    // 2. tar.gz
    // 
    // 3. tar
    // 
    // 4. zip
    // 
    // 5. rar
    shared_ptr<string> pkgFormat_ {};
    // Cloud application labels. You can select multiple. Valid values:
    // 
    // 1. hot
    // 
    // 2. game
    // 
    // 3. app
    shared_ptr<string> pkgLabelsShrink_ {};
    // The package type.
    // 
    // ## Valid values:
    // 
    // 1. android
    // 
    // 2. win
    // 
    // 3. android_appmarket: for Android app marketplace scenarios. This scenario enforces real APK PackageName restrictions:
    //    a. PackageNames must be unique across different AppNames.
    //    b. The same AppName with different AppVersions can map to different PackageNames.
    // 
    // ## Default behavior:
    // 
    // If not specified, the system automatically maps the package type based on PkgFormat (or infers PkgFormat from the DownloadUrl file extension). The default mapping is:
    // 
    // 1. android: apk
    // 
    // 2. win: tar.gz, tar, zip, rar
    // 
    // 3. android_appmarket: apk
    shared_ptr<string> pkgType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
