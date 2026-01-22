// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPSRESPONSEBODY_HPP_
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
  class ListCloudAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudApps, cloudApps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudApps, cloudApps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAppsResponseBody() = default ;
    ListCloudAppsResponseBody(const ListCloudAppsResponseBody &) = default ;
    ListCloudAppsResponseBody(ListCloudAppsResponseBody &&) = default ;
    ListCloudAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppsResponseBody() = default ;
    ListCloudAppsResponseBody& operator=(const ListCloudAppsResponseBody &) = default ;
    ListCloudAppsResponseBody& operator=(ListCloudAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudApps& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CloudApps& obj) { 
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
      CloudApps() = default ;
      CloudApps(const CloudApps &) = default ;
      CloudApps(CloudApps &&) = default ;
      CloudApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudApps() = default ;
      CloudApps& operator=(const CloudApps &) = default ;
      CloudApps& operator=(CloudApps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appVersion_ == nullptr && this->description_ == nullptr && this->pkgFormat_ == nullptr && this->pkgType_ == nullptr
        && this->stablePatchId_ == nullptr && this->status_ == nullptr && this->statusDescription_ == nullptr && this->updateTime_ == nullptr && this->uploadTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline CloudApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline CloudApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline CloudApps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudApps& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // pkgFormat Field Functions 
      bool hasPkgFormat() const { return this->pkgFormat_ != nullptr;};
      void deletePkgFormat() { this->pkgFormat_ = nullptr;};
      inline string getPkgFormat() const { DARABONBA_PTR_GET_DEFAULT(pkgFormat_, "") };
      inline CloudApps& setPkgFormat(string pkgFormat) { DARABONBA_PTR_SET_VALUE(pkgFormat_, pkgFormat) };


      // pkgType Field Functions 
      bool hasPkgType() const { return this->pkgType_ != nullptr;};
      void deletePkgType() { this->pkgType_ = nullptr;};
      inline string getPkgType() const { DARABONBA_PTR_GET_DEFAULT(pkgType_, "") };
      inline CloudApps& setPkgType(string pkgType) { DARABONBA_PTR_SET_VALUE(pkgType_, pkgType) };


      // stablePatchId Field Functions 
      bool hasStablePatchId() const { return this->stablePatchId_ != nullptr;};
      void deleteStablePatchId() { this->stablePatchId_ = nullptr;};
      inline string getStablePatchId() const { DARABONBA_PTR_GET_DEFAULT(stablePatchId_, "") };
      inline CloudApps& setStablePatchId(string stablePatchId) { DARABONBA_PTR_SET_VALUE(stablePatchId_, stablePatchId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CloudApps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDescription Field Functions 
      bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
      void deleteStatusDescription() { this->statusDescription_ = nullptr;};
      inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
      inline CloudApps& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline CloudApps& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline CloudApps& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> appVersion_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> pkgFormat_ {};
      shared_ptr<string> pkgType_ {};
      shared_ptr<string> stablePatchId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusDescription_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> uploadTime_ {};
    };

    virtual bool empty() const override { return this->cloudApps_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudApps Field Functions 
    bool hasCloudApps() const { return this->cloudApps_ != nullptr;};
    void deleteCloudApps() { this->cloudApps_ = nullptr;};
    inline const vector<ListCloudAppsResponseBody::CloudApps> & getCloudApps() const { DARABONBA_PTR_GET_CONST(cloudApps_, vector<ListCloudAppsResponseBody::CloudApps>) };
    inline vector<ListCloudAppsResponseBody::CloudApps> getCloudApps() { DARABONBA_PTR_GET(cloudApps_, vector<ListCloudAppsResponseBody::CloudApps>) };
    inline ListCloudAppsResponseBody& setCloudApps(const vector<ListCloudAppsResponseBody::CloudApps> & cloudApps) { DARABONBA_PTR_SET_VALUE(cloudApps_, cloudApps) };
    inline ListCloudAppsResponseBody& setCloudApps(vector<ListCloudAppsResponseBody::CloudApps> && cloudApps) { DARABONBA_PTR_SET_RVALUE(cloudApps_, cloudApps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCloudAppsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCloudAppsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCloudAppsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCloudAppsResponseBody::CloudApps>> cloudApps_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
