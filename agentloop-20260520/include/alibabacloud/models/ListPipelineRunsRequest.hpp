// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListPipelineRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    ListPipelineRunsRequest() = default ;
    ListPipelineRunsRequest(const ListPipelineRunsRequest &) = default ;
    ListPipelineRunsRequest(ListPipelineRunsRequest &&) = default ;
    ListPipelineRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRunsRequest() = default ;
    ListPipelineRunsRequest& operator=(const ListPipelineRunsRequest &) = default ;
    ListPipelineRunsRequest& operator=(ListPipelineRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->triggerType_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListPipelineRunsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPipelineRunsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPipelineRunsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListPipelineRunsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPipelineRunsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListPipelineRunsRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The upper bound for filtering by trigger time (triggered_at <= endTime), in UNIX seconds.
    shared_ptr<int64_t> endTime_ {};
    // The maximum number of entries to return in the current request. Default value: 50. Maximum value: 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Pass the nextToken value from the previous response to retrieve the next page. Do not specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The lower bound for filtering by trigger time (triggered_at >= startTime), in UNIX seconds.
    shared_ptr<int64_t> startTime_ {};
    // Filters runs by status. Valid values: Pending, Running, Succeeded, Failed, and Cancelled. If you do not specify this parameter, no filtering is applied.
    shared_ptr<string> status_ {};
    // Filters runs by trigger type. Valid values: Continuous, RunOnce, and Scheduled. If you do not specify this parameter, no filtering is applied.
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
