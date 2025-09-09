// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchCloudGtmInstancesResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    SearchCloudGtmInstancesResponseBody() = default ;
    SearchCloudGtmInstancesResponseBody(const SearchCloudGtmInstancesResponseBody &) = default ;
    SearchCloudGtmInstancesResponseBody(SearchCloudGtmInstancesResponseBody &&) = default ;
    SearchCloudGtmInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmInstancesResponseBody() = default ;
    SearchCloudGtmInstancesResponseBody& operator=(const SearchCloudGtmInstancesResponseBody &) = default ;
    SearchCloudGtmInstancesResponseBody& operator=(SearchCloudGtmInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalItems_ != nullptr && this->totalPages_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const SearchCloudGtmInstancesResponseBodyInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, SearchCloudGtmInstancesResponseBodyInstances) };
    inline SearchCloudGtmInstancesResponseBodyInstances instances() { DARABONBA_PTR_GET(instances_, SearchCloudGtmInstancesResponseBodyInstances) };
    inline SearchCloudGtmInstancesResponseBody& setInstances(const SearchCloudGtmInstancesResponseBodyInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline SearchCloudGtmInstancesResponseBody& setInstances(SearchCloudGtmInstancesResponseBodyInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCloudGtmInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCloudGtmInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchCloudGtmInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchCloudGtmInstancesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchCloudGtmInstancesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The instances.
    std::shared_ptr<SearchCloudGtmInstancesResponseBodyInstances> instances_ = nullptr;
    // Current page number, starting at **1**, default is **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of rows per page when paginating queries, with a maximum value of 100 and a default of 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Unique request identification code.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of instances found from the search.
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
