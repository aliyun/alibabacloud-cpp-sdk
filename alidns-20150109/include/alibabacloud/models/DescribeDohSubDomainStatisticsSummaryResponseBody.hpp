// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESPONSEBODY_HPP_
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
  class DescribeDohSubDomainStatisticsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohSubDomainStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohSubDomainStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeDohSubDomainStatisticsSummaryResponseBody() = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody(const DescribeDohSubDomainStatisticsSummaryResponseBody &) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody(DescribeDohSubDomainStatisticsSummaryResponseBody &&) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohSubDomainStatisticsSummaryResponseBody() = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody& operator=(const DescribeDohSubDomainStatisticsSummaryResponseBody &) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody& operator=(DescribeDohSubDomainStatisticsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
        DARABONBA_PTR_TO_JSON(HttpCount, httpCount_);
        DARABONBA_PTR_TO_JSON(HttpsCount, httpsCount_);
        DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
        DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(V4HttpCount, v4HttpCount_);
        DARABONBA_PTR_TO_JSON(V4HttpsCount, v4HttpsCount_);
        DARABONBA_PTR_TO_JSON(V6HttpCount, v6HttpCount_);
        DARABONBA_PTR_TO_JSON(V6HttpsCount, v6HttpsCount_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(HttpCount, httpCount_);
        DARABONBA_PTR_FROM_JSON(HttpsCount, httpsCount_);
        DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
        DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(V4HttpCount, v4HttpCount_);
        DARABONBA_PTR_FROM_JSON(V4HttpsCount, v4HttpsCount_);
        DARABONBA_PTR_FROM_JSON(V6HttpCount, v6HttpCount_);
        DARABONBA_PTR_FROM_JSON(V6HttpsCount, v6HttpsCount_);
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
      virtual bool empty() const override { return this->httpCount_ == nullptr
        && this->httpsCount_ == nullptr && this->ipCount_ == nullptr && this->subDomain_ == nullptr && this->totalCount_ == nullptr && this->v4HttpCount_ == nullptr
        && this->v4HttpsCount_ == nullptr && this->v6HttpCount_ == nullptr && this->v6HttpsCount_ == nullptr; };
      // httpCount Field Functions 
      bool hasHttpCount() const { return this->httpCount_ != nullptr;};
      void deleteHttpCount() { this->httpCount_ = nullptr;};
      inline int64_t getHttpCount() const { DARABONBA_PTR_GET_DEFAULT(httpCount_, 0L) };
      inline Statistics& setHttpCount(int64_t httpCount) { DARABONBA_PTR_SET_VALUE(httpCount_, httpCount) };


      // httpsCount Field Functions 
      bool hasHttpsCount() const { return this->httpsCount_ != nullptr;};
      void deleteHttpsCount() { this->httpsCount_ = nullptr;};
      inline int64_t getHttpsCount() const { DARABONBA_PTR_GET_DEFAULT(httpsCount_, 0L) };
      inline Statistics& setHttpsCount(int64_t httpsCount) { DARABONBA_PTR_SET_VALUE(httpsCount_, httpsCount) };


      // ipCount Field Functions 
      bool hasIpCount() const { return this->ipCount_ != nullptr;};
      void deleteIpCount() { this->ipCount_ = nullptr;};
      inline int64_t getIpCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0L) };
      inline Statistics& setIpCount(int64_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


      // subDomain Field Functions 
      bool hasSubDomain() const { return this->subDomain_ != nullptr;};
      void deleteSubDomain() { this->subDomain_ = nullptr;};
      inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
      inline Statistics& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Statistics& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // v4HttpCount Field Functions 
      bool hasV4HttpCount() const { return this->v4HttpCount_ != nullptr;};
      void deleteV4HttpCount() { this->v4HttpCount_ = nullptr;};
      inline int64_t getV4HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpCount_, 0L) };
      inline Statistics& setV4HttpCount(int64_t v4HttpCount) { DARABONBA_PTR_SET_VALUE(v4HttpCount_, v4HttpCount) };


      // v4HttpsCount Field Functions 
      bool hasV4HttpsCount() const { return this->v4HttpsCount_ != nullptr;};
      void deleteV4HttpsCount() { this->v4HttpsCount_ = nullptr;};
      inline int64_t getV4HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpsCount_, 0L) };
      inline Statistics& setV4HttpsCount(int64_t v4HttpsCount) { DARABONBA_PTR_SET_VALUE(v4HttpsCount_, v4HttpsCount) };


      // v6HttpCount Field Functions 
      bool hasV6HttpCount() const { return this->v6HttpCount_ != nullptr;};
      void deleteV6HttpCount() { this->v6HttpCount_ = nullptr;};
      inline int64_t getV6HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpCount_, 0L) };
      inline Statistics& setV6HttpCount(int64_t v6HttpCount) { DARABONBA_PTR_SET_VALUE(v6HttpCount_, v6HttpCount) };


      // v6HttpsCount Field Functions 
      bool hasV6HttpsCount() const { return this->v6HttpsCount_ != nullptr;};
      void deleteV6HttpsCount() { this->v6HttpsCount_ = nullptr;};
      inline int64_t getV6HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpsCount_, 0L) };
      inline Statistics& setV6HttpsCount(int64_t v6HttpsCount) { DARABONBA_PTR_SET_VALUE(v6HttpsCount_, v6HttpsCount) };


    protected:
      // The number of HTTP requests.
      shared_ptr<int64_t> httpCount_ {};
      // The number of HTTPS requests.
      shared_ptr<int64_t> httpsCount_ {};
      // The number of IP addresses.
      shared_ptr<int64_t> ipCount_ {};
      // The subdomain.
      shared_ptr<string> subDomain_ {};
      // Total number of requests.
      shared_ptr<int64_t> totalCount_ {};
      // The number of IPv4-based HTTP requests.
      shared_ptr<int64_t> v4HttpCount_ {};
      // The number of IPv4-based HTTPS requests.
      shared_ptr<int64_t> v4HttpsCount_ {};
      // The number of IPv6-based HTTP requests.
      shared_ptr<int64_t> v6HttpCount_ {};
      // The number of IPv6-based HTTPS requests.
      shared_ptr<int64_t> v6HttpsCount_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->statistics_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<DescribeDohSubDomainStatisticsSummaryResponseBody::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<DescribeDohSubDomainStatisticsSummaryResponseBody::Statistics>) };
    inline vector<DescribeDohSubDomainStatisticsSummaryResponseBody::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<DescribeDohSubDomainStatisticsSummaryResponseBody::Statistics>) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setStatistics(const vector<DescribeDohSubDomainStatisticsSummaryResponseBody::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setStatistics(vector<DescribeDohSubDomainStatisticsSummaryResponseBody::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The statistics list.
    shared_ptr<vector<DescribeDohSubDomainStatisticsSummaryResponseBody::Statistics>> statistics_ {};
    // Total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // Total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
