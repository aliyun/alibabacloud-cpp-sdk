// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListEvaluationTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskMode, taskMode_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskMode, taskMode_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    ListEvaluationTasksRequest() = default ;
    ListEvaluationTasksRequest(const ListEvaluationTasksRequest &) = default ;
    ListEvaluationTasksRequest(ListEvaluationTasksRequest &&) = default ;
    ListEvaluationTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationTasksRequest() = default ;
    ListEvaluationTasksRequest& operator=(const ListEvaluationTasksRequest &) = default ;
    ListEvaluationTasksRequest& operator=(ListEvaluationTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->channel_ == nullptr && this->dataType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->status_ == nullptr
        && this->taskMode_ == nullptr && this->taskName_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline ListEvaluationTasksRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ListEvaluationTasksRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ListEvaluationTasksRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEvaluationTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEvaluationTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEvaluationTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskMode Field Functions 
    bool hasTaskMode() const { return this->taskMode_ != nullptr;};
    void deleteTaskMode() { this->taskMode_ = nullptr;};
    inline string getTaskMode() const { DARABONBA_PTR_GET_DEFAULT(taskMode_, "") };
    inline ListEvaluationTasksRequest& setTaskMode(string taskMode) { DARABONBA_PTR_SET_VALUE(taskMode_, taskMode) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListEvaluationTasksRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The AgentSpace name.
    shared_ptr<string> agentSpace_ {};
    // The filter condition for the task source. If this parameter is not specified, tasks from the default source are queried.
    shared_ptr<string> channel_ {};
    // The data source type of the evaluation object. Set this parameter to `trace` for trace-based evaluation.
    shared_ptr<string> dataType_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page, obtained from the previous response.
    shared_ptr<string> nextToken_ {};
    // The filter condition for the evaluation task status.
    shared_ptr<string> status_ {};
    // The evaluation task mode. If this parameter is not specified, the default value is `batch`.
    shared_ptr<string> taskMode_ {};
    // The fuzzy match condition for the task name.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
