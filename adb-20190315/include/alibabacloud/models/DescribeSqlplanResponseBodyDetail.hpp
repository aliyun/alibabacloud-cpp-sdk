// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODYDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODYDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSQLPlanResponseBodyDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPlanResponseBodyDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_TO_JSON(OutputSize, outputSize_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(PlanningTime, planningTime_);
      DARABONBA_PTR_TO_JSON(QueuedTime, queuedTime_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TotalStage, totalStage_);
      DARABONBA_PTR_TO_JSON(TotalTask, totalTask_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLPlanResponseBodyDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_FROM_JSON(OutputSize, outputSize_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(PlanningTime, planningTime_);
      DARABONBA_PTR_FROM_JSON(QueuedTime, queuedTime_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TotalStage, totalStage_);
      DARABONBA_PTR_FROM_JSON(TotalTask, totalTask_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeSQLPlanResponseBodyDetail() = default ;
    DescribeSQLPlanResponseBodyDetail(const DescribeSQLPlanResponseBodyDetail &) = default ;
    DescribeSQLPlanResponseBodyDetail(DescribeSQLPlanResponseBodyDetail &&) = default ;
    DescribeSQLPlanResponseBodyDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPlanResponseBodyDetail() = default ;
    DescribeSQLPlanResponseBodyDetail& operator=(const DescribeSQLPlanResponseBodyDetail &) = default ;
    DescribeSQLPlanResponseBodyDetail& operator=(DescribeSQLPlanResponseBodyDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CPUTime_ != nullptr
        && this->clientIP_ != nullptr && this->database_ != nullptr && this->outputRows_ != nullptr && this->outputSize_ != nullptr && this->peakMemory_ != nullptr
        && this->planningTime_ != nullptr && this->queuedTime_ != nullptr && this->SQL_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr
        && this->totalStage_ != nullptr && this->totalTask_ != nullptr && this->totalTime_ != nullptr && this->user_ != nullptr; };
    // CPUTime Field Functions 
    bool hasCPUTime() const { return this->CPUTime_ != nullptr;};
    void deleteCPUTime() { this->CPUTime_ = nullptr;};
    inline int64_t CPUTime() const { DARABONBA_PTR_GET_DEFAULT(CPUTime_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setCPUTime(int64_t CPUTime) { DARABONBA_PTR_SET_VALUE(CPUTime_, CPUTime) };


    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribeSQLPlanResponseBodyDetail& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeSQLPlanResponseBodyDetail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // outputRows Field Functions 
    bool hasOutputRows() const { return this->outputRows_ != nullptr;};
    void deleteOutputRows() { this->outputRows_ = nullptr;};
    inline int64_t outputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


    // outputSize Field Functions 
    bool hasOutputSize() const { return this->outputSize_ != nullptr;};
    void deleteOutputSize() { this->outputSize_ = nullptr;};
    inline int64_t outputSize() const { DARABONBA_PTR_GET_DEFAULT(outputSize_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setOutputSize(int64_t outputSize) { DARABONBA_PTR_SET_VALUE(outputSize_, outputSize) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // planningTime Field Functions 
    bool hasPlanningTime() const { return this->planningTime_ != nullptr;};
    void deletePlanningTime() { this->planningTime_ = nullptr;};
    inline int64_t planningTime() const { DARABONBA_PTR_GET_DEFAULT(planningTime_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setPlanningTime(int64_t planningTime) { DARABONBA_PTR_SET_VALUE(planningTime_, planningTime) };


    // queuedTime Field Functions 
    bool hasQueuedTime() const { return this->queuedTime_ != nullptr;};
    void deleteQueuedTime() { this->queuedTime_ = nullptr;};
    inline int64_t queuedTime() const { DARABONBA_PTR_GET_DEFAULT(queuedTime_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setQueuedTime(int64_t queuedTime) { DARABONBA_PTR_SET_VALUE(queuedTime_, queuedTime) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline DescribeSQLPlanResponseBodyDetail& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSQLPlanResponseBodyDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSQLPlanResponseBodyDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // totalStage Field Functions 
    bool hasTotalStage() const { return this->totalStage_ != nullptr;};
    void deleteTotalStage() { this->totalStage_ = nullptr;};
    inline int64_t totalStage() const { DARABONBA_PTR_GET_DEFAULT(totalStage_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setTotalStage(int64_t totalStage) { DARABONBA_PTR_SET_VALUE(totalStage_, totalStage) };


    // totalTask Field Functions 
    bool hasTotalTask() const { return this->totalTask_ != nullptr;};
    void deleteTotalTask() { this->totalTask_ = nullptr;};
    inline int64_t totalTask() const { DARABONBA_PTR_GET_DEFAULT(totalTask_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setTotalTask(int64_t totalTask) { DARABONBA_PTR_SET_VALUE(totalTask_, totalTask) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline DescribeSQLPlanResponseBodyDetail& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSQLPlanResponseBodyDetail& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The total CPU time consumed by all operators on multithreaded servers when the SQL statement is executed. Unit: milliseconds.
    std::shared_ptr<int64_t> CPUTime_ = nullptr;
    // The IP address of the client that is used to execute the SQL statement.
    std::shared_ptr<string> clientIP_ = nullptr;
    // The name of the database on which the SQL statement was executed.
    std::shared_ptr<string> database_ = nullptr;
    // The total number of rows generated by the SQL statement.
    std::shared_ptr<int64_t> outputRows_ = nullptr;
    // The total amount of data generated by the SQL statement. Unit: bytes.
    std::shared_ptr<int64_t> outputSize_ = nullptr;
    // The maximum memory usage when the SQL statement is executed. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The amount of time consumed to generate the execution plan of the SQL statement. Unit: milliseconds.
    std::shared_ptr<int64_t> planningTime_ = nullptr;
    // The amount of time consumed to queue the SQL statement. Unit: milliseconds.
    std::shared_ptr<int64_t> queuedTime_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQL_ = nullptr;
    // The execution start time of the SQL statement. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The final execution state of the SQL statement. Valid values:
    // 
    // *   FINISHED
    // *   FAILED
    std::shared_ptr<string> state_ = nullptr;
    // The total number of stages in the SQL statement.
    std::shared_ptr<int64_t> totalStage_ = nullptr;
    // The total number of tasks in the SQL statement.
    std::shared_ptr<int64_t> totalTask_ = nullptr;
    // The total amount of time consumed to execute the SQL statement. Unit: milliseconds.
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    // The name of the user who submitted the SQL statement.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
