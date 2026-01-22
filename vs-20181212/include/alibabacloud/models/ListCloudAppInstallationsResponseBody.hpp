// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPINSTALLATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPINSTALLATIONSRESPONSEBODY_HPP_
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
  class ListCloudAppInstallationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppInstallationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstallationInfos, installationInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppInstallationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallationInfos, installationInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAppInstallationsResponseBody() = default ;
    ListCloudAppInstallationsResponseBody(const ListCloudAppInstallationsResponseBody &) = default ;
    ListCloudAppInstallationsResponseBody(ListCloudAppInstallationsResponseBody &&) = default ;
    ListCloudAppInstallationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppInstallationsResponseBody() = default ;
    ListCloudAppInstallationsResponseBody& operator=(const ListCloudAppInstallationsResponseBody &) = default ;
    ListCloudAppInstallationsResponseBody& operator=(ListCloudAppInstallationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstallationInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstallationInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(InstallationTime, installationTime_);
        DARABONBA_PTR_TO_JSON(PatchId, patchId_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, InstallationInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(InstallationTime, installationTime_);
        DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      InstallationInfos() = default ;
      InstallationInfos(const InstallationInfos &) = default ;
      InstallationInfos(InstallationInfos &&) = default ;
      InstallationInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstallationInfos() = default ;
      InstallationInfos& operator=(const InstallationInfos &) = default ;
      InstallationInfos& operator=(InstallationInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appVersion_ == nullptr && this->installationTime_ == nullptr && this->patchId_ == nullptr && this->renderingInstanceId_ == nullptr
        && this->status_ == nullptr && this->statusDescription_ == nullptr && this->updateTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline InstallationInfos& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline InstallationInfos& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline InstallationInfos& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // installationTime Field Functions 
      bool hasInstallationTime() const { return this->installationTime_ != nullptr;};
      void deleteInstallationTime() { this->installationTime_ = nullptr;};
      inline string getInstallationTime() const { DARABONBA_PTR_GET_DEFAULT(installationTime_, "") };
      inline InstallationInfos& setInstallationTime(string installationTime) { DARABONBA_PTR_SET_VALUE(installationTime_, installationTime) };


      // patchId Field Functions 
      bool hasPatchId() const { return this->patchId_ != nullptr;};
      void deletePatchId() { this->patchId_ = nullptr;};
      inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
      inline InstallationInfos& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline InstallationInfos& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstallationInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDescription Field Functions 
      bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
      void deleteStatusDescription() { this->statusDescription_ = nullptr;};
      inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
      inline InstallationInfos& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline InstallationInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> appVersion_ {};
      shared_ptr<string> installationTime_ {};
      shared_ptr<string> patchId_ {};
      shared_ptr<string> renderingInstanceId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusDescription_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->installationInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // installationInfos Field Functions 
    bool hasInstallationInfos() const { return this->installationInfos_ != nullptr;};
    void deleteInstallationInfos() { this->installationInfos_ = nullptr;};
    inline const vector<ListCloudAppInstallationsResponseBody::InstallationInfos> & getInstallationInfos() const { DARABONBA_PTR_GET_CONST(installationInfos_, vector<ListCloudAppInstallationsResponseBody::InstallationInfos>) };
    inline vector<ListCloudAppInstallationsResponseBody::InstallationInfos> getInstallationInfos() { DARABONBA_PTR_GET(installationInfos_, vector<ListCloudAppInstallationsResponseBody::InstallationInfos>) };
    inline ListCloudAppInstallationsResponseBody& setInstallationInfos(const vector<ListCloudAppInstallationsResponseBody::InstallationInfos> & installationInfos) { DARABONBA_PTR_SET_VALUE(installationInfos_, installationInfos) };
    inline ListCloudAppInstallationsResponseBody& setInstallationInfos(vector<ListCloudAppInstallationsResponseBody::InstallationInfos> && installationInfos) { DARABONBA_PTR_SET_RVALUE(installationInfos_, installationInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCloudAppInstallationsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCloudAppInstallationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAppInstallationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCloudAppInstallationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCloudAppInstallationsResponseBody::InstallationInfos>> installationInfos_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
