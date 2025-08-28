// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIpv6AddressesResponseBodyIpv6Addresses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6AddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6AddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6AddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpv6AddressesResponseBody() = default ;
    DescribeIpv6AddressesResponseBody(const DescribeIpv6AddressesResponseBody &) = default ;
    DescribeIpv6AddressesResponseBody(DescribeIpv6AddressesResponseBody &&) = default ;
    DescribeIpv6AddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6AddressesResponseBody() = default ;
    DescribeIpv6AddressesResponseBody& operator=(const DescribeIpv6AddressesResponseBody &) = default ;
    DescribeIpv6AddressesResponseBody& operator=(DescribeIpv6AddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Addresses_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ipv6Addresses Field Functions 
    bool hasIpv6Addresses() const { return this->ipv6Addresses_ != nullptr;};
    void deleteIpv6Addresses() { this->ipv6Addresses_ = nullptr;};
    inline const DescribeIpv6AddressesResponseBodyIpv6Addresses & ipv6Addresses() const { DARABONBA_PTR_GET_CONST(ipv6Addresses_, DescribeIpv6AddressesResponseBodyIpv6Addresses) };
    inline DescribeIpv6AddressesResponseBodyIpv6Addresses ipv6Addresses() { DARABONBA_PTR_GET(ipv6Addresses_, DescribeIpv6AddressesResponseBodyIpv6Addresses) };
    inline DescribeIpv6AddressesResponseBody& setIpv6Addresses(const DescribeIpv6AddressesResponseBodyIpv6Addresses & ipv6Addresses) { DARABONBA_PTR_SET_VALUE(ipv6Addresses_, ipv6Addresses) };
    inline DescribeIpv6AddressesResponseBody& setIpv6Addresses(DescribeIpv6AddressesResponseBodyIpv6Addresses && ipv6Addresses) { DARABONBA_PTR_SET_RVALUE(ipv6Addresses_, ipv6Addresses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpv6AddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpv6AddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpv6AddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpv6AddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the IPv6 address.
    std::shared_ptr<DescribeIpv6AddressesResponseBodyIpv6Addresses> ipv6Addresses_ = nullptr;
    // The page number of the returned page. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
