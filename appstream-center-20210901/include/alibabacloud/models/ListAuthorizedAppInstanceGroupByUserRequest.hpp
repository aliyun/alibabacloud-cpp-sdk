// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDAPPINSTANCEGROUPBYUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDAPPINSTANCEGROUPBYUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAuthorizedAppInstanceGroupByUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedAppInstanceGroupByUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedAppInstanceGroupByUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListAuthorizedAppInstanceGroupByUserRequest() = default ;
    ListAuthorizedAppInstanceGroupByUserRequest(const ListAuthorizedAppInstanceGroupByUserRequest &) = default ;
    ListAuthorizedAppInstanceGroupByUserRequest(ListAuthorizedAppInstanceGroupByUserRequest &&) = default ;
    ListAuthorizedAppInstanceGroupByUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedAppInstanceGroupByUserRequest() = default ;
    ListAuthorizedAppInstanceGroupByUserRequest& operator=(const ListAuthorizedAppInstanceGroupByUserRequest &) = default ;
    ListAuthorizedAppInstanceGroupByUserRequest& operator=(ListAuthorizedAppInstanceGroupByUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupName_ == nullptr && this->appName_ == nullptr && this->endUserId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->productType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAuthorizedAppInstanceGroupByUserRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The application ID. Fuzzy matching is supported: delivery groups that contain a deployed application whose ID includes the specified string are returned. You can obtain the application ID from the Apps list returned by this operation.
    // 
    // If this parameter is not specified, no filtering by application ID is applied.
    shared_ptr<string> appId_ {};
    // The delivery group ID. Fuzzy matching is supported: delivery groups whose IDs contain the specified string are returned. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID.
    // 
    // If this parameter is not specified, no filtering by delivery group ID is applied.
    shared_ptr<string> appInstanceGroupId_ {};
    // The delivery group name. Fuzzy matching is supported. For example, if you set this parameter to `Office App`, delivery groups whose names contain `Office App` (such as `My Office App` or `Office App A`) are returned.
    // 
    // If this parameter is not specified, no filtering by delivery group name is applied.
    shared_ptr<string> appInstanceGroupName_ {};
    // The application name. Fuzzy matching is supported: delivery groups that contain a deployed application whose name includes the specified string are returned.
    // 
    // If this parameter is not specified, no filtering by application name is applied.
    shared_ptr<string> appName_ {};
    // The username. An **exact match** is performed on the username to query the delivery groups for which the user has been granted delivery group-level authorization.
    // 
    // > This parameter is required. If this parameter is not specified, the error code `InvalidParameter.UserId` is returned.
    // 
    // This parameter is required.
    shared_ptr<string> endUserId_ {};
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of delivery groups to return per page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. The value must match the product type of the delivery groups to query. Only delivery groups of the specified product type are returned.
    // 
    // Valid values:
    // 
    // - CloudApp: WUYING Cloud Application.
    // - CloudBrowser: cloud browser.
    // - WuyingServer: Enterprise Edition workstation.
    // - WuyingWorkstation: Personal Edition Lingjun container workstation.
    // - WuyingWorkstationTeam: Team Edition Lingjun container workstation.
    // - WuyingWorkstationBusiness: Dedicated Edition Lingjun container workstation.
    // - AndroidCloud: cloud phone.
    // - AIAgent: AgentBay (AI agent).
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
