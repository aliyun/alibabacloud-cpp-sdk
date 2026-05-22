// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTTASKLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTTASKLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceTestTaskLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTestTaskLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskLogs, taskLogs_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTestTaskLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskLogs, taskLogs_);
    };
    ListServiceTestTaskLogsResponseBody() = default ;
    ListServiceTestTaskLogsResponseBody(const ListServiceTestTaskLogsResponseBody &) = default ;
    ListServiceTestTaskLogsResponseBody(ListServiceTestTaskLogsResponseBody &&) = default ;
    ListServiceTestTaskLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTestTaskLogsResponseBody() = default ;
    ListServiceTestTaskLogsResponseBody& operator=(const ListServiceTestTaskLogsResponseBody &) = default ;
    ListServiceTestTaskLogsResponseBody& operator=(ListServiceTestTaskLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskLogs& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, TaskLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      TaskLogs() = default ;
      TaskLogs(const TaskLogs &) = default ;
      TaskLogs(TaskLogs &&) = default ;
      TaskLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskLogs() = default ;
      TaskLogs& operator=(const TaskLogs &) = default ;
      TaskLogs& operator=(TaskLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->timestamp_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline TaskLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline TaskLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The log content.
      shared_ptr<string> content_ {};
      // The UTC timestamp when the response is returned.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->taskLogs_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceTestTaskLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceTestTaskLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceTestTaskLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskLogs Field Functions 
    bool hasTaskLogs() const { return this->taskLogs_ != nullptr;};
    void deleteTaskLogs() { this->taskLogs_ = nullptr;};
    inline const vector<ListServiceTestTaskLogsResponseBody::TaskLogs> & getTaskLogs() const { DARABONBA_PTR_GET_CONST(taskLogs_, vector<ListServiceTestTaskLogsResponseBody::TaskLogs>) };
    inline vector<ListServiceTestTaskLogsResponseBody::TaskLogs> getTaskLogs() { DARABONBA_PTR_GET(taskLogs_, vector<ListServiceTestTaskLogsResponseBody::TaskLogs>) };
    inline ListServiceTestTaskLogsResponseBody& setTaskLogs(const vector<ListServiceTestTaskLogsResponseBody::TaskLogs> & taskLogs) { DARABONBA_PTR_SET_VALUE(taskLogs_, taskLogs) };
    inline ListServiceTestTaskLogsResponseBody& setTaskLogs(vector<ListServiceTestTaskLogsResponseBody::TaskLogs> && taskLogs) { DARABONBA_PTR_SET_RVALUE(taskLogs_, taskLogs) };


  protected:
    // The number of items to return per page when paginating results. The maximum is 100, and the default is 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service test task logs.
    shared_ptr<vector<ListServiceTestTaskLogsResponseBody::TaskLogs>> taskLogs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
