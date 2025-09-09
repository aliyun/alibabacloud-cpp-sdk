// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchCloudGtmAddressPoolsResponseBodyAddressPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmAddressPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPools, addressPools_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    SearchCloudGtmAddressPoolsResponseBody() = default ;
    SearchCloudGtmAddressPoolsResponseBody(const SearchCloudGtmAddressPoolsResponseBody &) = default ;
    SearchCloudGtmAddressPoolsResponseBody(SearchCloudGtmAddressPoolsResponseBody &&) = default ;
    SearchCloudGtmAddressPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmAddressPoolsResponseBody() = default ;
    SearchCloudGtmAddressPoolsResponseBody& operator=(const SearchCloudGtmAddressPoolsResponseBody &) = default ;
    SearchCloudGtmAddressPoolsResponseBody& operator=(SearchCloudGtmAddressPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressPools_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalItems_ != nullptr && this->totalPages_ != nullptr; };
    // addressPools Field Functions 
    bool hasAddressPools() const { return this->addressPools_ != nullptr;};
    void deleteAddressPools() { this->addressPools_ = nullptr;};
    inline const SearchCloudGtmAddressPoolsResponseBodyAddressPools & addressPools() const { DARABONBA_PTR_GET_CONST(addressPools_, SearchCloudGtmAddressPoolsResponseBodyAddressPools) };
    inline SearchCloudGtmAddressPoolsResponseBodyAddressPools addressPools() { DARABONBA_PTR_GET(addressPools_, SearchCloudGtmAddressPoolsResponseBodyAddressPools) };
    inline SearchCloudGtmAddressPoolsResponseBody& setAddressPools(const SearchCloudGtmAddressPoolsResponseBodyAddressPools & addressPools) { DARABONBA_PTR_SET_VALUE(addressPools_, addressPools) };
    inline SearchCloudGtmAddressPoolsResponseBody& setAddressPools(SearchCloudGtmAddressPoolsResponseBodyAddressPools && addressPools) { DARABONBA_PTR_SET_RVALUE(addressPools_, addressPools) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCloudGtmAddressPoolsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCloudGtmAddressPoolsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchCloudGtmAddressPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchCloudGtmAddressPoolsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchCloudGtmAddressPoolsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The address pools.
    std::shared_ptr<SearchCloudGtmAddressPoolsResponseBodyAddressPools> addressPools_ = nullptr;
    // Current page number, starting from 1, default is 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of rows per page when paginating queries, with a maximum value of 100 and a default of 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Unique request identification code.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of address pools matching the query conditions.
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
