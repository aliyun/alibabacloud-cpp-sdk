// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDNSSLBSubDomainsResponseBodySlbSubDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDNSSLBSubDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDNSSLBSubDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlbSubDomains, slbSubDomains_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDNSSLBSubDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlbSubDomains, slbSubDomains_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDNSSLBSubDomainsResponseBody() = default ;
    DescribeDNSSLBSubDomainsResponseBody(const DescribeDNSSLBSubDomainsResponseBody &) = default ;
    DescribeDNSSLBSubDomainsResponseBody(DescribeDNSSLBSubDomainsResponseBody &&) = default ;
    DescribeDNSSLBSubDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDNSSLBSubDomainsResponseBody() = default ;
    DescribeDNSSLBSubDomainsResponseBody& operator=(const DescribeDNSSLBSubDomainsResponseBody &) = default ;
    DescribeDNSSLBSubDomainsResponseBody& operator=(DescribeDNSSLBSubDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->slbSubDomains_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDNSSLBSubDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDNSSLBSubDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDNSSLBSubDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slbSubDomains Field Functions 
    bool hasSlbSubDomains() const { return this->slbSubDomains_ != nullptr;};
    void deleteSlbSubDomains() { this->slbSubDomains_ = nullptr;};
    inline const DescribeDNSSLBSubDomainsResponseBodySlbSubDomains & slbSubDomains() const { DARABONBA_PTR_GET_CONST(slbSubDomains_, DescribeDNSSLBSubDomainsResponseBodySlbSubDomains) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomains slbSubDomains() { DARABONBA_PTR_GET(slbSubDomains_, DescribeDNSSLBSubDomainsResponseBodySlbSubDomains) };
    inline DescribeDNSSLBSubDomainsResponseBody& setSlbSubDomains(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomains & slbSubDomains) { DARABONBA_PTR_SET_VALUE(slbSubDomains_, slbSubDomains) };
    inline DescribeDNSSLBSubDomainsResponseBody& setSlbSubDomains(DescribeDNSSLBSubDomainsResponseBodySlbSubDomains && slbSubDomains) { DARABONBA_PTR_SET_RVALUE(slbSubDomains_, slbSubDomains) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDNSSLBSubDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The subdomains for which weighted round-robin is enabled.
    std::shared_ptr<DescribeDNSSLBSubDomainsResponseBodySlbSubDomains> slbSubDomains_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
