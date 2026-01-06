// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCERESPONSEBODY_HPP_
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
  class DescribePatternPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLPattern, SQLPattern_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLPattern, SQLPattern_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribePatternPerformanceResponseBody() = default ;
    DescribePatternPerformanceResponseBody(const DescribePatternPerformanceResponseBody &) = default ;
    DescribePatternPerformanceResponseBody(DescribePatternPerformanceResponseBody &&) = default ;
    DescribePatternPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternPerformanceResponseBody() = default ;
    DescribePatternPerformanceResponseBody& operator=(const DescribePatternPerformanceResponseBody &) = default ;
    DescribePatternPerformanceResponseBody& operator=(DescribePatternPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Performances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Performances& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Series, series_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Performances& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Performances() = default ;
      Performances(const Performances &) = default ;
      Performances(Performances &&) = default ;
      Performances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Performances() = default ;
      Performances& operator=(const Performances &) = default ;
      Performances& operator=(Performances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Series() = default ;
        Series(const Series &) = default ;
        Series(Series &&) = default ;
        Series(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Series() = default ;
        Series& operator=(const Series &) = default ;
        Series& operator=(Series &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->values_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline Series& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Series& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


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
        shared_ptr<string> name_ {};
        // The values of the performance metric.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->key_ == nullptr
        && this->series_ == nullptr && this->unit_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Performances& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<Performances::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<Performances::Series>) };
      inline vector<Performances::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<Performances::Series>) };
      inline Performances& setSeries(const vector<Performances::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline Performances& setSeries(vector<Performances::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Performances& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The queried performance metric. Valid values:
      // 
      // *   **AnalyticDB_PatternQueryCount**: the total number of queries executed in association with the SQL pattern.
      // *   **AnalyticDB_PatternQueryTime**: the total amount of time consumed by the queries executed in association with the SQL pattern.
      // *   **AnalyticDB_PatternExecutionTime**: the execution duration of the queries executed in association with the SQL pattern.
      // *   **AnalyticDB_PatternPeakMemory**: the peak memory usage of the queries executed in association with the SQL pattern.
      // *   **AnalyticDB_PatternScanSize**: the amount of data scanned in the queries executed in association with the SQL pattern.
      shared_ptr<string> key_ {};
      // The values of the performance metrics.
      shared_ptr<vector<Performances::Series>> series_ {};
      // The unit of the performance metric. Valid values:
      // 
      // *   If the performance metric is related to the query time (the value of `Key` is `AnalyticDB_PatternQueryTime` or `AnalyticDB_PatternExecutionTime`), **ms** is returned.
      // *   If the performance metric is related to the peak memory usage (the value of `Key` is `AnalyticDB_PatternPeakMemory`), **MB** is returned.
      // *   If the performance metric is related to the amount of data scanned (the value of `Key` is `AnalyticDB_PatternScanSize`), **MB** is returned.
      // *   If the performance metric is related to the number of queries (the value of `Key` is `AnalyticDB_PatternQueryCount`), null is returned.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->accessIp_ == nullptr
        && this->endTime_ == nullptr && this->failedCount_ == nullptr && this->performances_ == nullptr && this->queryCount_ == nullptr && this->requestId_ == nullptr
        && this->SQLPattern_ == nullptr && this->startTime_ == nullptr && this->tables_ == nullptr && this->user_ == nullptr; };
    // accessIp Field Functions 
    bool hasAccessIp() const { return this->accessIp_ != nullptr;};
    void deleteAccessIp() { this->accessIp_ = nullptr;};
    inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
    inline DescribePatternPerformanceResponseBody& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePatternPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline DescribePatternPerformanceResponseBody& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const vector<DescribePatternPerformanceResponseBody::Performances> & getPerformances() const { DARABONBA_PTR_GET_CONST(performances_, vector<DescribePatternPerformanceResponseBody::Performances>) };
    inline vector<DescribePatternPerformanceResponseBody::Performances> getPerformances() { DARABONBA_PTR_GET(performances_, vector<DescribePatternPerformanceResponseBody::Performances>) };
    inline DescribePatternPerformanceResponseBody& setPerformances(const vector<DescribePatternPerformanceResponseBody::Performances> & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribePatternPerformanceResponseBody& setPerformances(vector<DescribePatternPerformanceResponseBody::Performances> && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // queryCount Field Functions 
    bool hasQueryCount() const { return this->queryCount_ != nullptr;};
    void deleteQueryCount() { this->queryCount_ = nullptr;};
    inline int64_t getQueryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0L) };
    inline DescribePatternPerformanceResponseBody& setQueryCount(int64_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePatternPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLPattern Field Functions 
    bool hasSQLPattern() const { return this->SQLPattern_ != nullptr;};
    void deleteSQLPattern() { this->SQLPattern_ = nullptr;};
    inline string getSQLPattern() const { DARABONBA_PTR_GET_DEFAULT(SQLPattern_, "") };
    inline DescribePatternPerformanceResponseBody& setSQLPattern(string SQLPattern) { DARABONBA_PTR_SET_VALUE(SQLPattern_, SQLPattern) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePatternPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string getTables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline DescribePatternPerformanceResponseBody& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePatternPerformanceResponseBody& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    shared_ptr<string> accessIp_ {};
    // The end time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> failedCount_ {};
    // The queried performance metrics.
    shared_ptr<vector<DescribePatternPerformanceResponseBody::Performances>> performances_ {};
    shared_ptr<int64_t> queryCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> SQLPattern_ {};
    // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
    shared_ptr<string> tables_ {};
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
