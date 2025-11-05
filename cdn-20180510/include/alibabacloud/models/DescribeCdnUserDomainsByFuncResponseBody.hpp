// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnUserDomainsByFuncResponseBodyDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserDomainsByFuncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserDomainsByFuncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserDomainsByFuncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCdnUserDomainsByFuncResponseBody() = default ;
    DescribeCdnUserDomainsByFuncResponseBody(const DescribeCdnUserDomainsByFuncResponseBody &) = default ;
    DescribeCdnUserDomainsByFuncResponseBody(DescribeCdnUserDomainsByFuncResponseBody &&) = default ;
    DescribeCdnUserDomainsByFuncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserDomainsByFuncResponseBody() = default ;
    DescribeCdnUserDomainsByFuncResponseBody& operator=(const DescribeCdnUserDomainsByFuncResponseBody &) = default ;
    DescribeCdnUserDomainsByFuncResponseBody& operator=(DescribeCdnUserDomainsByFuncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const DescribeCdnUserDomainsByFuncResponseBodyDomains & domains() const { DARABONBA_PTR_GET_CONST(domains_, DescribeCdnUserDomainsByFuncResponseBodyDomains) };
    inline DescribeCdnUserDomainsByFuncResponseBodyDomains domains() { DARABONBA_PTR_GET(domains_, DescribeCdnUserDomainsByFuncResponseBodyDomains) };
    inline DescribeCdnUserDomainsByFuncResponseBody& setDomains(const DescribeCdnUserDomainsByFuncResponseBodyDomains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeCdnUserDomainsByFuncResponseBody& setDomains(DescribeCdnUserDomainsByFuncResponseBodyDomains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCdnUserDomainsByFuncResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCdnUserDomainsByFuncResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnUserDomainsByFuncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCdnUserDomainsByFuncResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configurations of the accelerated domain name.
    std::shared_ptr<DescribeCdnUserDomainsByFuncResponseBodyDomains> domains_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
