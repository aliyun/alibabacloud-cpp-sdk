// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDiagnosisMonitorPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisMonitorPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(PerformancesThreshold, performancesThreshold_);
      DARABONBA_PTR_TO_JSON(PerformancesTruncated, performancesTruncated_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisMonitorPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(PerformancesThreshold, performancesThreshold_);
      DARABONBA_PTR_FROM_JSON(PerformancesTruncated, performancesTruncated_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosisMonitorPerformanceResponseBody() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(const DescribeDiagnosisMonitorPerformanceResponseBody &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(DescribeDiagnosisMonitorPerformanceResponseBody &&) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisMonitorPerformanceResponseBody() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody& operator=(const DescribeDiagnosisMonitorPerformanceResponseBody &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody& operator=(DescribeDiagnosisMonitorPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Performances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Performances& obj) { 
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(QueryID, queryID_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Performances& obj) { 
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(QueryID, queryID_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      virtual bool empty() const override { return this->cost_ == nullptr
        && this->database_ == nullptr && this->queryID_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->user_ == nullptr; };
      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
      inline Performances& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Performances& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // queryID Field Functions 
      bool hasQueryID() const { return this->queryID_ != nullptr;};
      void deleteQueryID() { this->queryID_ = nullptr;};
      inline string getQueryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
      inline Performances& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Performances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Performances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Performances& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The execution duration of the query. Unit: milliseconds.
      shared_ptr<int32_t> cost_ {};
      // The name of the database.
      shared_ptr<string> database_ {};
      // The ID of the query. It is a unique identifier of the query.
      shared_ptr<string> queryID_ {};
      // The start time of the query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
      // The execution state of the query. Valid values:
      // 
      // *   **running**: The query is being executed.
      // *   **finished**: The query is complete.
      shared_ptr<string> status_ {};
      // The name of the database account.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->performances_ == nullptr
        && this->performancesThreshold_ == nullptr && this->performancesTruncated_ == nullptr && this->requestId_ == nullptr; };
    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> & getPerformances() const { DARABONBA_PTR_GET_CONST(performances_, vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances>) };
    inline vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> getPerformances() { DARABONBA_PTR_GET(performances_, vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances>) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformances(const vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformances(vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // performancesThreshold Field Functions 
    bool hasPerformancesThreshold() const { return this->performancesThreshold_ != nullptr;};
    void deletePerformancesThreshold() { this->performancesThreshold_ = nullptr;};
    inline int32_t getPerformancesThreshold() const { DARABONBA_PTR_GET_DEFAULT(performancesThreshold_, 0) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformancesThreshold(int32_t performancesThreshold) { DARABONBA_PTR_SET_VALUE(performancesThreshold_, performancesThreshold) };


    // performancesTruncated Field Functions 
    bool hasPerformancesTruncated() const { return this->performancesTruncated_ != nullptr;};
    void deletePerformancesTruncated() { this->performancesTruncated_ = nullptr;};
    inline bool getPerformancesTruncated() const { DARABONBA_PTR_GET_DEFAULT(performancesTruncated_, false) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformancesTruncated(bool performancesTruncated) { DARABONBA_PTR_SET_VALUE(performancesTruncated_, performancesTruncated) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of query execution.
    shared_ptr<vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances>> performances_ {};
    // The threshold for the number of queries.
    shared_ptr<int32_t> performancesThreshold_ {};
    // Indicates whether the queries are truncated when the number of queries exceeds the threshold. Valid values:
    // 
    // *   **true**: The queries are truncated.
    // *   **false**: The queries are not truncated.
    shared_ptr<bool> performancesTruncated_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
