// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPSRESPONSEBODY_HPP_
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
  class ListPublishedAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublishedAppsResponseBody() = default ;
    ListPublishedAppsResponseBody(const ListPublishedAppsResponseBody &) = default ;
    ListPublishedAppsResponseBody(ListPublishedAppsResponseBody &&) = default ;
    ListPublishedAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAppsResponseBody() = default ;
    ListPublishedAppsResponseBody& operator=(const ListPublishedAppsResponseBody &) = default ;
    ListPublishedAppsResponseBody& operator=(ListPublishedAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Apps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apps& obj) { 
        DARABONBA_PTR_TO_JSON(AppIcon, appIcon_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(AppVersionName, appVersionName_);
        DARABONBA_PTR_TO_JSON(AuthorizedUserCount, authorizedUserCount_);
      };
      friend void from_json(const Darabonba::Json& j, Apps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppIcon, appIcon_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(AppVersionName, appVersionName_);
        DARABONBA_PTR_FROM_JSON(AuthorizedUserCount, authorizedUserCount_);
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
        && this->appId_ == nullptr && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupName_ == nullptr && this->appName_ == nullptr && this->appVersion_ == nullptr
        && this->appVersionName_ == nullptr && this->authorizedUserCount_ == nullptr; };
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


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline Apps& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupName Field Functions 
      bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
      void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
      inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
      inline Apps& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


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


      // authorizedUserCount Field Functions 
      bool hasAuthorizedUserCount() const { return this->authorizedUserCount_ != nullptr;};
      void deleteAuthorizedUserCount() { this->authorizedUserCount_ = nullptr;};
      inline int32_t getAuthorizedUserCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserCount_, 0) };
      inline Apps& setAuthorizedUserCount(int32_t authorizedUserCount) { DARABONBA_PTR_SET_VALUE(authorizedUserCount_, authorizedUserCount) };


    protected:
      // The access URL of the application icon.
      shared_ptr<string> appIcon_ {};
      // The application ID. When you invoke the [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) operation to grant authorization to a user for this application, pass this value together with `AppInstanceGroupId`.
      shared_ptr<string> appId_ {};
      // The ID of the published delivery group to which the application belongs.
      shared_ptr<string> appInstanceGroupId_ {};
      // The name of the published delivery group to which the application belongs.
      shared_ptr<string> appInstanceGroupName_ {};
      // The application name.
      shared_ptr<string> appName_ {};
      // The application version number.
      shared_ptr<string> appVersion_ {};
      // The application version name, which is the name set for this version when the application is published.
      shared_ptr<string> appVersionName_ {};
      // The number of users currently authorized for this application on a per-application basis within the associated delivery group. Only users authorized on a per-application basis through [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) are counted. If no users are authorized on a per-application basis, `0` is returned.
      shared_ptr<int32_t> authorizedUserCount_ {};
    };

    virtual bool empty() const override { return this->apps_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<ListPublishedAppsResponseBody::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<ListPublishedAppsResponseBody::Apps>) };
    inline vector<ListPublishedAppsResponseBody::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<ListPublishedAppsResponseBody::Apps>) };
    inline ListPublishedAppsResponseBody& setApps(const vector<ListPublishedAppsResponseBody::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline ListPublishedAppsResponseBody& setApps(vector<ListPublishedAppsResponseBody::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPublishedAppsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishedAppsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishedAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPublishedAppsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of application records on the current page. Each record corresponds to a deployed application in a published delivery group, sorted in descending order of the creation time of the associated delivery group. If no matching results are found or the requested page exceeds the result range, an empty list is returned.
    shared_ptr<vector<ListPublishedAppsResponseBody::Apps>> apps_ {};
    // The page number specified in the current request.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page specified in the current request. This value does not represent the actual number of records returned on the current page. The actual number on the current page may be less than this value.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the current request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
    // The total number of records that meet all filter conditions. The count is based on the "delivery group + application" combination. If the same application appears in multiple published delivery groups, it is counted separately. This value is not the number of records returned on the current page. If no matching results are found, the value is `0`.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
