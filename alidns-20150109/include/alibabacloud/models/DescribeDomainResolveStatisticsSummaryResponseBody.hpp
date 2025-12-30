// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVESTATISTICSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVESTATISTICSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainResolveStatisticsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResolveStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResolveStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeDomainResolveStatisticsSummaryResponseBody() = default ;
    DescribeDomainResolveStatisticsSummaryResponseBody(const DescribeDomainResolveStatisticsSummaryResponseBody &) = default ;
    DescribeDomainResolveStatisticsSummaryResponseBody(DescribeDomainResolveStatisticsSummaryResponseBody &&) = default ;
    DescribeDomainResolveStatisticsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResolveStatisticsSummaryResponseBody() = default ;
    DescribeDomainResolveStatisticsSummaryResponseBody& operator=(const DescribeDomainResolveStatisticsSummaryResponseBody &) = default ;
    DescribeDomainResolveStatisticsSummaryResponseBody& operator=(DescribeDomainResolveStatisticsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      };
      Statistics() = default ;
      Statistics(const Statistics &) = default ;
      Statistics(Statistics &&) = default ;
      Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistics() = default ;
      Statistics& operator=(const Statistics &) = default ;
      Statistics& operator=(Statistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->domainName_ == nullptr && this->domainType_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline Statistics& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Statistics& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline Statistics& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    protected:
      // The number of DNS requests.
      shared_ptr<string> count_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
      // The type of the domain name. Valid values:
      // 
      // *   PUBLIC: hosted public domain name
      // *   CACHE: cache-accelerated domain name
      shared_ptr<string> domainType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->statistics_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDomainResolveStatisticsSummaryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDomainResolveStatisticsSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainResolveStatisticsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<DescribeDomainResolveStatisticsSummaryResponseBody::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<DescribeDomainResolveStatisticsSummaryResponseBody::Statistics>) };
    inline vector<DescribeDomainResolveStatisticsSummaryResponseBody::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<DescribeDomainResolveStatisticsSummaryResponseBody::Statistics>) };
    inline DescribeDomainResolveStatisticsSummaryResponseBody& setStatistics(const vector<DescribeDomainResolveStatisticsSummaryResponseBody::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeDomainResolveStatisticsSummaryResponseBody& setStatistics(vector<DescribeDomainResolveStatisticsSummaryResponseBody::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeDomainResolveStatisticsSummaryResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeDomainResolveStatisticsSummaryResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **100**. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics.
    shared_ptr<vector<DescribeDomainResolveStatisticsSummaryResponseBody::Statistics>> statistics_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
