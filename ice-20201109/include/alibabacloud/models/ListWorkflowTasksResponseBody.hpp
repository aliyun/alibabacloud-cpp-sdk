// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkflowTasksResponseBodyTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListWorkflowTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWorkflowTasksResponseBody() = default ;
    ListWorkflowTasksResponseBody(const ListWorkflowTasksResponseBody &) = default ;
    ListWorkflowTasksResponseBody(ListWorkflowTasksResponseBody &&) = default ;
    ListWorkflowTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowTasksResponseBody() = default ;
    ListWorkflowTasksResponseBody& operator=(const ListWorkflowTasksResponseBody &) = default ;
    ListWorkflowTasksResponseBody& operator=(ListWorkflowTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->taskList_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkflowTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkflowTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkflowTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<ListWorkflowTasksResponseBodyTaskList> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<ListWorkflowTasksResponseBodyTaskList>) };
    inline vector<ListWorkflowTasksResponseBodyTaskList> taskList() { DARABONBA_PTR_GET(taskList_, vector<ListWorkflowTasksResponseBodyTaskList>) };
    inline ListWorkflowTasksResponseBody& setTaskList(const vector<ListWorkflowTasksResponseBodyTaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline ListWorkflowTasksResponseBody& setTaskList(vector<ListWorkflowTasksResponseBodyTaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkflowTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned in this response.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The media workflow tasks.
    std::shared_ptr<vector<ListWorkflowTasksResponseBodyTaskList>> taskList_ = nullptr;
    // The total number of entries returned. By default, this parameter is not returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
