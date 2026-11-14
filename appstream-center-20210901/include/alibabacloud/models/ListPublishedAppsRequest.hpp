// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListPublishedAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ExcludeUserId, excludeUserId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ExcludeUserId, excludeUserId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListPublishedAppsRequest() = default ;
    ListPublishedAppsRequest(const ListPublishedAppsRequest &) = default ;
    ListPublishedAppsRequest(ListPublishedAppsRequest &&) = default ;
    ListPublishedAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAppsRequest() = default ;
    ListPublishedAppsRequest& operator=(const ListPublishedAppsRequest &) = default ;
    ListPublishedAppsRequest& operator=(ListPublishedAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupName_ == nullptr && this->appName_ == nullptr && this->excludeUserId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->productType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListPublishedAppsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListPublishedAppsRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ListPublishedAppsRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListPublishedAppsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // excludeUserId Field Functions 
    bool hasExcludeUserId() const { return this->excludeUserId_ != nullptr;};
    void deleteExcludeUserId() { this->excludeUserId_ = nullptr;};
    inline string getExcludeUserId() const { DARABONBA_PTR_GET_DEFAULT(excludeUserId_, "") };
    inline ListPublishedAppsRequest& setExcludeUserId(string excludeUserId) { DARABONBA_PTR_SET_VALUE(excludeUserId_, excludeUserId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPublishedAppsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishedAppsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListPublishedAppsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the application used for filtering. Substring matching is supported. You can pass the complete ID or a continuous segment of it. If this parameter is not specified or an empty string is passed, filtering is not performed based on the application ID. If this parameter and `AppName` are specified at the same time, both conditions must be met by the same application.
    shared_ptr<string> appId_ {};
    // The ID of the delivery group used for filtering. Substring matching is supported. You can pass the complete ID or a continuous segment of it. If this parameter is not specified or an empty string is passed, filtering is not performed based on the delivery group ID. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID. This parameter can be used together with other filter conditions, and all conditions must be met.
    shared_ptr<string> appInstanceGroupId_ {};
    // The name of the delivery group used for filtering. Substring matching is supported. For example, if you pass `Office applications`, delivery groups whose names contain this text are matched. If this parameter is not specified or an empty string is passed, filtering is not performed based on the delivery group name. If this parameter and the delivery group ID are specified at the same time, both conditions must be met.
    shared_ptr<string> appInstanceGroupName_ {};
    // The name of the application used for filtering. Substring matching is supported. For example, if you pass `Office applications`, applications whose names contain this text are matched. If this parameter is not specified or an empty string is passed, filtering is not performed based on the application name. If this parameter and `AppId` are specified at the same time, both conditions must be met by the same application.
    shared_ptr<string> appName_ {};
    // The username to be excluded. Exact matching is performed based on the full username, such as `alice`. If this parameter is specified, applications that have been authorized for this user on a per-application basis through [AuthorizeUsersForApp](~~AuthorizeUsersForApp~~) are not returned. This can be used to find applications that can still be authorized for the user. If this parameter is not specified or an empty string is passed, filtering is not performed based on user authorization.
    // 
    // **Access permissions obtained through overall delivery group authorization or user groups are not evaluated by this condition.** Do not equate the returned results with a list of applications that the user has absolutely no access to.
    shared_ptr<string> excludeUserId_ {};
    // The page number. This parameter is required. Start the query from page `1` and use it in conjunction with `PageSize`. Keep other filter conditions unchanged when querying subsequent pages. If the value is invalid, the error code `InvalidParameter.PageNumber` is returned.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of application records to return per page. This parameter is required. Valid values: `1` to `100`. If the value is out of range, the error code `InvalidParameter.PageSize` is returned.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. This parameter is required and is not case-sensitive. Only applications in published delivery groups of this product type are returned. If an unrecognized value is passed, the error code `InvalidParameter.ProductType` is returned. Filtering and statistics related to per-application authorization (`ExcludeUserId` and `AuthorizedUserCount`) are primarily used in WUYING Cloud App scenarios.
    // 
    // Valid values:
    // 
    // - `CloudApp`: WUYING Cloud App.
    // - `CloudBrowser`: Cloud browser.
    // - `WuyingServer`: Enterprise Edition workstation.
    // - `WuyingWorkstation`: Personal Edition Linggou container workstation.
    // - `WuyingWorkstationTeam`: Team Edition Linggou container workstation.
    // - `WuyingWorkstationBusiness`: Dedicated Edition Linggou container workstation.
    // - `AndroidCloud`: Cloud phone.
    // - `AIAgent`: AgentBay (AI agent).
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
