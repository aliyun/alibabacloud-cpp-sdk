// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListCommonLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommonLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    ListCommonLogsResponseBodyLogs() = default ;
    ListCommonLogsResponseBodyLogs(const ListCommonLogsResponseBodyLogs &) = default ;
    ListCommonLogsResponseBodyLogs(ListCommonLogsResponseBodyLogs &&) = default ;
    ListCommonLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonLogsResponseBodyLogs() = default ;
    ListCommonLogsResponseBodyLogs& operator=(const ListCommonLogsResponseBodyLogs &) = default ;
    ListCommonLogsResponseBodyLogs& operator=(ListCommonLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->clusterId_ == nullptr && return this->logType_ == nullptr && return this->message_ == nullptr && return this->operatorUid_ == nullptr && return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->target_ == nullptr && return this->time_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListCommonLogsResponseBodyLogs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListCommonLogsResponseBodyLogs& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListCommonLogsResponseBodyLogs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCommonLogsResponseBodyLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string operatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline ListCommonLogsResponseBodyLogs& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCommonLogsResponseBodyLogs& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCommonLogsResponseBodyLogs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListCommonLogsResponseBodyLogs& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListCommonLogsResponseBodyLogs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The name of the action corresponding to the log.
    std::shared_ptr<string> action_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The log type.
    std::shared_ptr<string> logType_ = nullptr;
    // The message of the log.
    std::shared_ptr<string> message_ = nullptr;
    // The account ID of the operator.
    std::shared_ptr<string> operatorUid_ = nullptr;
    // The request ID associated with the action that generated the log.
    std::shared_ptr<string> requestId_ = nullptr;
    // The action state in the log. Valid values:
    // 
    // *   InProgress: The action is being performed.
    // *   Finished: The action is completed.
    // *   Failed: The action failed.
    std::shared_ptr<string> status_ = nullptr;
    // The involved resource.
    std::shared_ptr<string> target_ = nullptr;
    // The time when the log was generated.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
