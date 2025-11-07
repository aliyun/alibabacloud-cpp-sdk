// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSRESPONSEBODYEXECUTIONLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSRESPONSEBODYEXECUTIONLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionLogsResponseBodyExecutionLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionLogsResponseBodyExecutionLogs& obj) { 
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionLogsResponseBodyExecutionLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListExecutionLogsResponseBodyExecutionLogs() = default ;
    ListExecutionLogsResponseBodyExecutionLogs(const ListExecutionLogsResponseBodyExecutionLogs &) = default ;
    ListExecutionLogsResponseBodyExecutionLogs(ListExecutionLogsResponseBodyExecutionLogs &&) = default ;
    ListExecutionLogsResponseBodyExecutionLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionLogsResponseBodyExecutionLogs() = default ;
    ListExecutionLogsResponseBodyExecutionLogs& operator=(const ListExecutionLogsResponseBodyExecutionLogs &) = default ;
    ListExecutionLogsResponseBodyExecutionLogs& operator=(ListExecutionLogsResponseBodyExecutionLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logType_ == nullptr
        && return this->message_ == nullptr && return this->taskExecutionId_ == nullptr && return this->timestamp_ == nullptr; };
    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListExecutionLogsResponseBodyExecutionLogs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListExecutionLogsResponseBodyExecutionLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // taskExecutionId Field Functions 
    bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
    void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
    inline string taskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
    inline ListExecutionLogsResponseBodyExecutionLogs& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListExecutionLogsResponseBodyExecutionLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The log type.
    std::shared_ptr<string> logType_ = nullptr;
    // The details of the task execution.
    std::shared_ptr<string> message_ = nullptr;
    // The task execution ID.
    std::shared_ptr<string> taskExecutionId_ = nullptr;
    // The timestamp when the task was run.
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
