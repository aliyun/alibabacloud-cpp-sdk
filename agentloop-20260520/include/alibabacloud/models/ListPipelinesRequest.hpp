// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListPipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(scheduleStatus, scheduleStatus_);
      DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(sinkName, sinkName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(scheduleStatus, scheduleStatus_);
      DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(sinkName, sinkName_);
    };
    ListPipelinesRequest() = default ;
    ListPipelinesRequest(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest(ListPipelinesRequest &&) = default ;
    ListPipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesRequest() = default ;
    ListPipelinesRequest& operator=(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest& operator=(ListPipelinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pipelineName_ == nullptr && this->scheduleStatus_ == nullptr && this->scheduleType_ == nullptr && this->sinkName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPipelinesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPipelinesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline ListPipelinesRequest& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // scheduleStatus Field Functions 
    bool hasScheduleStatus() const { return this->scheduleStatus_ != nullptr;};
    void deleteScheduleStatus() { this->scheduleStatus_ = nullptr;};
    inline string getScheduleStatus() const { DARABONBA_PTR_GET_DEFAULT(scheduleStatus_, "") };
    inline ListPipelinesRequest& setScheduleStatus(string scheduleStatus) { DARABONBA_PTR_SET_VALUE(scheduleStatus_, scheduleStatus) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline ListPipelinesRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // sinkName Field Functions 
    bool hasSinkName() const { return this->sinkName_ != nullptr;};
    void deleteSinkName() { this->sinkName_ = nullptr;};
    inline string getSinkName() const { DARABONBA_PTR_GET_DEFAULT(sinkName_, "") };
    inline ListPipelinesRequest& setSinkName(string sinkName) { DARABONBA_PTR_SET_VALUE(sinkName_, sinkName) };


  protected:
    // The maximum number of pipelines to return. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the nextToken value returned in the previous response to retrieve the next page. Do not specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // Filters pipelines by name using exact match. If this parameter is not specified, no filtering is applied.
    shared_ptr<string> pipelineName_ {};
    // Filters pipelines by schedule status. If this parameter is not specified, no filtering is applied. Valid values:
    // - None: No schedule.
    // - Active: Active.
    // - Paused: Paused.
    // - Terminated: Terminated.
    shared_ptr<string> scheduleStatus_ {};
    // Filters pipelines by schedule type. If this parameter is not specified, no filtering is applied. Valid values:
    // - RunOnce: One-time execution.
    // - Scheduled: Periodic scheduling.
    shared_ptr<string> scheduleType_ {};
    // Filters pipelines by the exact name of the output dataset. Matches standard sinks, conditional branch sinks, and default sinks. If this parameter is not specified, no filtering is applied.
    shared_ptr<string> sinkName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
