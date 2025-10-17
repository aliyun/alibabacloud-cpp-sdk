// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODYPERFORMANCESSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODYPERFORMANCESSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePatternPerformanceResponseBodyPerformancesSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternPerformanceResponseBodyPerformancesSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternPerformanceResponseBodyPerformancesSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribePatternPerformanceResponseBodyPerformancesSeries() = default ;
    DescribePatternPerformanceResponseBodyPerformancesSeries(const DescribePatternPerformanceResponseBodyPerformancesSeries &) = default ;
    DescribePatternPerformanceResponseBodyPerformancesSeries(DescribePatternPerformanceResponseBodyPerformancesSeries &&) = default ;
    DescribePatternPerformanceResponseBodyPerformancesSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternPerformanceResponseBodyPerformancesSeries() = default ;
    DescribePatternPerformanceResponseBodyPerformancesSeries& operator=(const DescribePatternPerformanceResponseBodyPerformancesSeries &) = default ;
    DescribePatternPerformanceResponseBodyPerformancesSeries& operator=(DescribePatternPerformanceResponseBodyPerformancesSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->values_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePatternPerformanceResponseBodyPerformancesSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribePatternPerformanceResponseBodyPerformancesSeries& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribePatternPerformanceResponseBodyPerformancesSeries& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the performance metric value. Valid values:
    // 
    // *   If the value of `Key` is `AnalyticDB_PatternQueryCount`, `pattern_query_count` is returned, which indicates the number of executions of the SQL statements in association with the SQL pattern.
    // 
    // *   If the value of `Key` is `AnalyticDB_PatternQueryTime`, the following values are returned:
    // 
    //     *   `average_query_time`, which indicates the average total amount of time consumed by the SQL statements in association with the SQL pattern.
    //     *   `max_query_time`, which indicates the maximum total amount of time consumed by the SQL statements in association with the SQL pattern.
    // 
    // *   If the value of `Key` is `AnalyticDB_PatternExecutionTime`, the following values are returned:
    // 
    //     *   `average_execution_time`, which indicates the average execution duration of the SQL statements in association with the SQL pattern.
    //     *   `max_execution_time`, which indicates the maximum execution duration of the SQL statements in association with the SQL pattern.
    // 
    // *   If the value of `Key` is `AnalyticDB_PatternPeakMemory`, the following values are returned:
    // 
    //     *   `average_peak_memory`, which indicates the average peak memory usage of the SQL statements in association with the SQL pattern.
    //     *   `max_peak_memory`, which indicates the maximum peak memory usage of the SQL statements in association with the SQL pattern.
    // 
    // *   If the value of `Key` is `AnalyticDB_PatternScanSize`, the following values are returned:
    // 
    //     *   `average_scan_size`, which indicates the average amount of data scanned by the SQL statements in association with the SQL pattern.
    //     *   `max_scan_size`, which indicates the maximum amount of data scanned by the SQL statements in association with the SQL pattern.
    std::shared_ptr<string> name_ = nullptr;
    // The values of the performance metric.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
