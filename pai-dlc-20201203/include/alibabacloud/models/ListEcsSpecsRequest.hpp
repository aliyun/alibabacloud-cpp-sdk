// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSSPECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTECSSPECSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListEcsSpecsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsSpecsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsSpecsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListEcsSpecsRequest() = default ;
    ListEcsSpecsRequest(const ListEcsSpecsRequest &) = default ;
    ListEcsSpecsRequest(ListEcsSpecsRequest &&) = default ;
    ListEcsSpecsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsSpecsRequest() = default ;
    ListEcsSpecsRequest& operator=(const ListEcsSpecsRequest &) = default ;
    ListEcsSpecsRequest& operator=(ListEcsSpecsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && return this->instanceTypes_ == nullptr && return this->order_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->resourceType_ == nullptr
        && return this->sortBy_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListEcsSpecsRequest& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline string instanceTypes() const { DARABONBA_PTR_GET_DEFAULT(instanceTypes_, "") };
    inline ListEcsSpecsRequest& setInstanceTypes(string instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListEcsSpecsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEcsSpecsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEcsSpecsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListEcsSpecsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListEcsSpecsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // Filter by accelerator type. Valid values:
    // 
    // *   CPU
    // *   GPU
    std::shared_ptr<string> acceleratorType_ = nullptr;
    // The instance types to query. Separate the types with commas (,).
    std::shared_ptr<string> instanceTypes_ = nullptr;
    // The sorting order. Valid values:
    // 
    // *   desc: descending order.
    // *   asc: ascending order.
    std::shared_ptr<string> order_ = nullptr;
    // The number of the page to query. The start value is 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the resource. Valid values:
    // 
    // *   ECS
    // *   Lingjun
    std::shared_ptr<string> resourceType_ = nullptr;
    // The field based on which the results are sorted. Valid values:
    // 
    // *   CPU
    // *   GPU
    // *   Memory
    // *   GmtCreateTime
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
