// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIpv6GatewaysResponseBodyIpv6Gateways.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6GatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6GatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Gateways, ipv6Gateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6GatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Gateways, ipv6Gateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpv6GatewaysResponseBody() = default ;
    DescribeIpv6GatewaysResponseBody(const DescribeIpv6GatewaysResponseBody &) = default ;
    DescribeIpv6GatewaysResponseBody(DescribeIpv6GatewaysResponseBody &&) = default ;
    DescribeIpv6GatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6GatewaysResponseBody() = default ;
    DescribeIpv6GatewaysResponseBody& operator=(const DescribeIpv6GatewaysResponseBody &) = default ;
    DescribeIpv6GatewaysResponseBody& operator=(DescribeIpv6GatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6Gateways_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // ipv6Gateways Field Functions 
    bool hasIpv6Gateways() const { return this->ipv6Gateways_ != nullptr;};
    void deleteIpv6Gateways() { this->ipv6Gateways_ = nullptr;};
    inline const DescribeIpv6GatewaysResponseBodyIpv6Gateways & ipv6Gateways() const { DARABONBA_PTR_GET_CONST(ipv6Gateways_, DescribeIpv6GatewaysResponseBodyIpv6Gateways) };
    inline DescribeIpv6GatewaysResponseBodyIpv6Gateways ipv6Gateways() { DARABONBA_PTR_GET(ipv6Gateways_, DescribeIpv6GatewaysResponseBodyIpv6Gateways) };
    inline DescribeIpv6GatewaysResponseBody& setIpv6Gateways(const DescribeIpv6GatewaysResponseBodyIpv6Gateways & ipv6Gateways) { DARABONBA_PTR_SET_VALUE(ipv6Gateways_, ipv6Gateways) };
    inline DescribeIpv6GatewaysResponseBody& setIpv6Gateways(DescribeIpv6GatewaysResponseBodyIpv6Gateways && ipv6Gateways) { DARABONBA_PTR_SET_RVALUE(ipv6Gateways_, ipv6Gateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpv6GatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpv6GatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpv6GatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpv6GatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the IPv6 gateway.
    std::shared_ptr<DescribeIpv6GatewaysResponseBodyIpv6Gateways> ipv6Gateways_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
