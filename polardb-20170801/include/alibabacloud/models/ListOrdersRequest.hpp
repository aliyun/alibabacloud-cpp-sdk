// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListOrdersRequest() = default ;
    ListOrdersRequest(const ListOrdersRequest &) = default ;
    ListOrdersRequest(ListOrdersRequest &&) = default ;
    ListOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrdersRequest() = default ;
    ListOrdersRequest& operator=(const ListOrdersRequest &) = default ;
    ListOrdersRequest& operator=(ListOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderStatus_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListOrdersRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOrdersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOrdersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOrdersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline ListOrdersRequest& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOrdersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListOrdersRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOrdersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListOrdersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The [edition](https://help.aliyun.com/document_detail/183258.html) of the cluster. Valid values:
    // 
    // - **Normal**: Cluster Edition
    // 
    // - **Basic**: single node
    // 
    // - **Archive**: X-Engine
    // 
    // - **NormalMultimaster**: Multi-master Cluster Edition
    // 
    // - **SENormal**: Standard Edition
    // 
    // > * The single node edition is not supported on PolarDB for PostgreSQL clusters that run PostgreSQL 11.
    // >
    // > * The Standard Edition is supported on PolarDB for MySQL clusters that run MySQL 8.0 or 5.7, and on PolarDB for PostgreSQL clusters that run PostgreSQL 14.
    // >
    // > * PolarDB for MySQL clusters that run MySQL 8.0 support X-Engine and the Multi-master Cluster Edition.
    shared_ptr<string> category_ {};
    // The ID of the current instance.
    shared_ptr<string> instanceId_ {};
    // The maximum number of entries to return for the current request. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. If the query results are not returned in a single call, this token is returned. Use this token in a subsequent call to retrieve the remaining results.
    shared_ptr<string> nextToken_ {};
    // The status of the order.
    // 
    // - **pending**: The task is waiting to start.
    // 
    // - **create**: The order is placed and is being processed.
    // 
    // - **fail**: The instance failed to be created.
    // 
    // - **cancel**: The order is canceled.
    // 
    // - **success**: The instance is created.
    shared_ptr<string> orderStatus_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    // 
    // Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
    // The region ID.
    // 
    // > Call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to view the details of regions.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
