// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskExecutionsResponseBodyTaskExecutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTaskExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskExecutions, taskExecutions_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskExecutions, taskExecutions_);
    };
    ListTaskExecutionsResponseBody() = default ;
    ListTaskExecutionsResponseBody(const ListTaskExecutionsResponseBody &) = default ;
    ListTaskExecutionsResponseBody(ListTaskExecutionsResponseBody &&) = default ;
    ListTaskExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskExecutionsResponseBody() = default ;
    ListTaskExecutionsResponseBody& operator=(const ListTaskExecutionsResponseBody &) = default ;
    ListTaskExecutionsResponseBody& operator=(ListTaskExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->taskExecutions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTaskExecutionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTaskExecutionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskExecutions Field Functions 
    bool hasTaskExecutions() const { return this->taskExecutions_ != nullptr;};
    void deleteTaskExecutions() { this->taskExecutions_ = nullptr;};
    inline const vector<ListTaskExecutionsResponseBodyTaskExecutions> & taskExecutions() const { DARABONBA_PTR_GET_CONST(taskExecutions_, vector<ListTaskExecutionsResponseBodyTaskExecutions>) };
    inline vector<ListTaskExecutionsResponseBodyTaskExecutions> taskExecutions() { DARABONBA_PTR_GET(taskExecutions_, vector<ListTaskExecutionsResponseBodyTaskExecutions>) };
    inline ListTaskExecutionsResponseBody& setTaskExecutions(const vector<ListTaskExecutionsResponseBodyTaskExecutions> & taskExecutions) { DARABONBA_PTR_SET_VALUE(taskExecutions_, taskExecutions) };
    inline ListTaskExecutionsResponseBody& setTaskExecutions(vector<ListTaskExecutionsResponseBodyTaskExecutions> && taskExecutions) { DARABONBA_PTR_SET_RVALUE(taskExecutions_, taskExecutions) };


  protected:
    // The details of the task executions.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<string> requestId_ = nullptr;
    // The execution ID of the child node.
    std::shared_ptr<vector<ListTaskExecutionsResponseBodyTaskExecutions>> taskExecutions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
