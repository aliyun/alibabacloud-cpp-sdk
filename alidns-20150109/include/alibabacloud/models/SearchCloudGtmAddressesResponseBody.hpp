// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchCloudGtmAddressesResponseBodyAddresses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    SearchCloudGtmAddressesResponseBody() = default ;
    SearchCloudGtmAddressesResponseBody(const SearchCloudGtmAddressesResponseBody &) = default ;
    SearchCloudGtmAddressesResponseBody(SearchCloudGtmAddressesResponseBody &&) = default ;
    SearchCloudGtmAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmAddressesResponseBody() = default ;
    SearchCloudGtmAddressesResponseBody& operator=(const SearchCloudGtmAddressesResponseBody &) = default ;
    SearchCloudGtmAddressesResponseBody& operator=(SearchCloudGtmAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addresses_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalItems_ != nullptr && this->totalPages_ != nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const SearchCloudGtmAddressesResponseBodyAddresses & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, SearchCloudGtmAddressesResponseBodyAddresses) };
    inline SearchCloudGtmAddressesResponseBodyAddresses addresses() { DARABONBA_PTR_GET(addresses_, SearchCloudGtmAddressesResponseBodyAddresses) };
    inline SearchCloudGtmAddressesResponseBody& setAddresses(const SearchCloudGtmAddressesResponseBodyAddresses & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline SearchCloudGtmAddressesResponseBody& setAddresses(SearchCloudGtmAddressesResponseBodyAddresses && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCloudGtmAddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCloudGtmAddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchCloudGtmAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchCloudGtmAddressesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchCloudGtmAddressesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The addresses.
    std::shared_ptr<SearchCloudGtmAddressesResponseBodyAddresses> addresses_ = nullptr;
    // Current page number, starting from **1**, default is **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of rows per page when paginating queries, with a maximum value of **100** and a default of **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Unique request identification code.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of address entries that meet the query conditions.
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
