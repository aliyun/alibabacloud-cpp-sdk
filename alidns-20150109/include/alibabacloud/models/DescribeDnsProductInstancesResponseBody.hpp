// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsProductInstancesResponseBodyDnsProducts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsProductInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnsProducts, dnsProducts_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsProductInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsProducts, dnsProducts_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDnsProductInstancesResponseBody() = default ;
    DescribeDnsProductInstancesResponseBody(const DescribeDnsProductInstancesResponseBody &) = default ;
    DescribeDnsProductInstancesResponseBody(DescribeDnsProductInstancesResponseBody &&) = default ;
    DescribeDnsProductInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsProductInstancesResponseBody() = default ;
    DescribeDnsProductInstancesResponseBody& operator=(const DescribeDnsProductInstancesResponseBody &) = default ;
    DescribeDnsProductInstancesResponseBody& operator=(DescribeDnsProductInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsProducts_ == nullptr
        && return this->domainType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // dnsProducts Field Functions 
    bool hasDnsProducts() const { return this->dnsProducts_ != nullptr;};
    void deleteDnsProducts() { this->dnsProducts_ = nullptr;};
    inline const DescribeDnsProductInstancesResponseBodyDnsProducts & dnsProducts() const { DARABONBA_PTR_GET_CONST(dnsProducts_, DescribeDnsProductInstancesResponseBodyDnsProducts) };
    inline DescribeDnsProductInstancesResponseBodyDnsProducts dnsProducts() { DARABONBA_PTR_GET(dnsProducts_, DescribeDnsProductInstancesResponseBodyDnsProducts) };
    inline DescribeDnsProductInstancesResponseBody& setDnsProducts(const DescribeDnsProductInstancesResponseBodyDnsProducts & dnsProducts) { DARABONBA_PTR_SET_VALUE(dnsProducts_, dnsProducts) };
    inline DescribeDnsProductInstancesResponseBody& setDnsProducts(DescribeDnsProductInstancesResponseBodyDnsProducts && dnsProducts) { DARABONBA_PTR_SET_RVALUE(dnsProducts_, dnsProducts) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDnsProductInstancesResponseBody& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDnsProductInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDnsProductInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsProductInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDnsProductInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The paid Alibaba Cloud DNS instances.
    std::shared_ptr<DescribeDnsProductInstancesResponseBodyDnsProducts> dnsProducts_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   PUBLIC (default): hosted public domain name
    // *   CACHE: cached public domain name
    std::shared_ptr<string> domainType_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of domain names.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
