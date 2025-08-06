// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTCUSTOMAPPINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTCUSTOMAPPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAppRequestCustomAppInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestCustomAppInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ApkSize, apkSize_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestCustomAppInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ApkSize, apkSize_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    CreateAppRequestCustomAppInfo() = default ;
    CreateAppRequestCustomAppInfo(const CreateAppRequestCustomAppInfo &) = default ;
    CreateAppRequestCustomAppInfo(CreateAppRequestCustomAppInfo &&) = default ;
    CreateAppRequestCustomAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestCustomAppInfo() = default ;
    CreateAppRequestCustomAppInfo& operator=(const CreateAppRequestCustomAppInfo &) = default ;
    CreateAppRequestCustomAppInfo& operator=(CreateAppRequestCustomAppInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apkSize_ != nullptr
        && this->downloadUrl_ != nullptr && this->md5_ != nullptr && this->packageName_ != nullptr && this->version_ != nullptr && this->versionCode_ != nullptr; };
    // apkSize Field Functions 
    bool hasApkSize() const { return this->apkSize_ != nullptr;};
    void deleteApkSize() { this->apkSize_ = nullptr;};
    inline string apkSize() const { DARABONBA_PTR_GET_DEFAULT(apkSize_, "") };
    inline CreateAppRequestCustomAppInfo& setApkSize(string apkSize) { DARABONBA_PTR_SET_VALUE(apkSize_, apkSize) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline CreateAppRequestCustomAppInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline CreateAppRequestCustomAppInfo& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline CreateAppRequestCustomAppInfo& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateAppRequestCustomAppInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline CreateAppRequestCustomAppInfo& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The size of the .apk file. Unit: MB.
    std::shared_ptr<string> apkSize_ = nullptr;
    // The download URL of the app.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The MD5 value of the .apk file.
    std::shared_ptr<string> md5_ = nullptr;
    // The name of the app package.
    std::shared_ptr<string> packageName_ = nullptr;
    // The version of the app.
    std::shared_ptr<string> version_ = nullptr;
    // The code of the app version.
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
