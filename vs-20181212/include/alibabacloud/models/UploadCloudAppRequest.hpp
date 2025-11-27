// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCLOUDAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCLOUDAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(PkgType, pkgType_);
    };
    friend void from_json(const Darabonba::Json& j, UploadCloudAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_FROM_JSON(PkgType, pkgType_);
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
        && return this->appVersion_ == nullptr && return this->description_ == nullptr && return this->downloadUrl_ == nullptr && return this->md5_ == nullptr && return this->pkgFormat_ == nullptr
        && return this->pkgType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UploadCloudAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline UploadCloudAppRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadCloudAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline UploadCloudAppRequest& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline UploadCloudAppRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // pkgFormat Field Functions 
    bool hasPkgFormat() const { return this->pkgFormat_ != nullptr;};
    void deletePkgFormat() { this->pkgFormat_ = nullptr;};
    inline string pkgFormat() const { DARABONBA_PTR_GET_DEFAULT(pkgFormat_, "") };
    inline UploadCloudAppRequest& setPkgFormat(string pkgFormat) { DARABONBA_PTR_SET_VALUE(pkgFormat_, pkgFormat) };


    // pkgType Field Functions 
    bool hasPkgType() const { return this->pkgType_ != nullptr;};
    void deletePkgType() { this->pkgType_ = nullptr;};
    inline string pkgType() const { DARABONBA_PTR_GET_DEFAULT(pkgType_, "") };
    inline UploadCloudAppRequest& setPkgType(string pkgType) { DARABONBA_PTR_SET_VALUE(pkgType_, pkgType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> pkgFormat_ = nullptr;
    std::shared_ptr<string> pkgType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
