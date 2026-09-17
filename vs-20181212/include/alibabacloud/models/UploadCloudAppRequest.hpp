// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCLOUDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCLOUDAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UploadCloudAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadCloudAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_TO_JSON(PkgLabels, pkgLabels_);
      DARABONBA_PTR_TO_JSON(PkgType, pkgType_);
      DARABONBA_PTR_TO_JSON(PostCommandPath, postCommandPath_);
      DARABONBA_PTR_TO_JSON(PostCommandTimeoutSec, postCommandTimeoutSec_);
    };
    friend void from_json(const Darabonba::Json& j, UploadCloudAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_FROM_JSON(PkgLabels, pkgLabels_);
      DARABONBA_PTR_FROM_JSON(PkgType, pkgType_);
      DARABONBA_PTR_FROM_JSON(PostCommandPath, postCommandPath_);
      DARABONBA_PTR_FROM_JSON(PostCommandTimeoutSec, postCommandTimeoutSec_);
    };
    UploadCloudAppRequest() = default ;
    UploadCloudAppRequest(const UploadCloudAppRequest &) = default ;
    UploadCloudAppRequest(UploadCloudAppRequest &&) = default ;
    UploadCloudAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadCloudAppRequest() = default ;
    UploadCloudAppRequest& operator=(const UploadCloudAppRequest &) = default ;
    UploadCloudAppRequest& operator=(UploadCloudAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->appVersion_ == nullptr && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->md5_ == nullptr && this->pkgFormat_ == nullptr
        && this->pkgLabels_ == nullptr && this->pkgType_ == nullptr && this->postCommandPath_ == nullptr && this->postCommandTimeoutSec_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UploadCloudAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline UploadCloudAppRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadCloudAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline UploadCloudAppRequest& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline UploadCloudAppRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // pkgFormat Field Functions 
    bool hasPkgFormat() const { return this->pkgFormat_ != nullptr;};
    void deletePkgFormat() { this->pkgFormat_ = nullptr;};
    inline string getPkgFormat() const { DARABONBA_PTR_GET_DEFAULT(pkgFormat_, "") };
    inline UploadCloudAppRequest& setPkgFormat(string pkgFormat) { DARABONBA_PTR_SET_VALUE(pkgFormat_, pkgFormat) };


    // pkgLabels Field Functions 
    bool hasPkgLabels() const { return this->pkgLabels_ != nullptr;};
    void deletePkgLabels() { this->pkgLabels_ = nullptr;};
    inline const vector<string> & getPkgLabels() const { DARABONBA_PTR_GET_CONST(pkgLabels_, vector<string>) };
    inline vector<string> getPkgLabels() { DARABONBA_PTR_GET(pkgLabels_, vector<string>) };
    inline UploadCloudAppRequest& setPkgLabels(const vector<string> & pkgLabels) { DARABONBA_PTR_SET_VALUE(pkgLabels_, pkgLabels) };
    inline UploadCloudAppRequest& setPkgLabels(vector<string> && pkgLabels) { DARABONBA_PTR_SET_RVALUE(pkgLabels_, pkgLabels) };


    // pkgType Field Functions 
    bool hasPkgType() const { return this->pkgType_ != nullptr;};
    void deletePkgType() { this->pkgType_ = nullptr;};
    inline string getPkgType() const { DARABONBA_PTR_GET_DEFAULT(pkgType_, "") };
    inline UploadCloudAppRequest& setPkgType(string pkgType) { DARABONBA_PTR_SET_VALUE(pkgType_, pkgType) };


    // postCommandPath Field Functions 
    bool hasPostCommandPath() const { return this->postCommandPath_ != nullptr;};
    void deletePostCommandPath() { this->postCommandPath_ = nullptr;};
    inline string getPostCommandPath() const { DARABONBA_PTR_GET_DEFAULT(postCommandPath_, "") };
    inline UploadCloudAppRequest& setPostCommandPath(string postCommandPath) { DARABONBA_PTR_SET_VALUE(postCommandPath_, postCommandPath) };


    // postCommandTimeoutSec Field Functions 
    bool hasPostCommandTimeoutSec() const { return this->postCommandTimeoutSec_ != nullptr;};
    void deletePostCommandTimeoutSec() { this->postCommandTimeoutSec_ = nullptr;};
    inline int32_t getPostCommandTimeoutSec() const { DARABONBA_PTR_GET_DEFAULT(postCommandTimeoutSec_, 0) };
    inline UploadCloudAppRequest& setPostCommandTimeoutSec(int32_t postCommandTimeoutSec) { DARABONBA_PTR_SET_VALUE(postCommandTimeoutSec_, postCommandTimeoutSec) };


  protected:
    // The application name. For Android applications, use the package name, such as com.aaa.bbb.
    // 
    // Value rules:
    // 1. Length: 4 to 50 characters.
    // 2. Lowercase letters, digits, underscores (_), hyphens (-), and periods (.).
    // 3. The first and last characters must be letters or digits.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The application version. For Android applications, use the VersionName, such as 1.1.1.
    // 
    // Value rules:
    // 1. Length: 1 to 50 characters.
    // 2. Lowercase letters, digits, underscores (_), hyphens (-), and periods (.).
    // 3. The first and last characters must be letters or digits.
    // 
    // This parameter is required.
    shared_ptr<string> appVersion_ {};
    // The description of the application.
    shared_ptr<string> description_ {};
    // The download URL of the application package.
    // 
    // This parameter is required.
    shared_ptr<string> downloadUrl_ {};
    // The MD5 checksum of the application package, used to verify package integrity.
    // 
    // This parameter is required.
    shared_ptr<string> md5_ {};
    // The package format. The default value is the file extension of the download URL. Valid values:
    // 1. apk
    // 2. tar.gz
    // 3. tar
    // 4. zip
    // 5. rar
    shared_ptr<string> pkgFormat_ {};
    // The cloud application labels. You can select multiple values. Valid values:
    // 1. hot
    // 2. game
    // 3. app
    shared_ptr<vector<string>> pkgLabels_ {};
    // The package type.
    // 
    // ## Valid values:
    // 
    // 1. android
    // 2. win
    // 3. android_appmarket: corresponds to the Android app marketplace scenario. In this scenario, the actual APK PackageName is restricted:
    // a. Different AppName values cannot share the same PackageName.
    // b. The same AppName with different AppVersion values can be associated with different PackageName values.
    // 
    // ## Default value:
    // If not specified, the package type is automatically mapped based on PkgFormat (or the file extension of DownloadUrl). Default mappings between PkgFormat and package type:
    // 1. android: apk (the apk format is mapped to android by default).
    // 2. win: tar.gz, tar, zip, rar.
    // 3. android_appmarket: apk.
    shared_ptr<string> pkgType_ {};
    // The relative path of the post-installation command within the application package. Only supported for win type applications.
    shared_ptr<string> postCommandPath_ {};
    // The timeout period (in seconds) for the post-installation command. Only supported for win type applications.
    shared_ptr<int32_t> postCommandTimeoutSec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
