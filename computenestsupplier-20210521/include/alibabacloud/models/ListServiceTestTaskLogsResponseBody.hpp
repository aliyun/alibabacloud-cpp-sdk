// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTTASKLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTTASKLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceTestTaskLogsResponseBodyTaskLogs.hpp>
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
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->taskLogs_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceTestTaskLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceTestTaskLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceTestTaskLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskLogs Field Functions 
    bool hasTaskLogs() const { return this->taskLogs_ != nullptr;};
    void deleteTaskLogs() { this->taskLogs_ = nullptr;};
    inline const vector<ListServiceTestTaskLogsResponseBodyTaskLogs> & taskLogs() const { DARABONBA_PTR_GET_CONST(taskLogs_, vector<ListServiceTestTaskLogsResponseBodyTaskLogs>) };
    inline vector<ListServiceTestTaskLogsResponseBodyTaskLogs> taskLogs() { DARABONBA_PTR_GET(taskLogs_, vector<ListServiceTestTaskLogsResponseBodyTaskLogs>) };
    inline ListServiceTestTaskLogsResponseBody& setTaskLogs(const vector<ListServiceTestTaskLogsResponseBodyTaskLogs> & taskLogs) { DARABONBA_PTR_SET_VALUE(taskLogs_, taskLogs) };
    inline ListServiceTestTaskLogsResponseBody& setTaskLogs(vector<ListServiceTestTaskLogsResponseBodyTaskLogs> && taskLogs) { DARABONBA_PTR_SET_RVALUE(taskLogs_, taskLogs) };


  protected:
    // The number of items to return per page when paginating results. The maximum is 100, and the default is 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service test task logs.
    std::shared_ptr<vector<ListServiceTestTaskLogsResponseBodyTaskLogs>> taskLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
