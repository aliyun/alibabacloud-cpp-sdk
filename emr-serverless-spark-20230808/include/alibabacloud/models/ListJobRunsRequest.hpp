// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobRunsRequestEndTime.hpp>
#include <alibabacloud/models/ListJobRunsRequestStartTime.hpp>
#include <vector>
#include <alibabacloud/models/ListJobRunsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListJobRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(isWorkflow, isWorkflow_);
      DARABONBA_PTR_TO_JSON(jobRunDeploymentId, jobRunDeploymentId_);
      DARABONBA_PTR_TO_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(minDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(states, states_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(isWorkflow, isWorkflow_);
      DARABONBA_PTR_FROM_JSON(jobRunDeploymentId, jobRunDeploymentId_);
      DARABONBA_PTR_FROM_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(minDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(states, states_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ListJobRunsRequest() = default ;
    ListJobRunsRequest(const ListJobRunsRequest &) = default ;
    ListJobRunsRequest(ListJobRunsRequest &&) = default ;
    ListJobRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobRunsRequest() = default ;
    ListJobRunsRequest& operator=(const ListJobRunsRequest &) = default ;
    ListJobRunsRequest& operator=(ListJobRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creator_ != nullptr
        && this->endTime_ != nullptr && this->isWorkflow_ != nullptr && this->jobRunDeploymentId_ != nullptr && this->jobRunId_ != nullptr && this->maxResults_ != nullptr
        && this->minDuration_ != nullptr && this->name_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->resourceQueueId_ != nullptr
        && this->startTime_ != nullptr && this->states_ != nullptr && this->tags_ != nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListJobRunsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline const ListJobRunsRequestEndTime & endTime() const { DARABONBA_PTR_GET_CONST(endTime_, ListJobRunsRequestEndTime) };
    inline ListJobRunsRequestEndTime endTime() { DARABONBA_PTR_GET(endTime_, ListJobRunsRequestEndTime) };
    inline ListJobRunsRequest& setEndTime(const ListJobRunsRequestEndTime & endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };
    inline ListJobRunsRequest& setEndTime(ListJobRunsRequestEndTime && endTime) { DARABONBA_PTR_SET_RVALUE(endTime_, endTime) };


    // isWorkflow Field Functions 
    bool hasIsWorkflow() const { return this->isWorkflow_ != nullptr;};
    void deleteIsWorkflow() { this->isWorkflow_ = nullptr;};
    inline string isWorkflow() const { DARABONBA_PTR_GET_DEFAULT(isWorkflow_, "") };
    inline ListJobRunsRequest& setIsWorkflow(string isWorkflow) { DARABONBA_PTR_SET_VALUE(isWorkflow_, isWorkflow) };


    // jobRunDeploymentId Field Functions 
    bool hasJobRunDeploymentId() const { return this->jobRunDeploymentId_ != nullptr;};
    void deleteJobRunDeploymentId() { this->jobRunDeploymentId_ = nullptr;};
    inline string jobRunDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(jobRunDeploymentId_, "") };
    inline ListJobRunsRequest& setJobRunDeploymentId(string jobRunDeploymentId) { DARABONBA_PTR_SET_VALUE(jobRunDeploymentId_, jobRunDeploymentId) };


    // jobRunId Field Functions 
    bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
    void deleteJobRunId() { this->jobRunId_ = nullptr;};
    inline string jobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
    inline ListJobRunsRequest& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJobRunsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t minDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline ListJobRunsRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListJobRunsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobRunsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListJobRunsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline ListJobRunsRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline const ListJobRunsRequestStartTime & startTime() const { DARABONBA_PTR_GET_CONST(startTime_, ListJobRunsRequestStartTime) };
    inline ListJobRunsRequestStartTime startTime() { DARABONBA_PTR_GET(startTime_, ListJobRunsRequestStartTime) };
    inline ListJobRunsRequest& setStartTime(const ListJobRunsRequestStartTime & startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };
    inline ListJobRunsRequest& setStartTime(ListJobRunsRequestStartTime && startTime) { DARABONBA_PTR_SET_RVALUE(startTime_, startTime) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<string> & states() const { DARABONBA_PTR_GET_CONST(states_, vector<string>) };
    inline vector<string> states() { DARABONBA_PTR_GET(states_, vector<string>) };
    inline ListJobRunsRequest& setStates(const vector<string> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline ListJobRunsRequest& setStates(vector<string> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListJobRunsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListJobRunsRequestTags>) };
    inline vector<ListJobRunsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListJobRunsRequestTags>) };
    inline ListJobRunsRequest& setTags(const vector<ListJobRunsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListJobRunsRequest& setTags(vector<ListJobRunsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the user who created the job.
    std::shared_ptr<string> creator_ = nullptr;
    // The range of end time.
    std::shared_ptr<ListJobRunsRequestEndTime> endTime_ = nullptr;
    std::shared_ptr<string> isWorkflow_ = nullptr;
    // The job run ID.
    std::shared_ptr<string> jobRunDeploymentId_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobRunId_ = nullptr;
    // The maximum number of entries to return.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The minimum running duration of the job. Unit: ms.
    std::shared_ptr<int64_t> minDuration_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The pagination token that is used in the request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the resource queue on which the Spark jobs run.
    std::shared_ptr<string> resourceQueueId_ = nullptr;
    // The range of start time.
    std::shared_ptr<ListJobRunsRequestStartTime> startTime_ = nullptr;
    // The job states.
    std::shared_ptr<vector<string>> states_ = nullptr;
    // The tags of the job.
    std::shared_ptr<vector<ListJobRunsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
