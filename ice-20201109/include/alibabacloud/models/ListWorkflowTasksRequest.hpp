// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListWorkflowTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_TO_JSON(KeyText, keyText_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(KeyText, keyText_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
    };
    ListWorkflowTasksRequest() = default ;
    ListWorkflowTasksRequest(const ListWorkflowTasksRequest &) = default ;
    ListWorkflowTasksRequest(ListWorkflowTasksRequest &&) = default ;
    ListWorkflowTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowTasksRequest() = default ;
    ListWorkflowTasksRequest& operator=(const ListWorkflowTasksRequest &) = default ;
    ListWorkflowTasksRequest& operator=(ListWorkflowTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endOfCreateTime_ == nullptr
        && return this->keyText_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->startOfCreateTime_ == nullptr && return this->workflowId_ == nullptr
        && return this->workflowName_ == nullptr; };
    // endOfCreateTime Field Functions 
    bool hasEndOfCreateTime() const { return this->endOfCreateTime_ != nullptr;};
    void deleteEndOfCreateTime() { this->endOfCreateTime_ = nullptr;};
    inline string endOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endOfCreateTime_, "") };
    inline ListWorkflowTasksRequest& setEndOfCreateTime(string endOfCreateTime) { DARABONBA_PTR_SET_VALUE(endOfCreateTime_, endOfCreateTime) };


    // keyText Field Functions 
    bool hasKeyText() const { return this->keyText_ != nullptr;};
    void deleteKeyText() { this->keyText_ = nullptr;};
    inline string keyText() const { DARABONBA_PTR_GET_DEFAULT(keyText_, "") };
    inline ListWorkflowTasksRequest& setKeyText(string keyText) { DARABONBA_PTR_SET_VALUE(keyText_, keyText) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkflowTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkflowTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startOfCreateTime Field Functions 
    bool hasStartOfCreateTime() const { return this->startOfCreateTime_ != nullptr;};
    void deleteStartOfCreateTime() { this->startOfCreateTime_ = nullptr;};
    inline string startOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startOfCreateTime_, "") };
    inline ListWorkflowTasksRequest& setStartOfCreateTime(string startOfCreateTime) { DARABONBA_PTR_SET_VALUE(startOfCreateTime_, startOfCreateTime) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline ListWorkflowTasksRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string workflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline ListWorkflowTasksRequest& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


  protected:
    // The end of the time range for filtering tasks by their creation time. Supports querying data from the last 90 days only.
    std::shared_ptr<string> endOfCreateTime_ = nullptr;
    // A keyword for fuzzy matching against the TaskInput, such as a file name or Media ID. Max length: 32 characters.
    std::shared_ptr<string> keyText_ = nullptr;
    // The maximum number of media workflow instances to return. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The start of the time range for filtering tasks by their creation time. Supports querying data from the last 90 days only.
    std::shared_ptr<string> startOfCreateTime_ = nullptr;
    // The ID of the workflow template.[](https://ims.console.aliyun.com/settings/workflow/list)
    std::shared_ptr<string> workflowId_ = nullptr;
    // The name of the workflow template.
    std::shared_ptr<string> workflowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
