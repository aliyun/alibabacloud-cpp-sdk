// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYDATARESULTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYDATARESULTSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSlowLogTrendResponseBodyDataResultSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBodyDataResultSet& obj) { 
      DARABONBA_PTR_TO_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
      DARABONBA_PTR_TO_JSON(Cnt, cnt_);
      DARABONBA_PTR_TO_JSON(MaxQueryDurationMs, maxQueryDurationMs_);
      DARABONBA_PTR_TO_JSON(MinQueryDurationMs, minQueryDurationMs_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBodyDataResultSet& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
      DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
      DARABONBA_PTR_FROM_JSON(MaxQueryDurationMs, maxQueryDurationMs_);
      DARABONBA_PTR_FROM_JSON(MinQueryDurationMs, minQueryDurationMs_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
    };
    DescribeSlowLogTrendResponseBodyDataResultSet() = default ;
    DescribeSlowLogTrendResponseBodyDataResultSet(const DescribeSlowLogTrendResponseBodyDataResultSet &) = default ;
    DescribeSlowLogTrendResponseBodyDataResultSet(DescribeSlowLogTrendResponseBodyDataResultSet &&) = default ;
    DescribeSlowLogTrendResponseBodyDataResultSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendResponseBodyDataResultSet() = default ;
    DescribeSlowLogTrendResponseBodyDataResultSet& operator=(const DescribeSlowLogTrendResponseBodyDataResultSet &) = default ;
    DescribeSlowLogTrendResponseBodyDataResultSet& operator=(DescribeSlowLogTrendResponseBodyDataResultSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgQueryDurationMs_ != nullptr
        && this->cnt_ != nullptr && this->maxQueryDurationMs_ != nullptr && this->minQueryDurationMs_ != nullptr && this->queryStartTime_ != nullptr; };
    // avgQueryDurationMs Field Functions 
    bool hasAvgQueryDurationMs() const { return this->avgQueryDurationMs_ != nullptr;};
    void deleteAvgQueryDurationMs() { this->avgQueryDurationMs_ = nullptr;};
    inline int64_t avgQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(avgQueryDurationMs_, 0L) };
    inline DescribeSlowLogTrendResponseBodyDataResultSet& setAvgQueryDurationMs(int64_t avgQueryDurationMs) { DARABONBA_PTR_SET_VALUE(avgQueryDurationMs_, avgQueryDurationMs) };


    // cnt Field Functions 
    bool hasCnt() const { return this->cnt_ != nullptr;};
    void deleteCnt() { this->cnt_ = nullptr;};
    inline int64_t cnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0L) };
    inline DescribeSlowLogTrendResponseBodyDataResultSet& setCnt(int64_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


    // maxQueryDurationMs Field Functions 
    bool hasMaxQueryDurationMs() const { return this->maxQueryDurationMs_ != nullptr;};
    void deleteMaxQueryDurationMs() { this->maxQueryDurationMs_ = nullptr;};
    inline int64_t maxQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueryDurationMs_, 0L) };
    inline DescribeSlowLogTrendResponseBodyDataResultSet& setMaxQueryDurationMs(int64_t maxQueryDurationMs) { DARABONBA_PTR_SET_VALUE(maxQueryDurationMs_, maxQueryDurationMs) };


    // minQueryDurationMs Field Functions 
    bool hasMinQueryDurationMs() const { return this->minQueryDurationMs_ != nullptr;};
    void deleteMinQueryDurationMs() { this->minQueryDurationMs_ = nullptr;};
    inline int64_t minQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(minQueryDurationMs_, 0L) };
    inline DescribeSlowLogTrendResponseBodyDataResultSet& setMinQueryDurationMs(int64_t minQueryDurationMs) { DARABONBA_PTR_SET_VALUE(minQueryDurationMs_, minQueryDurationMs) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeSlowLogTrendResponseBodyDataResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


  protected:
    // The average execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> avgQueryDurationMs_ = nullptr;
    // The total number of SQL queries within the specified time range.
    std::shared_ptr<int64_t> cnt_ = nullptr;
    // The maximum execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> maxQueryDurationMs_ = nullptr;
    // The minimum execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> minQueryDurationMs_ = nullptr;
    // The beginning of the time range to query. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> queryStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
