// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionLogs, executionLogs_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionLogs, executionLogs_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListExecutionLogsResponseBody() = default ;
    ListExecutionLogsResponseBody(const ListExecutionLogsResponseBody &) = default ;
    ListExecutionLogsResponseBody(ListExecutionLogsResponseBody &&) = default ;
    ListExecutionLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionLogsResponseBody() = default ;
    ListExecutionLogsResponseBody& operator=(const ListExecutionLogsResponseBody &) = default ;
    ListExecutionLogsResponseBody& operator=(ListExecutionLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecutionLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutionLogs& obj) { 
        DARABONBA_PTR_TO_JSON(LogType, logType_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutionLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(LogType, logType_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      ExecutionLogs() = default ;
      ExecutionLogs(const ExecutionLogs &) = default ;
      ExecutionLogs(ExecutionLogs &&) = default ;
      ExecutionLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutionLogs() = default ;
      ExecutionLogs& operator=(const ExecutionLogs &) = default ;
      ExecutionLogs& operator=(ExecutionLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logType_ == nullptr
        && this->message_ == nullptr && this->taskExecutionId_ == nullptr && this->timestamp_ == nullptr; };
      // logType Field Functions 
      bool hasLogType() const { return this->logType_ != nullptr;};
      void deleteLogType() { this->logType_ = nullptr;};
      inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
      inline ExecutionLogs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ExecutionLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // taskExecutionId Field Functions 
      bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
      void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
      inline string getTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
      inline ExecutionLogs& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline ExecutionLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The log type.
      shared_ptr<string> logType_ {};
      // The details of the task execution.
      shared_ptr<string> message_ {};
      // The task execution ID.
      shared_ptr<string> taskExecutionId_ {};
      // The timestamp when the task was run.
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->executionLogs_ == nullptr
        && this->isTruncated_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // executionLogs Field Functions 
    bool hasExecutionLogs() const { return this->executionLogs_ != nullptr;};
    void deleteExecutionLogs() { this->executionLogs_ = nullptr;};
    inline const vector<ListExecutionLogsResponseBody::ExecutionLogs> & getExecutionLogs() const { DARABONBA_PTR_GET_CONST(executionLogs_, vector<ListExecutionLogsResponseBody::ExecutionLogs>) };
    inline vector<ListExecutionLogsResponseBody::ExecutionLogs> getExecutionLogs() { DARABONBA_PTR_GET(executionLogs_, vector<ListExecutionLogsResponseBody::ExecutionLogs>) };
    inline ListExecutionLogsResponseBody& setExecutionLogs(const vector<ListExecutionLogsResponseBody::ExecutionLogs> & executionLogs) { DARABONBA_PTR_SET_VALUE(executionLogs_, executionLogs) };
    inline ListExecutionLogsResponseBody& setExecutionLogs(vector<ListExecutionLogsResponseBody::ExecutionLogs> && executionLogs) { DARABONBA_PTR_SET_RVALUE(executionLogs_, executionLogs) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListExecutionLogsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutionLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutionLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The logs of the execution.
    shared_ptr<vector<ListExecutionLogsResponseBody::ExecutionLogs>> executionLogs_ {};
    // Indicates whether the log is truncated.
    shared_ptr<bool> isTruncated_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
