// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLTASKPAGERESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLTASKPAGERESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiCallTaskPageResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallTaskPageResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(CallingCount, callingCount_);
      DARABONBA_PTR_TO_JSON(CompleteRate, completeRate_);
      DARABONBA_PTR_TO_JSON(ConcurrentCount, concurrentCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DayCallCount, dayCallCount_);
      DARABONBA_PTR_TO_JSON(DayConnectRate, dayConnectRate_);
      DARABONBA_PTR_TO_JSON(DayImportCount, dayImportCount_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(HistoryConnectRate, historyConnectRate_);
      DARABONBA_PTR_TO_JSON(RealStartTime, realStartTime_);
      DARABONBA_PTR_TO_JSON(StartFailedReason, startFailedReason_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SucceedCount, succeedCount_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TotalCallCount, totalCallCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallTaskPageResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(CallingCount, callingCount_);
      DARABONBA_PTR_FROM_JSON(CompleteRate, completeRate_);
      DARABONBA_PTR_FROM_JSON(ConcurrentCount, concurrentCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DayCallCount, dayCallCount_);
      DARABONBA_PTR_FROM_JSON(DayConnectRate, dayConnectRate_);
      DARABONBA_PTR_FROM_JSON(DayImportCount, dayImportCount_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(HistoryConnectRate, historyConnectRate_);
      DARABONBA_PTR_FROM_JSON(RealStartTime, realStartTime_);
      DARABONBA_PTR_FROM_JSON(StartFailedReason, startFailedReason_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SucceedCount, succeedCount_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TotalCallCount, totalCallCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryAiCallTaskPageResponseBodyDataList() = default ;
    QueryAiCallTaskPageResponseBodyDataList(const QueryAiCallTaskPageResponseBodyDataList &) = default ;
    QueryAiCallTaskPageResponseBodyDataList(QueryAiCallTaskPageResponseBodyDataList &&) = default ;
    QueryAiCallTaskPageResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallTaskPageResponseBodyDataList() = default ;
    QueryAiCallTaskPageResponseBodyDataList& operator=(const QueryAiCallTaskPageResponseBodyDataList &) = default ;
    QueryAiCallTaskPageResponseBodyDataList& operator=(QueryAiCallTaskPageResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentName_ == nullptr && return this->callingCount_ == nullptr && return this->completeRate_ == nullptr && return this->concurrentCount_ == nullptr && return this->createTime_ == nullptr
        && return this->dayCallCount_ == nullptr && return this->dayConnectRate_ == nullptr && return this->dayImportCount_ == nullptr && return this->failedCount_ == nullptr && return this->historyConnectRate_ == nullptr
        && return this->realStartTime_ == nullptr && return this->startFailedReason_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->succeedCount_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->totalCallCount_ == nullptr && return this->totalCount_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // callingCount Field Functions 
    bool hasCallingCount() const { return this->callingCount_ != nullptr;};
    void deleteCallingCount() { this->callingCount_ = nullptr;};
    inline int64_t callingCount() const { DARABONBA_PTR_GET_DEFAULT(callingCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setCallingCount(int64_t callingCount) { DARABONBA_PTR_SET_VALUE(callingCount_, callingCount) };


    // completeRate Field Functions 
    bool hasCompleteRate() const { return this->completeRate_ != nullptr;};
    void deleteCompleteRate() { this->completeRate_ = nullptr;};
    inline string completeRate() const { DARABONBA_PTR_GET_DEFAULT(completeRate_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setCompleteRate(string completeRate) { DARABONBA_PTR_SET_VALUE(completeRate_, completeRate) };


    // concurrentCount Field Functions 
    bool hasConcurrentCount() const { return this->concurrentCount_ != nullptr;};
    void deleteConcurrentCount() { this->concurrentCount_ = nullptr;};
    inline int64_t concurrentCount() const { DARABONBA_PTR_GET_DEFAULT(concurrentCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setConcurrentCount(int64_t concurrentCount) { DARABONBA_PTR_SET_VALUE(concurrentCount_, concurrentCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dayCallCount Field Functions 
    bool hasDayCallCount() const { return this->dayCallCount_ != nullptr;};
    void deleteDayCallCount() { this->dayCallCount_ = nullptr;};
    inline int64_t dayCallCount() const { DARABONBA_PTR_GET_DEFAULT(dayCallCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setDayCallCount(int64_t dayCallCount) { DARABONBA_PTR_SET_VALUE(dayCallCount_, dayCallCount) };


    // dayConnectRate Field Functions 
    bool hasDayConnectRate() const { return this->dayConnectRate_ != nullptr;};
    void deleteDayConnectRate() { this->dayConnectRate_ = nullptr;};
    inline string dayConnectRate() const { DARABONBA_PTR_GET_DEFAULT(dayConnectRate_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setDayConnectRate(string dayConnectRate) { DARABONBA_PTR_SET_VALUE(dayConnectRate_, dayConnectRate) };


    // dayImportCount Field Functions 
    bool hasDayImportCount() const { return this->dayImportCount_ != nullptr;};
    void deleteDayImportCount() { this->dayImportCount_ = nullptr;};
    inline int64_t dayImportCount() const { DARABONBA_PTR_GET_DEFAULT(dayImportCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setDayImportCount(int64_t dayImportCount) { DARABONBA_PTR_SET_VALUE(dayImportCount_, dayImportCount) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // historyConnectRate Field Functions 
    bool hasHistoryConnectRate() const { return this->historyConnectRate_ != nullptr;};
    void deleteHistoryConnectRate() { this->historyConnectRate_ = nullptr;};
    inline string historyConnectRate() const { DARABONBA_PTR_GET_DEFAULT(historyConnectRate_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setHistoryConnectRate(string historyConnectRate) { DARABONBA_PTR_SET_VALUE(historyConnectRate_, historyConnectRate) };


    // realStartTime Field Functions 
    bool hasRealStartTime() const { return this->realStartTime_ != nullptr;};
    void deleteRealStartTime() { this->realStartTime_ = nullptr;};
    inline int64_t realStartTime() const { DARABONBA_PTR_GET_DEFAULT(realStartTime_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setRealStartTime(int64_t realStartTime) { DARABONBA_PTR_SET_VALUE(realStartTime_, realStartTime) };


    // startFailedReason Field Functions 
    bool hasStartFailedReason() const { return this->startFailedReason_ != nullptr;};
    void deleteStartFailedReason() { this->startFailedReason_ = nullptr;};
    inline string startFailedReason() const { DARABONBA_PTR_GET_DEFAULT(startFailedReason_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setStartFailedReason(string startFailedReason) { DARABONBA_PTR_SET_VALUE(startFailedReason_, startFailedReason) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // succeedCount Field Functions 
    bool hasSucceedCount() const { return this->succeedCount_ != nullptr;};
    void deleteSucceedCount() { this->succeedCount_ = nullptr;};
    inline int64_t succeedCount() const { DARABONBA_PTR_GET_DEFAULT(succeedCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setSucceedCount(int64_t succeedCount) { DARABONBA_PTR_SET_VALUE(succeedCount_, succeedCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline QueryAiCallTaskPageResponseBodyDataList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // totalCallCount Field Functions 
    bool hasTotalCallCount() const { return this->totalCallCount_ != nullptr;};
    void deleteTotalCallCount() { this->totalCallCount_ = nullptr;};
    inline int64_t totalCallCount() const { DARABONBA_PTR_GET_DEFAULT(totalCallCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setTotalCallCount(int64_t totalCallCount) { DARABONBA_PTR_SET_VALUE(totalCallCount_, totalCallCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryAiCallTaskPageResponseBodyDataList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<int64_t> callingCount_ = nullptr;
    std::shared_ptr<string> completeRate_ = nullptr;
    std::shared_ptr<int64_t> concurrentCount_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> dayCallCount_ = nullptr;
    std::shared_ptr<string> dayConnectRate_ = nullptr;
    std::shared_ptr<int64_t> dayImportCount_ = nullptr;
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    std::shared_ptr<string> historyConnectRate_ = nullptr;
    std::shared_ptr<int64_t> realStartTime_ = nullptr;
    std::shared_ptr<string> startFailedReason_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<int64_t> succeedCount_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<int64_t> totalCallCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
