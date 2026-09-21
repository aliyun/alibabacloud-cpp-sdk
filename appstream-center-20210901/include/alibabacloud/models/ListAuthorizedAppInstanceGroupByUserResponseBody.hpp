// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDAPPINSTANCEGROUPBYUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDAPPINSTANCEGROUPBYUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAuthorizedAppInstanceGroupByUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedAppInstanceGroupByUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedAppInstanceGroupByUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupModels, appInstanceGroupModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizedAppInstanceGroupByUserResponseBody() = default ;
    ListAuthorizedAppInstanceGroupByUserResponseBody(const ListAuthorizedAppInstanceGroupByUserResponseBody &) = default ;
    ListAuthorizedAppInstanceGroupByUserResponseBody(ListAuthorizedAppInstanceGroupByUserResponseBody &&) = default ;
    ListAuthorizedAppInstanceGroupByUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedAppInstanceGroupByUserResponseBody() = default ;
    ListAuthorizedAppInstanceGroupByUserResponseBody& operator=(const ListAuthorizedAppInstanceGroupByUserResponseBody &) = default ;
    ListAuthorizedAppInstanceGroupByUserResponseBody& operator=(ListAuthorizedAppInstanceGroupByUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInstanceGroupModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInstanceGroupModels& obj) { 
        DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(AppInstanceType, appInstanceType_);
        DARABONBA_PTR_TO_JSON(Apps, apps_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AppInstanceGroupModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(AppInstanceType, appInstanceType_);
        DARABONBA_PTR_FROM_JSON(Apps, apps_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AppInstanceGroupModels() = default ;
      AppInstanceGroupModels(const AppInstanceGroupModels &) = default ;
      AppInstanceGroupModels(AppInstanceGroupModels &&) = default ;
      AppInstanceGroupModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInstanceGroupModels() = default ;
      AppInstanceGroupModels& operator=(const AppInstanceGroupModels &) = default ;
      AppInstanceGroupModels& operator=(AppInstanceGroupModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Apps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Apps& obj) { 
          DARABONBA_PTR_TO_JSON(AppIcon, appIcon_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_TO_JSON(AppVersionName, appVersionName_);
        };
        friend void from_json(const Darabonba::Json& j, Apps& obj) { 
          DARABONBA_PTR_FROM_JSON(AppIcon, appIcon_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_FROM_JSON(AppVersionName, appVersionName_);
        };
        Apps() = default ;
        Apps(const Apps &) = default ;
        Apps(Apps &&) = default ;
        Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Apps() = default ;
        Apps& operator=(const Apps &) = default ;
        Apps& operator=(Apps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appIcon_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->appVersion_ == nullptr && this->appVersionName_ == nullptr; };
        // appIcon Field Functions 
        bool hasAppIcon() const { return this->appIcon_ != nullptr;};
        void deleteAppIcon() { this->appIcon_ = nullptr;};
        inline string getAppIcon() const { DARABONBA_PTR_GET_DEFAULT(appIcon_, "") };
        inline Apps& setAppIcon(string appIcon) { DARABONBA_PTR_SET_VALUE(appIcon_, appIcon) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Apps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Apps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appVersion Field Functions 
        bool hasAppVersion() const { return this->appVersion_ != nullptr;};
        void deleteAppVersion() { this->appVersion_ = nullptr;};
        inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
        inline Apps& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


        // appVersionName Field Functions 
        bool hasAppVersionName() const { return this->appVersionName_ != nullptr;};
        void deleteAppVersionName() { this->appVersionName_ = nullptr;};
        inline string getAppVersionName() const { DARABONBA_PTR_GET_DEFAULT(appVersionName_, "") };
        inline Apps& setAppVersionName(string appVersionName) { DARABONBA_PTR_SET_VALUE(appVersionName_, appVersionName) };


      protected:
        // The URL of the application icon.
        shared_ptr<string> appIcon_ {};
        // The application ID. Pass this value to the [GetConnectionTicket](~~GetConnectionTicket~~) operation to obtain a connection ticket for the application.
        shared_ptr<string> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The application version number.
        shared_ptr<string> appVersion_ {};
        // The application version name.
        shared_ptr<string> appVersionName_ {};
      };

      virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupName_ == nullptr && this->appInstanceType_ == nullptr && this->apps_ == nullptr && this->expiredTime_ == nullptr
        && this->gmtCreate_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
      // appCenterImageId Field Functions 
      bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
      void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
      inline string getAppCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
      inline AppInstanceGroupModels& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline AppInstanceGroupModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupName Field Functions 
      bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
      void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
      inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
      inline AppInstanceGroupModels& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


      // appInstanceType Field Functions 
      bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
      void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
      inline string getAppInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
      inline AppInstanceGroupModels& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


      // apps Field Functions 
      bool hasApps() const { return this->apps_ != nullptr;};
      void deleteApps() { this->apps_ = nullptr;};
      inline const vector<AppInstanceGroupModels::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<AppInstanceGroupModels::Apps>) };
      inline vector<AppInstanceGroupModels::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<AppInstanceGroupModels::Apps>) };
      inline AppInstanceGroupModels& setApps(const vector<AppInstanceGroupModels::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
      inline AppInstanceGroupModels& setApps(vector<AppInstanceGroupModels::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline AppInstanceGroupModels& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline AppInstanceGroupModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AppInstanceGroupModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AppInstanceGroupModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the application image used by the delivery group.
      shared_ptr<string> appCenterImageId_ {};
      // The delivery group ID. You can pass this value to the [GetConnectionTicket](~~GetConnectionTicket~~) operation to specify the delivery group to connect to.
      shared_ptr<string> appInstanceGroupId_ {};
      // The delivery group name.
      shared_ptr<string> appInstanceGroupName_ {};
      // The specification type of the delivery group.
      shared_ptr<string> appInstanceType_ {};
      // The list of applications deployed in the delivery group. This list includes all deployed applications in the delivery group image and is not affected by the AppId or AppName request parameters.
      shared_ptr<vector<AppInstanceGroupModels::Apps>> apps_ {};
      // The expiration time of the delivery group. The value is in the ISO 8601 datetime format with milliseconds and a time zone offset. The returned time zone offset is +00:00. Format: yyyy-MM-ddTHH:mm:ss.SSS+HH:mm.
      shared_ptr<string> expiredTime_ {};
      // The creation time of the delivery group. The value is in the ISO 8601 datetime format with milliseconds and a time zone offset. The returned time zone offset is +00:00. Format: yyyy-MM-ddTHH:mm:ss.SSS+HH:mm.
      shared_ptr<string> gmtCreate_ {};
      // The region ID of the delivery group. For more information about supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
      shared_ptr<string> regionId_ {};
      // The delivery group status. Valid values:
      // 
      // - DEPLOYING: The delivery group is being created or starting resources and is not yet connectable.
      // - DEPLOYED: The delivery group is deployed. Resources are ready but the delivery group has not been listed for service.
      // - PUBLISHED: The delivery group is published and listed. Users can connect to and use the delivery group.
      // - STOPPING: The delivery group is being delisted and is stopping service.
      // - STOPPED: The delivery group is delisted and has stopped service. Users cannot connect.
      // - MAINTAINING: The delivery group is being maintained or updated.
      // - FAILED: The delivery group failed to publish. Resource initialization failed.
      // - MAINTAIN_FAILED: The update failed. Maintenance or changes were not successful.
      // - DELETING: The delivery group is being deleted.
      // 
      // > Deleted delivery groups are not returned.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // appInstanceGroupModels Field Functions 
    bool hasAppInstanceGroupModels() const { return this->appInstanceGroupModels_ != nullptr;};
    void deleteAppInstanceGroupModels() { this->appInstanceGroupModels_ = nullptr;};
    inline const vector<ListAuthorizedAppInstanceGroupByUserResponseBody::AppInstanceGroupModels> & getAppInstanceGroupModels() const { DARABONBA_PTR_GET_CONST(appInstanceGroupModels_, vector<ListAuthorizedAppInstanceGroupByUserResponseBody::AppInstanceGroupModels>) };
    inline vector<ListAuthorizedAppInstanceGroupByUserResponseBody::AppInstanceGroupModels> getAppInstanceGroupModels() { DARABONBA_PTR_GET(appInstanceGroupModels_, vector<ListAuthorizedAppInstanceGroupByUserResponseBody::AppInstanceGroupModels>) };
    inline ListAuthorizedAppInstanceGroupByUserResponseBody& setAppInstanceGroupModels(const vector<ListAuthorizedAppInstanceGroupByUserResponseBody::AppInstanceGroupModels> & appInstanceGroupModels) { DARABONBA_PTR_SET_VALUE(appInstanceGroupModels_, appInstanceGroupModels) };
    inline ListAuthorizedAppInstanceGroupByUserResponseBody& setAppInstanceGroupModels(vector<ListAuthorizedAppInstanceGroupByUserResponseBody::AppInstanceGroupModels> && appInstanceGroupModels) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupModels_, appInstanceGroupModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAuthorizedAppInstanceGroupByUserResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedAppInstanceGroupByUserResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedAppInstanceGroupByUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAuthorizedAppInstanceGroupByUserResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of authorized delivery groups on the current page. This is an empty list if the user has no authorized delivery groups that match the conditions.
    shared_ptr<vector<ListAuthorizedAppInstanceGroupByUserResponseBody::AppInstanceGroupModels>> appInstanceGroupModels_ {};
    // The current page number. This value is the same as the PageNumber request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of delivery groups returned per page. This value is the same as the PageSize request parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of authorized delivery groups that match the filter conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
