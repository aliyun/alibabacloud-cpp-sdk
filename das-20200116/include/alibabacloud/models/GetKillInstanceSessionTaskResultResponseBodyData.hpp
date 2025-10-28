// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKillInstanceSessionTaskResultResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetKillInstanceSessionTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKillInstanceSessionTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoredUserSessionCount, ignoredUserSessionCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KillFailCount, killFailCount_);
      DARABONBA_PTR_TO_JSON(KillSuccessCount, killSuccessCount_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKillInstanceSessionTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoredUserSessionCount, ignoredUserSessionCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KillFailCount, killFailCount_);
      DARABONBA_PTR_FROM_JSON(KillSuccessCount, killSuccessCount_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetKillInstanceSessionTaskResultResponseBodyData() = default ;
    GetKillInstanceSessionTaskResultResponseBodyData(const GetKillInstanceSessionTaskResultResponseBodyData &) = default ;
    GetKillInstanceSessionTaskResultResponseBodyData(GetKillInstanceSessionTaskResultResponseBodyData &&) = default ;
    GetKillInstanceSessionTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKillInstanceSessionTaskResultResponseBodyData() = default ;
    GetKillInstanceSessionTaskResultResponseBodyData& operator=(const GetKillInstanceSessionTaskResultResponseBodyData &) = default ;
    GetKillInstanceSessionTaskResultResponseBodyData& operator=(GetKillInstanceSessionTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoredUserSessionCount_ == nullptr
        && return this->instanceId_ == nullptr && return this->killFailCount_ == nullptr && return this->killSuccessCount_ == nullptr && return this->nodeId_ == nullptr && return this->result_ == nullptr
        && return this->sessions_ == nullptr && return this->taskId_ == nullptr && return this->taskState_ == nullptr && return this->userId_ == nullptr; };
    // ignoredUserSessionCount Field Functions 
    bool hasIgnoredUserSessionCount() const { return this->ignoredUserSessionCount_ != nullptr;};
    void deleteIgnoredUserSessionCount() { this->ignoredUserSessionCount_ = nullptr;};
    inline int64_t ignoredUserSessionCount() const { DARABONBA_PTR_GET_DEFAULT(ignoredUserSessionCount_, 0L) };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setIgnoredUserSessionCount(int64_t ignoredUserSessionCount) { DARABONBA_PTR_SET_VALUE(ignoredUserSessionCount_, ignoredUserSessionCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // killFailCount Field Functions 
    bool hasKillFailCount() const { return this->killFailCount_ != nullptr;};
    void deleteKillFailCount() { this->killFailCount_ = nullptr;};
    inline int64_t killFailCount() const { DARABONBA_PTR_GET_DEFAULT(killFailCount_, 0L) };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setKillFailCount(int64_t killFailCount) { DARABONBA_PTR_SET_VALUE(killFailCount_, killFailCount) };


    // killSuccessCount Field Functions 
    bool hasKillSuccessCount() const { return this->killSuccessCount_ != nullptr;};
    void deleteKillSuccessCount() { this->killSuccessCount_ = nullptr;};
    inline int64_t killSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(killSuccessCount_, 0L) };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setKillSuccessCount(int64_t killSuccessCount) { DARABONBA_PTR_SET_VALUE(killSuccessCount_, killSuccessCount) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetKillInstanceSessionTaskResultResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetKillInstanceSessionTaskResultResponseBodyDataResult>) };
    inline vector<Models::GetKillInstanceSessionTaskResultResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetKillInstanceSessionTaskResultResponseBodyDataResult>) };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setResult(const vector<Models::GetKillInstanceSessionTaskResultResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setResult(vector<Models::GetKillInstanceSessionTaskResultResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<int64_t> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<int64_t>) };
    inline vector<int64_t> sessions() { DARABONBA_PTR_GET(sessions_, vector<int64_t>) };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setSessions(const vector<int64_t> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setSessions(vector<int64_t> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The number of ignored sessions, including sessions of the accounts that are specified by IgnoredUsers, sessions of internal O\\&M accounts of Alibaba Cloud, and **Binlog Dump** sessions.
    std::shared_ptr<int64_t> ignoredUserSessionCount_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of sessions that failed to be terminated.
    std::shared_ptr<int64_t> killFailCount_ = nullptr;
    // The number of sessions that were terminated.
    std::shared_ptr<int64_t> killSuccessCount_ = nullptr;
    // The node ID.
    // 
    // >  This parameter is returned only if the instance is a PolarDB for MySQL cluster.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The details of the task that terminated sessions.
    std::shared_ptr<vector<Models::GetKillInstanceSessionTaskResultResponseBodyDataResult>> result_ = nullptr;
    // The session IDs.
    // 
    // >  If all sessions are terminated, the IDs of all sessions on the instance or node are returned.
    std::shared_ptr<vector<int64_t>> sessions_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The state of the task that terminates sessions.
    // 
    // *   **RUNNING**: The task is in progress.
    // *   **SUCCESS**: The task is successful.
    // *   **FAILURE**: The task failed.
    // *   **ERROR**: Other errors occur.
    std::shared_ptr<string> taskState_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
