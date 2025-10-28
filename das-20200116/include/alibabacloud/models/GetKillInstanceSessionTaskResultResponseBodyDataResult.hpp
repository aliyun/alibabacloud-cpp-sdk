// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetKillInstanceSessionTaskResultResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKillInstanceSessionTaskResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(Db, db_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetKillInstanceSessionTaskResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(Db, db_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetKillInstanceSessionTaskResultResponseBodyDataResult() = default ;
    GetKillInstanceSessionTaskResultResponseBodyDataResult(const GetKillInstanceSessionTaskResultResponseBodyDataResult &) = default ;
    GetKillInstanceSessionTaskResultResponseBodyDataResult(GetKillInstanceSessionTaskResultResponseBodyDataResult &&) = default ;
    GetKillInstanceSessionTaskResultResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKillInstanceSessionTaskResultResponseBodyDataResult() = default ;
    GetKillInstanceSessionTaskResultResponseBodyDataResult& operator=(const GetKillInstanceSessionTaskResultResponseBodyDataResult &) = default ;
    GetKillInstanceSessionTaskResultResponseBodyDataResult& operator=(GetKillInstanceSessionTaskResultResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->command_ == nullptr && return this->db_ == nullptr && return this->host_ == nullptr && return this->id_ == nullptr && return this->info_ == nullptr
        && return this->reason_ == nullptr && return this->state_ == nullptr && return this->taskId_ == nullptr && return this->time_ == nullptr && return this->user_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline string db() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetKillInstanceSessionTaskResultResponseBodyDataResult& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // Indicates whether the session is active.
    // 
    // > If the type of the command is Query or Execute and the session in the transaction is not terminated, the session is active.
    std::shared_ptr<bool> active_ = nullptr;
    // The type of the command executed in the session.
    std::shared_ptr<string> command_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> db_ = nullptr;
    // The IP address and port number of the host that initiated the session.
    std::shared_ptr<string> host_ = nullptr;
    // The session ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The SQL statement executed in the session.
    std::shared_ptr<string> info_ = nullptr;
    // The description of the session when the session was terminated.
    // 
    // *   **SESSION_KILLED**: The session is terminated.
    // *   **SESSION_EXPIRED**: The session has expired.
    // *   **SESSION_NO_PERMISSION**: The account used to terminate the session has insufficient permissions.
    // *   **SESSION_ACCOUNT_ERROR**: The account or password used to terminate the session is invalid.
    // *   **SESSION_IGNORED_USER**: The session of the account does not need to be terminated.
    // *   **SESSION_INTERNAL_USER_OR_COMMAND**: The session is a session initiated by or a command run by an Alibaba Cloud O\\&M account.
    // *   **SESSION_KILL_TASK_TIMEOUT**: Timeout occurs when the session is terminated.
    // *   **SESSION_OTHER_ERROR**: Other errors occurred.
    std::shared_ptr<string> reason_ = nullptr;
    // The status of the session.
    std::shared_ptr<string> state_ = nullptr;
    // The ID of the subtask that terminates the session.
    std::shared_ptr<string> taskId_ = nullptr;
    // The execution duration. Unit: seconds.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The account of the database.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
