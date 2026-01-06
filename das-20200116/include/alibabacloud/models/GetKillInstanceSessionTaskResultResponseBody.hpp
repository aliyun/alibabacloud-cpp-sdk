// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKILLINSTANCESESSIONTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetKillInstanceSessionTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKillInstanceSessionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKillInstanceSessionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKillInstanceSessionTaskResultResponseBody() = default ;
    GetKillInstanceSessionTaskResultResponseBody(const GetKillInstanceSessionTaskResultResponseBody &) = default ;
    GetKillInstanceSessionTaskResultResponseBody(GetKillInstanceSessionTaskResultResponseBody &&) = default ;
    GetKillInstanceSessionTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKillInstanceSessionTaskResultResponseBody() = default ;
    GetKillInstanceSessionTaskResultResponseBody& operator=(const GetKillInstanceSessionTaskResultResponseBody &) = default ;
    GetKillInstanceSessionTaskResultResponseBody& operator=(GetKillInstanceSessionTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->active_ == nullptr
        && this->command_ == nullptr && this->db_ == nullptr && this->host_ == nullptr && this->id_ == nullptr && this->info_ == nullptr
        && this->reason_ == nullptr && this->state_ == nullptr && this->taskId_ == nullptr && this->time_ == nullptr && this->user_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
        inline Result& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline Result& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // db Field Functions 
        bool hasDb() const { return this->db_ != nullptr;};
        void deleteDb() { this->db_ = nullptr;};
        inline string getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
        inline Result& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Result& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // info Field Functions 
        bool hasInfo() const { return this->info_ != nullptr;};
        void deleteInfo() { this->info_ = nullptr;};
        inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
        inline Result& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Result& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Result& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
        inline Result& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline Result& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // Indicates whether the session is active.
        // 
        // > If the type of the command is Query or Execute and the session in the transaction is not terminated, the session is active.
        shared_ptr<bool> active_ {};
        // The type of the command executed in the session.
        shared_ptr<string> command_ {};
        // The name of the database.
        shared_ptr<string> db_ {};
        // The IP address and port number of the host that initiated the session.
        shared_ptr<string> host_ {};
        // The session ID.
        shared_ptr<int64_t> id_ {};
        // The SQL statement executed in the session.
        shared_ptr<string> info_ {};
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
        shared_ptr<string> reason_ {};
        // The status of the session.
        shared_ptr<string> state_ {};
        // The ID of the subtask that terminates the session.
        shared_ptr<string> taskId_ {};
        // The execution duration. Unit: seconds.
        shared_ptr<int64_t> time_ {};
        // The account of the database.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->ignoredUserSessionCount_ == nullptr
        && this->instanceId_ == nullptr && this->killFailCount_ == nullptr && this->killSuccessCount_ == nullptr && this->nodeId_ == nullptr && this->result_ == nullptr
        && this->sessions_ == nullptr && this->taskId_ == nullptr && this->taskState_ == nullptr && this->userId_ == nullptr; };
      // ignoredUserSessionCount Field Functions 
      bool hasIgnoredUserSessionCount() const { return this->ignoredUserSessionCount_ != nullptr;};
      void deleteIgnoredUserSessionCount() { this->ignoredUserSessionCount_ = nullptr;};
      inline int64_t getIgnoredUserSessionCount() const { DARABONBA_PTR_GET_DEFAULT(ignoredUserSessionCount_, 0L) };
      inline Data& setIgnoredUserSessionCount(int64_t ignoredUserSessionCount) { DARABONBA_PTR_SET_VALUE(ignoredUserSessionCount_, ignoredUserSessionCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // killFailCount Field Functions 
      bool hasKillFailCount() const { return this->killFailCount_ != nullptr;};
      void deleteKillFailCount() { this->killFailCount_ = nullptr;};
      inline int64_t getKillFailCount() const { DARABONBA_PTR_GET_DEFAULT(killFailCount_, 0L) };
      inline Data& setKillFailCount(int64_t killFailCount) { DARABONBA_PTR_SET_VALUE(killFailCount_, killFailCount) };


      // killSuccessCount Field Functions 
      bool hasKillSuccessCount() const { return this->killSuccessCount_ != nullptr;};
      void deleteKillSuccessCount() { this->killSuccessCount_ = nullptr;};
      inline int64_t getKillSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(killSuccessCount_, 0L) };
      inline Data& setKillSuccessCount(int64_t killSuccessCount) { DARABONBA_PTR_SET_VALUE(killSuccessCount_, killSuccessCount) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<int64_t> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<int64_t>) };
      inline vector<int64_t> getSessions() { DARABONBA_PTR_GET(sessions_, vector<int64_t>) };
      inline Data& setSessions(const vector<int64_t> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline Data& setSessions(vector<int64_t> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskState Field Functions 
      bool hasTaskState() const { return this->taskState_ != nullptr;};
      void deleteTaskState() { this->taskState_ = nullptr;};
      inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
      inline Data& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The number of ignored sessions, including sessions of the accounts that are specified by IgnoredUsers, sessions of internal O\\&M accounts of Alibaba Cloud, and **Binlog Dump** sessions.
      shared_ptr<int64_t> ignoredUserSessionCount_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The number of sessions that failed to be terminated.
      shared_ptr<int64_t> killFailCount_ {};
      // The number of sessions that were terminated.
      shared_ptr<int64_t> killSuccessCount_ {};
      // The node ID.
      // 
      // >  This parameter is returned only if the instance is a PolarDB for MySQL cluster.
      shared_ptr<string> nodeId_ {};
      // The details of the task that terminated sessions.
      shared_ptr<vector<Data::Result>> result_ {};
      // The session IDs.
      // 
      // >  If all sessions are terminated, the IDs of all sessions on the instance or node are returned.
      shared_ptr<vector<int64_t>> sessions_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The state of the task that terminates sessions.
      // 
      // *   **RUNNING**: The task is in progress.
      // *   **SUCCESS**: The task is successful.
      // *   **FAILURE**: The task failed.
      // *   **ERROR**: Other errors occur.
      shared_ptr<string> taskState_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetKillInstanceSessionTaskResultResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKillInstanceSessionTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKillInstanceSessionTaskResultResponseBody::Data) };
    inline GetKillInstanceSessionTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKillInstanceSessionTaskResultResponseBody::Data) };
    inline GetKillInstanceSessionTaskResultResponseBody& setData(const GetKillInstanceSessionTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKillInstanceSessionTaskResultResponseBody& setData(GetKillInstanceSessionTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKillInstanceSessionTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKillInstanceSessionTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKillInstanceSessionTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetKillInstanceSessionTaskResultResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, Successful is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
