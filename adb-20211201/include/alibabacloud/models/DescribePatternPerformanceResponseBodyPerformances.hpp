// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePatternPerformanceResponseBodyPerformancesSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePatternPerformanceResponseBodyPerformances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribePatternPerformanceResponseBodyPerformances() = default ;
    DescribePatternPerformanceResponseBodyPerformances(const DescribePatternPerformanceResponseBodyPerformances &) = default ;
    DescribePatternPerformanceResponseBodyPerformances(DescribePatternPerformanceResponseBodyPerformances &&) = default ;
    DescribePatternPerformanceResponseBodyPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternPerformanceResponseBodyPerformances() = default ;
    DescribePatternPerformanceResponseBodyPerformances& operator=(const DescribePatternPerformanceResponseBodyPerformances &) = default ;
    DescribePatternPerformanceResponseBodyPerformances& operator=(DescribePatternPerformanceResponseBodyPerformances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->series_ == nullptr && return this->unit_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribePatternPerformanceResponseBodyPerformances& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribePatternPerformanceResponseBodyPerformancesSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribePatternPerformanceResponseBodyPerformancesSeries>) };
    inline vector<Models::DescribePatternPerformanceResponseBodyPerformancesSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribePatternPerformanceResponseBodyPerformancesSeries>) };
    inline DescribePatternPerformanceResponseBodyPerformances& setSeries(const vector<Models::DescribePatternPerformanceResponseBodyPerformancesSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribePatternPerformanceResponseBodyPerformances& setSeries(vector<Models::DescribePatternPerformanceResponseBodyPerformancesSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribePatternPerformanceResponseBodyPerformances& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The queried performance metric. Valid values:
    // 
    // *   **AnalyticDB_PatternQueryCount**: the total number of queries executed in association with the SQL pattern.
    // *   **AnalyticDB_PatternQueryTime**: the total amount of time consumed by the queries executed in association with the SQL pattern.
    // *   **AnalyticDB_PatternExecutionTime**: the execution duration of the queries executed in association with the SQL pattern.
    // *   **AnalyticDB_PatternPeakMemory**: the peak memory usage of the queries executed in association with the SQL pattern.
    // *   **AnalyticDB_PatternScanSize**: the amount of data scanned in the queries executed in association with the SQL pattern.
    std::shared_ptr<string> key_ = nullptr;
    // The values of the performance metrics.
    std::shared_ptr<vector<Models::DescribePatternPerformanceResponseBodyPerformancesSeries>> series_ = nullptr;
    // The unit of the performance metric. Valid values:
    // 
    // *   If the performance metric is related to the query time (the value of `Key` is `AnalyticDB_PatternQueryTime` or `AnalyticDB_PatternExecutionTime`), **ms** is returned.
    // *   If the performance metric is related to the peak memory usage (the value of `Key` is `AnalyticDB_PatternPeakMemory`), **MB** is returned.
    // *   If the performance metric is related to the amount of data scanned (the value of `Key` is `AnalyticDB_PatternScanSize`), **MB** is returned.
    // *   If the performance metric is related to the number of queries (the value of `Key` is `AnalyticDB_PatternQueryCount`), null is returned.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
