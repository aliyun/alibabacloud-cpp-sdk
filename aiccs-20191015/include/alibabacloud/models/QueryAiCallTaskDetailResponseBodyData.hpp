// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLTASKDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLTASKDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAiCallTaskDetailResponseBodyDataCallTimes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiCallTaskDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallTaskDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(CallDays, callDays_);
      DARABONBA_PTR_TO_JSON(CallTimes, callTimes_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(ConcurrentCount, concurrentCount_);
      DARABONBA_PTR_TO_JSON(RealStartTime, realStartTime_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(RetryEnable, retryEnable_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(RetryReasons, retryReasons_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartType, startType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallTaskDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(CallDays, callDays_);
      DARABONBA_PTR_FROM_JSON(CallTimes, callTimes_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(ConcurrentCount, concurrentCount_);
      DARABONBA_PTR_FROM_JSON(RealStartTime, realStartTime_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_FROM_JSON(RetryEnable, retryEnable_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(RetryReasons, retryReasons_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartType, startType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    QueryAiCallTaskDetailResponseBodyData() = default ;
    QueryAiCallTaskDetailResponseBodyData(const QueryAiCallTaskDetailResponseBodyData &) = default ;
    QueryAiCallTaskDetailResponseBodyData(QueryAiCallTaskDetailResponseBodyData &&) = default ;
    QueryAiCallTaskDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallTaskDetailResponseBodyData() = default ;
    QueryAiCallTaskDetailResponseBodyData& operator=(const QueryAiCallTaskDetailResponseBodyData &) = default ;
    QueryAiCallTaskDetailResponseBodyData& operator=(QueryAiCallTaskDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentName_ == nullptr && return this->callDays_ == nullptr && return this->callTimes_ == nullptr && return this->callerNumber_ == nullptr && return this->concurrentCount_ == nullptr
        && return this->realStartTime_ == nullptr && return this->retryCount_ == nullptr && return this->retryEnable_ == nullptr && return this->retryInterval_ == nullptr && return this->retryReasons_ == nullptr
        && return this->startTime_ == nullptr && return this->startType_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline QueryAiCallTaskDetailResponseBodyData& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline QueryAiCallTaskDetailResponseBodyData& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // callDays Field Functions 
    bool hasCallDays() const { return this->callDays_ != nullptr;};
    void deleteCallDays() { this->callDays_ = nullptr;};
    inline const vector<string> & callDays() const { DARABONBA_PTR_GET_CONST(callDays_, vector<string>) };
    inline vector<string> callDays() { DARABONBA_PTR_GET(callDays_, vector<string>) };
    inline QueryAiCallTaskDetailResponseBodyData& setCallDays(const vector<string> & callDays) { DARABONBA_PTR_SET_VALUE(callDays_, callDays) };
    inline QueryAiCallTaskDetailResponseBodyData& setCallDays(vector<string> && callDays) { DARABONBA_PTR_SET_RVALUE(callDays_, callDays) };


    // callTimes Field Functions 
    bool hasCallTimes() const { return this->callTimes_ != nullptr;};
    void deleteCallTimes() { this->callTimes_ = nullptr;};
    inline const vector<Models::QueryAiCallTaskDetailResponseBodyDataCallTimes> & callTimes() const { DARABONBA_PTR_GET_CONST(callTimes_, vector<Models::QueryAiCallTaskDetailResponseBodyDataCallTimes>) };
    inline vector<Models::QueryAiCallTaskDetailResponseBodyDataCallTimes> callTimes() { DARABONBA_PTR_GET(callTimes_, vector<Models::QueryAiCallTaskDetailResponseBodyDataCallTimes>) };
    inline QueryAiCallTaskDetailResponseBodyData& setCallTimes(const vector<Models::QueryAiCallTaskDetailResponseBodyDataCallTimes> & callTimes) { DARABONBA_PTR_SET_VALUE(callTimes_, callTimes) };
    inline QueryAiCallTaskDetailResponseBodyData& setCallTimes(vector<Models::QueryAiCallTaskDetailResponseBodyDataCallTimes> && callTimes) { DARABONBA_PTR_SET_RVALUE(callTimes_, callTimes) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string callerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline QueryAiCallTaskDetailResponseBodyData& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // concurrentCount Field Functions 
    bool hasConcurrentCount() const { return this->concurrentCount_ != nullptr;};
    void deleteConcurrentCount() { this->concurrentCount_ = nullptr;};
    inline int64_t concurrentCount() const { DARABONBA_PTR_GET_DEFAULT(concurrentCount_, 0L) };
    inline QueryAiCallTaskDetailResponseBodyData& setConcurrentCount(int64_t concurrentCount) { DARABONBA_PTR_SET_VALUE(concurrentCount_, concurrentCount) };


    // realStartTime Field Functions 
    bool hasRealStartTime() const { return this->realStartTime_ != nullptr;};
    void deleteRealStartTime() { this->realStartTime_ = nullptr;};
    inline int64_t realStartTime() const { DARABONBA_PTR_GET_DEFAULT(realStartTime_, 0L) };
    inline QueryAiCallTaskDetailResponseBodyData& setRealStartTime(int64_t realStartTime) { DARABONBA_PTR_SET_VALUE(realStartTime_, realStartTime) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int64_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0L) };
    inline QueryAiCallTaskDetailResponseBodyData& setRetryCount(int64_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryEnable Field Functions 
    bool hasRetryEnable() const { return this->retryEnable_ != nullptr;};
    void deleteRetryEnable() { this->retryEnable_ = nullptr;};
    inline bool retryEnable() const { DARABONBA_PTR_GET_DEFAULT(retryEnable_, false) };
    inline QueryAiCallTaskDetailResponseBodyData& setRetryEnable(bool retryEnable) { DARABONBA_PTR_SET_VALUE(retryEnable_, retryEnable) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int64_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0L) };
    inline QueryAiCallTaskDetailResponseBodyData& setRetryInterval(int64_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // retryReasons Field Functions 
    bool hasRetryReasons() const { return this->retryReasons_ != nullptr;};
    void deleteRetryReasons() { this->retryReasons_ = nullptr;};
    inline const vector<string> & retryReasons() const { DARABONBA_PTR_GET_CONST(retryReasons_, vector<string>) };
    inline vector<string> retryReasons() { DARABONBA_PTR_GET(retryReasons_, vector<string>) };
    inline QueryAiCallTaskDetailResponseBodyData& setRetryReasons(const vector<string> & retryReasons) { DARABONBA_PTR_SET_VALUE(retryReasons_, retryReasons) };
    inline QueryAiCallTaskDetailResponseBodyData& setRetryReasons(vector<string> && retryReasons) { DARABONBA_PTR_SET_RVALUE(retryReasons_, retryReasons) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryAiCallTaskDetailResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startType Field Functions 
    bool hasStartType() const { return this->startType_ != nullptr;};
    void deleteStartType() { this->startType_ = nullptr;};
    inline string startType() const { DARABONBA_PTR_GET_DEFAULT(startType_, "") };
    inline QueryAiCallTaskDetailResponseBodyData& setStartType(string startType) { DARABONBA_PTR_SET_VALUE(startType_, startType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAiCallTaskDetailResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline QueryAiCallTaskDetailResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<vector<string>> callDays_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiCallTaskDetailResponseBodyDataCallTimes>> callTimes_ = nullptr;
    std::shared_ptr<string> callerNumber_ = nullptr;
    std::shared_ptr<int64_t> concurrentCount_ = nullptr;
    std::shared_ptr<int64_t> realStartTime_ = nullptr;
    std::shared_ptr<int64_t> retryCount_ = nullptr;
    std::shared_ptr<bool> retryEnable_ = nullptr;
    std::shared_ptr<int64_t> retryInterval_ = nullptr;
    std::shared_ptr<vector<string>> retryReasons_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> startType_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
