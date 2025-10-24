// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
    };
    ListResourcesRequest() = default ;
    ListResourcesRequest(const ListResourcesRequest &) = default ;
    ListResourcesRequest(ListResourcesRequest &&) = default ;
    ListResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesRequest() = default ;
    ListResourcesRequest& operator=(const ListResourcesRequest &) = default ;
    ListResourcesRequest& operator=(ListResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->order_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceStatus_ == nullptr
        && return this->resourceType_ == nullptr && return this->sort_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListResourcesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourcesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourcesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline ListResourcesRequest& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListResourcesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


  protected:
    // The sorting order. Valid values:
    // 
    // *   Desc
    // *   Asc
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group. You can call the [CreateResource](https://help.aliyun.com/document_detail/412111.html) operation to query the ID of the resource group.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource group. You can call the [CreateResource](https://help.aliyun.com/document_detail/412111.html) operation to query the name of the resource group.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource group status.
    std::shared_ptr<string> resourceStatus_ = nullptr;
    // The type of the resource group. Valid values:
    // 
    // *   Dedicated: the dedicated resource group.
    // *   SelfManaged: the self-managed resource group.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The condition by which the results are sorted. By default, the query results are sorted by the timestamp type in descending order.
    // 
    // Valid values:
    // 
    // *   PrePaidInstanceCount
    // *   CpuCount
    // *   Memory
    // *   CreateTime
    // *   PostPaidInstanceCount
    // *   MemoryUsed
    // *   GpuCount
    // *   GpuUsed
    // *   CpuUsed
    // *   ServiceCount
    std::shared_ptr<string> sort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
