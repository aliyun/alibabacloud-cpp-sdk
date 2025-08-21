// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPSRESPONSEBODYCLOUDAPPS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPSRESPONSEBODYCLOUDAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListCloudAppsResponseBodyCloudApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppsResponseBodyCloudApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_TO_JSON(PkgType, pkgType_);
      DARABONBA_PTR_TO_JSON(StablePatchId, stablePatchId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppsResponseBodyCloudApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PkgFormat, pkgFormat_);
      DARABONBA_PTR_FROM_JSON(PkgType, pkgType_);
      DARABONBA_PTR_FROM_JSON(StablePatchId, stablePatchId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
    };
    ListCloudAppsResponseBodyCloudApps() = default ;
    ListCloudAppsResponseBodyCloudApps(const ListCloudAppsResponseBodyCloudApps &) = default ;
    ListCloudAppsResponseBodyCloudApps(ListCloudAppsResponseBodyCloudApps &&) = default ;
    ListCloudAppsResponseBodyCloudApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppsResponseBodyCloudApps() = default ;
    ListCloudAppsResponseBodyCloudApps& operator=(const ListCloudAppsResponseBodyCloudApps &) = default ;
    ListCloudAppsResponseBodyCloudApps& operator=(ListCloudAppsResponseBodyCloudApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->appVersion_ != nullptr && this->description_ != nullptr && this->pkgFormat_ != nullptr && this->pkgType_ != nullptr
        && this->stablePatchId_ != nullptr && this->status_ != nullptr && this->statusDescription_ != nullptr && this->updateTime_ != nullptr && this->uploadTime_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pkgFormat Field Functions 
    bool hasPkgFormat() const { return this->pkgFormat_ != nullptr;};
    void deletePkgFormat() { this->pkgFormat_ = nullptr;};
    inline string pkgFormat() const { DARABONBA_PTR_GET_DEFAULT(pkgFormat_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setPkgFormat(string pkgFormat) { DARABONBA_PTR_SET_VALUE(pkgFormat_, pkgFormat) };


    // pkgType Field Functions 
    bool hasPkgType() const { return this->pkgType_ != nullptr;};
    void deletePkgType() { this->pkgType_ = nullptr;};
    inline string pkgType() const { DARABONBA_PTR_GET_DEFAULT(pkgType_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setPkgType(string pkgType) { DARABONBA_PTR_SET_VALUE(pkgType_, pkgType) };


    // stablePatchId Field Functions 
    bool hasStablePatchId() const { return this->stablePatchId_ != nullptr;};
    void deleteStablePatchId() { this->stablePatchId_ = nullptr;};
    inline string stablePatchId() const { DARABONBA_PTR_GET_DEFAULT(stablePatchId_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setStablePatchId(string stablePatchId) { DARABONBA_PTR_SET_VALUE(stablePatchId_, stablePatchId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDescription Field Functions 
    bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
    void deleteStatusDescription() { this->statusDescription_ = nullptr;};
    inline string statusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline ListCloudAppsResponseBodyCloudApps& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> pkgFormat_ = nullptr;
    std::shared_ptr<string> pkgType_ = nullptr;
    std::shared_ptr<string> stablePatchId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusDescription_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> uploadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
