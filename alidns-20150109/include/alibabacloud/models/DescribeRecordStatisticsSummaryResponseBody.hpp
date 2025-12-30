// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYRESPONSEBODY_HPP_
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
  class DescribeRecordStatisticsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeRecordStatisticsSummaryResponseBody() = default ;
    DescribeRecordStatisticsSummaryResponseBody(const DescribeRecordStatisticsSummaryResponseBody &) = default ;
    DescribeRecordStatisticsSummaryResponseBody(DescribeRecordStatisticsSummaryResponseBody &&) = default ;
    DescribeRecordStatisticsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsSummaryResponseBody() = default ;
    DescribeRecordStatisticsSummaryResponseBody& operator=(const DescribeRecordStatisticsSummaryResponseBody &) = default ;
    DescribeRecordStatisticsSummaryResponseBody& operator=(DescribeRecordStatisticsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
        DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
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
      class Statistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
        };
        friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
        };
        Statistic() = default ;
        Statistic(const Statistic &) = default ;
        Statistic(Statistic &&) = default ;
        Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistic() = default ;
        Statistic& operator=(const Statistic &) = default ;
        Statistic& operator=(Statistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->subDomain_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline Statistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // subDomain Field Functions 
        bool hasSubDomain() const { return this->subDomain_ != nullptr;};
        void deleteSubDomain() { this->subDomain_ = nullptr;};
        inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
        inline Statistic& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


      protected:
        // The number of DNS requests.
        shared_ptr<int64_t> count_ {};
        // The subdomain.
        shared_ptr<string> subDomain_ {};
      };

      virtual bool empty() const override { return this->statistic_ == nullptr; };
      // statistic Field Functions 
      bool hasStatistic() const { return this->statistic_ != nullptr;};
      void deleteStatistic() { this->statistic_ = nullptr;};
      inline const vector<Statistics::Statistic> & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<Statistics::Statistic>) };
      inline vector<Statistics::Statistic> getStatistic() { DARABONBA_PTR_GET(statistic_, vector<Statistics::Statistic>) };
      inline Statistics& setStatistic(const vector<Statistics::Statistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
      inline Statistics& setStatistic(vector<Statistics::Statistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    protected:
      shared_ptr<vector<Statistics::Statistic>> statistic_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->statistics_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRecordStatisticsSummaryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRecordStatisticsSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordStatisticsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const DescribeRecordStatisticsSummaryResponseBody::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, DescribeRecordStatisticsSummaryResponseBody::Statistics) };
    inline DescribeRecordStatisticsSummaryResponseBody::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, DescribeRecordStatisticsSummaryResponseBody::Statistics) };
    inline DescribeRecordStatisticsSummaryResponseBody& setStatistics(const DescribeRecordStatisticsSummaryResponseBody::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeRecordStatisticsSummaryResponseBody& setStatistics(DescribeRecordStatisticsSummaryResponseBody::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeRecordStatisticsSummaryResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeRecordStatisticsSummaryResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The DNS requests.
    shared_ptr<DescribeRecordStatisticsSummaryResponseBody::Statistics> statistics_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
