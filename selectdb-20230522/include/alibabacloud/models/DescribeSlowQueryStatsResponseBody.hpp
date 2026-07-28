// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeSlowQueryStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowQueryStatsResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(ByDatabase, byDatabase_);
      DARABONBA_ANY_TO_JSON(ByTimeBucket, byTimeBucket_);
      DARABONBA_ANY_TO_JSON(ByUser, byUser_);
      DARABONBA_ANY_TO_JSON(Percentiles, percentiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Summary, summary_);
      DARABONBA_ANY_TO_JSON(TopQueries, topQueries_);
      DARABONBA_ANY_TO_JSON(TopSqlDigests, topSqlDigests_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowQueryStatsResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(ByDatabase, byDatabase_);
      DARABONBA_ANY_FROM_JSON(ByTimeBucket, byTimeBucket_);
      DARABONBA_ANY_FROM_JSON(ByUser, byUser_);
      DARABONBA_ANY_FROM_JSON(Percentiles, percentiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Summary, summary_);
      DARABONBA_ANY_FROM_JSON(TopQueries, topQueries_);
      DARABONBA_ANY_FROM_JSON(TopSqlDigests, topSqlDigests_);
    };
    DescribeSlowQueryStatsResponseBody() = default ;
    DescribeSlowQueryStatsResponseBody(const DescribeSlowQueryStatsResponseBody &) = default ;
    DescribeSlowQueryStatsResponseBody(DescribeSlowQueryStatsResponseBody &&) = default ;
    DescribeSlowQueryStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowQueryStatsResponseBody() = default ;
    DescribeSlowQueryStatsResponseBody& operator=(const DescribeSlowQueryStatsResponseBody &) = default ;
    DescribeSlowQueryStatsResponseBody& operator=(DescribeSlowQueryStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byDatabase_ == nullptr
        && this->byTimeBucket_ == nullptr && this->byUser_ == nullptr && this->percentiles_ == nullptr && this->requestId_ == nullptr && this->summary_ == nullptr
        && this->topQueries_ == nullptr && this->topSqlDigests_ == nullptr; };
    // byDatabase Field Functions 
    bool hasByDatabase() const { return this->byDatabase_ != nullptr;};
    void deleteByDatabase() { this->byDatabase_ = nullptr;};
    inline     const Darabonba::Json & getByDatabase() const { DARABONBA_GET(byDatabase_) };
    Darabonba::Json & getByDatabase() { DARABONBA_GET(byDatabase_) };
    inline DescribeSlowQueryStatsResponseBody& setByDatabase(const Darabonba::Json & byDatabase) { DARABONBA_SET_VALUE(byDatabase_, byDatabase) };
    inline DescribeSlowQueryStatsResponseBody& setByDatabase(Darabonba::Json && byDatabase) { DARABONBA_SET_RVALUE(byDatabase_, byDatabase) };


    // byTimeBucket Field Functions 
    bool hasByTimeBucket() const { return this->byTimeBucket_ != nullptr;};
    void deleteByTimeBucket() { this->byTimeBucket_ = nullptr;};
    inline     const Darabonba::Json & getByTimeBucket() const { DARABONBA_GET(byTimeBucket_) };
    Darabonba::Json & getByTimeBucket() { DARABONBA_GET(byTimeBucket_) };
    inline DescribeSlowQueryStatsResponseBody& setByTimeBucket(const Darabonba::Json & byTimeBucket) { DARABONBA_SET_VALUE(byTimeBucket_, byTimeBucket) };
    inline DescribeSlowQueryStatsResponseBody& setByTimeBucket(Darabonba::Json && byTimeBucket) { DARABONBA_SET_RVALUE(byTimeBucket_, byTimeBucket) };


    // byUser Field Functions 
    bool hasByUser() const { return this->byUser_ != nullptr;};
    void deleteByUser() { this->byUser_ = nullptr;};
    inline     const Darabonba::Json & getByUser() const { DARABONBA_GET(byUser_) };
    Darabonba::Json & getByUser() { DARABONBA_GET(byUser_) };
    inline DescribeSlowQueryStatsResponseBody& setByUser(const Darabonba::Json & byUser) { DARABONBA_SET_VALUE(byUser_, byUser) };
    inline DescribeSlowQueryStatsResponseBody& setByUser(Darabonba::Json && byUser) { DARABONBA_SET_RVALUE(byUser_, byUser) };


    // percentiles Field Functions 
    bool hasPercentiles() const { return this->percentiles_ != nullptr;};
    void deletePercentiles() { this->percentiles_ = nullptr;};
    inline     const Darabonba::Json & getPercentiles() const { DARABONBA_GET(percentiles_) };
    Darabonba::Json & getPercentiles() { DARABONBA_GET(percentiles_) };
    inline DescribeSlowQueryStatsResponseBody& setPercentiles(const Darabonba::Json & percentiles) { DARABONBA_SET_VALUE(percentiles_, percentiles) };
    inline DescribeSlowQueryStatsResponseBody& setPercentiles(Darabonba::Json && percentiles) { DARABONBA_SET_RVALUE(percentiles_, percentiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowQueryStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline     const Darabonba::Json & getSummary() const { DARABONBA_GET(summary_) };
    Darabonba::Json & getSummary() { DARABONBA_GET(summary_) };
    inline DescribeSlowQueryStatsResponseBody& setSummary(const Darabonba::Json & summary) { DARABONBA_SET_VALUE(summary_, summary) };
    inline DescribeSlowQueryStatsResponseBody& setSummary(Darabonba::Json && summary) { DARABONBA_SET_RVALUE(summary_, summary) };


    // topQueries Field Functions 
    bool hasTopQueries() const { return this->topQueries_ != nullptr;};
    void deleteTopQueries() { this->topQueries_ = nullptr;};
    inline     const Darabonba::Json & getTopQueries() const { DARABONBA_GET(topQueries_) };
    Darabonba::Json & getTopQueries() { DARABONBA_GET(topQueries_) };
    inline DescribeSlowQueryStatsResponseBody& setTopQueries(const Darabonba::Json & topQueries) { DARABONBA_SET_VALUE(topQueries_, topQueries) };
    inline DescribeSlowQueryStatsResponseBody& setTopQueries(Darabonba::Json && topQueries) { DARABONBA_SET_RVALUE(topQueries_, topQueries) };


    // topSqlDigests Field Functions 
    bool hasTopSqlDigests() const { return this->topSqlDigests_ != nullptr;};
    void deleteTopSqlDigests() { this->topSqlDigests_ = nullptr;};
    inline     const Darabonba::Json & getTopSqlDigests() const { DARABONBA_GET(topSqlDigests_) };
    Darabonba::Json & getTopSqlDigests() { DARABONBA_GET(topSqlDigests_) };
    inline DescribeSlowQueryStatsResponseBody& setTopSqlDigests(const Darabonba::Json & topSqlDigests) { DARABONBA_SET_VALUE(topSqlDigests_, topSqlDigests) };
    inline DescribeSlowQueryStatsResponseBody& setTopSqlDigests(Darabonba::Json && topSqlDigests) { DARABONBA_SET_RVALUE(topSqlDigests_, topSqlDigests) };


  protected:
    // An array of slow query statistics, grouped by database.
    Darabonba::Json byDatabase_ {};
    // An array of slow query statistics, grouped by time bucket.
    Darabonba::Json byTimeBucket_ {};
    // An array of slow query statistics, grouped by user.
    Darabonba::Json byUser_ {};
    // The percentile statistics for query latency.
    Darabonba::Json percentiles_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The summary of slow query statistics.
    Darabonba::Json summary_ {};
    // An array of detailed audit records for the top N slow queries.
    Darabonba::Json topQueries_ {};
    // An array of statistics for the top N slow queries, grouped by SQL digest. Available for kernel version 5.0 and later.
    Darabonba::Json topSqlDigests_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
