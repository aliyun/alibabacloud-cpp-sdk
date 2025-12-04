// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYSLOWLOGTRENDDATARESULTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYSLOWLOGTRENDDATARESULTSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& obj) { 
      DARABONBA_PTR_TO_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxQueryDurationMs, maxQueryDurationMs_);
      DARABONBA_PTR_TO_JSON(MinQueryDurationMs, minQueryDurationMs_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgQueryDurationMs, avgQueryDurationMs_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxQueryDurationMs, maxQueryDurationMs_);
      DARABONBA_PTR_FROM_JSON(MinQueryDurationMs, minQueryDurationMs_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
    };
    DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet() = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet(const DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet &) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet(DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet &&) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet() = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& operator=(const DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet &) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& operator=(DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgQueryDurationMs_ == nullptr
        && return this->count_ == nullptr && return this->maxQueryDurationMs_ == nullptr && return this->minQueryDurationMs_ == nullptr && return this->queryStartTime_ == nullptr; };
    // avgQueryDurationMs Field Functions 
    bool hasAvgQueryDurationMs() const { return this->avgQueryDurationMs_ != nullptr;};
    void deleteAvgQueryDurationMs() { this->avgQueryDurationMs_ = nullptr;};
    inline string avgQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(avgQueryDurationMs_, "") };
    inline DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& setAvgQueryDurationMs(string avgQueryDurationMs) { DARABONBA_PTR_SET_VALUE(avgQueryDurationMs_, avgQueryDurationMs) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxQueryDurationMs Field Functions 
    bool hasMaxQueryDurationMs() const { return this->maxQueryDurationMs_ != nullptr;};
    void deleteMaxQueryDurationMs() { this->maxQueryDurationMs_ = nullptr;};
    inline string maxQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueryDurationMs_, "") };
    inline DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& setMaxQueryDurationMs(string maxQueryDurationMs) { DARABONBA_PTR_SET_VALUE(maxQueryDurationMs_, maxQueryDurationMs) };


    // minQueryDurationMs Field Functions 
    bool hasMinQueryDurationMs() const { return this->minQueryDurationMs_ != nullptr;};
    void deleteMinQueryDurationMs() { this->minQueryDurationMs_ = nullptr;};
    inline string minQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(minQueryDurationMs_, "") };
    inline DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& setMinQueryDurationMs(string minQueryDurationMs) { DARABONBA_PTR_SET_VALUE(minQueryDurationMs_, minQueryDurationMs) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


  protected:
    std::shared_ptr<string> avgQueryDurationMs_ = nullptr;
    std::shared_ptr<string> count_ = nullptr;
    std::shared_ptr<string> maxQueryDurationMs_ = nullptr;
    std::shared_ptr<string> minQueryDurationMs_ = nullptr;
    std::shared_ptr<string> queryStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
