// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListCloudAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LatestVersionOnly, latestVersionOnly_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PkgLabel, pkgLabel_);
      DARABONBA_PTR_TO_JSON(PkgType, pkgType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LatestVersionOnly, latestVersionOnly_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PkgLabel, pkgLabel_);
      DARABONBA_PTR_FROM_JSON(PkgType, pkgType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCloudAppsRequest() = default ;
    ListCloudAppsRequest(const ListCloudAppsRequest &) = default ;
    ListCloudAppsRequest(ListCloudAppsRequest &&) = default ;
    ListCloudAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppsRequest() = default ;
    ListCloudAppsRequest& operator=(const ListCloudAppsRequest &) = default ;
    ListCloudAppsRequest& operator=(ListCloudAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->appVersion_ == nullptr && return this->endTime_ == nullptr && return this->latestVersionOnly_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->pkgLabel_ == nullptr && return this->pkgType_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListCloudAppsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListCloudAppsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListCloudAppsRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListCloudAppsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // latestVersionOnly Field Functions 
    bool hasLatestVersionOnly() const { return this->latestVersionOnly_ != nullptr;};
    void deleteLatestVersionOnly() { this->latestVersionOnly_ = nullptr;};
    inline bool latestVersionOnly() const { DARABONBA_PTR_GET_DEFAULT(latestVersionOnly_, false) };
    inline ListCloudAppsRequest& setLatestVersionOnly(bool latestVersionOnly) { DARABONBA_PTR_SET_VALUE(latestVersionOnly_, latestVersionOnly) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCloudAppsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCloudAppsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pkgLabel Field Functions 
    bool hasPkgLabel() const { return this->pkgLabel_ != nullptr;};
    void deletePkgLabel() { this->pkgLabel_ = nullptr;};
    inline string pkgLabel() const { DARABONBA_PTR_GET_DEFAULT(pkgLabel_, "") };
    inline ListCloudAppsRequest& setPkgLabel(string pkgLabel) { DARABONBA_PTR_SET_VALUE(pkgLabel_, pkgLabel) };


    // pkgType Field Functions 
    bool hasPkgType() const { return this->pkgType_ != nullptr;};
    void deletePkgType() { this->pkgType_ = nullptr;};
    inline string pkgType() const { DARABONBA_PTR_GET_DEFAULT(pkgType_, "") };
    inline ListCloudAppsRequest& setPkgType(string pkgType) { DARABONBA_PTR_SET_VALUE(pkgType_, pkgType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListCloudAppsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCloudAppsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<bool> latestVersionOnly_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> pkgLabel_ = nullptr;
    std::shared_ptr<string> pkgType_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
