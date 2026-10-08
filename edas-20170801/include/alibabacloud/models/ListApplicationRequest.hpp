// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(LogicalRegionIdFilter, logicalRegionIdFilter_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionIdFilter, logicalRegionIdFilter_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListApplicationRequest() = default ;
    ListApplicationRequest(const ListApplicationRequest &) = default ;
    ListApplicationRequest(ListApplicationRequest &&) = default ;
    ListApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationRequest() = default ;
    ListApplicationRequest& operator=(const ListApplicationRequest &) = default ;
    ListApplicationRequest& operator=(ListApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->appName_ == nullptr && this->clusterId_ == nullptr && this->currentPage_ == nullptr && this->logicalRegionId_ == nullptr && this->logicalRegionIdFilter_ == nullptr
        && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline ListApplicationRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListApplicationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListApplicationRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string getLogicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline ListApplicationRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // logicalRegionIdFilter Field Functions 
    bool hasLogicalRegionIdFilter() const { return this->logicalRegionIdFilter_ != nullptr;};
    void deleteLogicalRegionIdFilter() { this->logicalRegionIdFilter_ = nullptr;};
    inline string getLogicalRegionIdFilter() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionIdFilter_, "") };
    inline ListApplicationRequest& setLogicalRegionIdFilter(string logicalRegionIdFilter) { DARABONBA_PTR_SET_VALUE(logicalRegionIdFilter_, logicalRegionIdFilter) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The list of application IDs.
    shared_ptr<string> appIds_ {};
    // Filters the application list by application name.
    shared_ptr<string> appName_ {};
    // Filters the application list by cluster.
    shared_ptr<string> clusterId_ {};
    // The number of the page to return in a paged query. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // Filters the application list by microservices namespace.
    shared_ptr<string> logicalRegionId_ {};
    // Filters applications by exact match of the microservices namespace.
    shared_ptr<string> logicalRegionIdFilter_ {};
    // The number of entries to return on each page in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // Filters the application list by resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
