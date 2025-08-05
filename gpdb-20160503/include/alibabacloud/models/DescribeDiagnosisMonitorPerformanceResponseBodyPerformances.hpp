// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDiagnosisMonitorPerformanceResponseBodyPerformances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(QueryID, queryID_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(QueryID, queryID_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances(const DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances(DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &&) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisMonitorPerformanceResponseBodyPerformances() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& operator=(const DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& operator=(DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cost_ != nullptr
        && this->database_ != nullptr && this->queryID_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->user_ != nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int32_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // queryID Field Functions 
    bool hasQueryID() const { return this->queryID_ != nullptr;};
    void deleteQueryID() { this->queryID_ = nullptr;};
    inline string queryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The execution duration of the query. Unit: milliseconds.
    std::shared_ptr<int32_t> cost_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The ID of the query. It is a unique identifier of the query.
    std::shared_ptr<string> queryID_ = nullptr;
    // The start time of the query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The execution state of the query. Valid values:
    // 
    // *   **running**: The query is being executed.
    // *   **finished**: The query is complete.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
