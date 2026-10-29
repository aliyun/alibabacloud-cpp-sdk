// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListPublishedAppInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ExcludeUserId, excludeUserId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ExcludeUserId, excludeUserId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListPublishedAppInstanceGroupRequest() = default ;
    ListPublishedAppInstanceGroupRequest(const ListPublishedAppInstanceGroupRequest &) = default ;
    ListPublishedAppInstanceGroupRequest(ListPublishedAppInstanceGroupRequest &&) = default ;
    ListPublishedAppInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAppInstanceGroupRequest() = default ;
    ListPublishedAppInstanceGroupRequest& operator=(const ListPublishedAppInstanceGroupRequest &) = default ;
    ListPublishedAppInstanceGroupRequest& operator=(ListPublishedAppInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupName_ == nullptr && this->appName_ == nullptr && this->excludeUserId_ == nullptr && this->officeSiteId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListPublishedAppInstanceGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListPublishedAppInstanceGroupRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ListPublishedAppInstanceGroupRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListPublishedAppInstanceGroupRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // excludeUserId Field Functions 
    bool hasExcludeUserId() const { return this->excludeUserId_ != nullptr;};
    void deleteExcludeUserId() { this->excludeUserId_ = nullptr;};
    inline string getExcludeUserId() const { DARABONBA_PTR_GET_DEFAULT(excludeUserId_, "") };
    inline ListPublishedAppInstanceGroupRequest& setExcludeUserId(string excludeUserId) { DARABONBA_PTR_SET_VALUE(excludeUserId_, excludeUserId) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListPublishedAppInstanceGroupRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPublishedAppInstanceGroupRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishedAppInstanceGroupRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListPublishedAppInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the application used to filter delivery groups. Partial matching is supported. The delivery group must contain a deployed application that meets the condition. If this parameter is not specified or is set to an empty string, the results are not filtered by application ID. If this parameter is specified together with `AppName`, both conditions must be met by the same application.
    // 
    // This condition does not restrict the returned `Apps` list to the matched applications.
    shared_ptr<string> appId_ {};
    // The ID of the delivery group used for filtering. Partial matching is supported. You can pass the complete ID or a continuous segment of it. If this parameter is not specified or is set to an empty string, the results are not filtered by ID. This parameter can be used together with other filter conditions, and the results must meet all conditions.
    shared_ptr<string> appInstanceGroupId_ {};
    // The name of the delivery group used for filtering. Partial matching is supported. For example, if you pass `Office applications`, delivery groups whose names contain this text are matched. If this parameter is not specified or is set to an empty string, the results are not filtered by name. If this parameter is specified together with the delivery group ID, both the ID and the name must be matched.
    shared_ptr<string> appInstanceGroupName_ {};
    // The name of the application used to filter delivery groups. Partial matching is supported. The delivery group must contain a deployed application whose name contains the specified text. If this parameter is not specified or is set to an empty string, the results are not filtered by application name. If this parameter is specified together with `AppId`, both conditions must be met by the same application.
    // 
    // This condition does not restrict the returned `Apps` list to the matched applications.
    shared_ptr<string> appName_ {};
    // The username to be excluded based on existing authorizations. Exact match by full username is supported, such as `alice`. If this parameter is specified, delivery groups for which all applications have been directly authorized to the user are excluded. If this parameter is not specified or is set to an empty string, the results are not filtered by user authorization status.
    // 
    // **Authorizations for a single application or access permissions obtained through user groups are not fully evaluated by this condition.** Do not equate the returned results with a list of delivery groups to which the user has no access at all.
    shared_ptr<string> excludeUserId_ {};
    // The ID of the office network.
    shared_ptr<string> officeSiteId_ {};
    // The page number. This parameter is required. Start the query from page `1` and use it in conjunction with `PageSize`. Keep other filter conditions unchanged when querying subsequent pages.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of delivery groups to return per page. This parameter is required. Valid values: `1` to `100`. Explicitly specify this parameter and do not use the default values of other query operations.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. This parameter is required. The value must be the same as the product type of the delivery groups to be queried. Only published delivery groups of this product type are returned. If an unrecognized value is passed, a parameter error is returned.
    // 
    // Valid values:
    // 
    // - `CloudApp`: Wuying Cloud App.
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
