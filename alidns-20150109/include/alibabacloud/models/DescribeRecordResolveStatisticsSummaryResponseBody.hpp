// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDRESOLVESTATISTICSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDRESOLVESTATISTICSSUMMARYRESPONSEBODY_HPP_
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
  class DescribeRecordResolveStatisticsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordResolveStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordResolveStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeRecordResolveStatisticsSummaryResponseBody() = default ;
    DescribeRecordResolveStatisticsSummaryResponseBody(const DescribeRecordResolveStatisticsSummaryResponseBody &) = default ;
    DescribeRecordResolveStatisticsSummaryResponseBody(DescribeRecordResolveStatisticsSummaryResponseBody &&) = default ;
    DescribeRecordResolveStatisticsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordResolveStatisticsSummaryResponseBody() = default ;
    DescribeRecordResolveStatisticsSummaryResponseBody& operator=(const DescribeRecordResolveStatisticsSummaryResponseBody &) = default ;
    DescribeRecordResolveStatisticsSummaryResponseBody& operator=(DescribeRecordResolveStatisticsSummaryResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
        DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
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
        && this->domainName_ == nullptr && this->domainType_ == nullptr && this->subDomain_ == nullptr; };
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


      // subDomain Field Functions 
      bool hasSubDomain() const { return this->subDomain_ != nullptr;};
      void deleteSubDomain() { this->subDomain_ = nullptr;};
      inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
      inline Statistics& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    protected:
      // The number of DNS requests.
      shared_ptr<string> count_ {};
      // The subdomain name.
      shared_ptr<string> domainName_ {};
      // The type of the domain name. The parameter value is not case-sensitive. Valid values:
      // 
      // *   PUBLIC (default): hosted public domain name
      // *   CACHE: cache-accelerated domain name
      shared_ptr<string> domainType_ {};
      // The subdomain.
      shared_ptr<string> subDomain_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->statistics_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRecordResolveStatisticsSummaryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRecordResolveStatisticsSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordResolveStatisticsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<DescribeRecordResolveStatisticsSummaryResponseBody::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<DescribeRecordResolveStatisticsSummaryResponseBody::Statistics>) };
    inline vector<DescribeRecordResolveStatisticsSummaryResponseBody::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<DescribeRecordResolveStatisticsSummaryResponseBody::Statistics>) };
    inline DescribeRecordResolveStatisticsSummaryResponseBody& setStatistics(const vector<DescribeRecordResolveStatisticsSummaryResponseBody::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeRecordResolveStatisticsSummaryResponseBody& setStatistics(vector<DescribeRecordResolveStatisticsSummaryResponseBody::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeRecordResolveStatisticsSummaryResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeRecordResolveStatisticsSummaryResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 500**. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics.
    shared_ptr<vector<DescribeRecordResolveStatisticsSummaryResponseBody::Statistics>> statistics_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
