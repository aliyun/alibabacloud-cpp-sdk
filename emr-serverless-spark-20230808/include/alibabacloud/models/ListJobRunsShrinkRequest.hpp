// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRUNSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRUNSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListJobRunsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobRunsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(endTime, endTimeShrink_);
      DARABONBA_PTR_TO_JSON(isWorkflow, isWorkflow_);
      DARABONBA_PTR_TO_JSON(jobRunDeploymentId, jobRunDeploymentId_);
      DARABONBA_PTR_TO_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(minDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(runtimeConfigs, runtimeConfigs_);
      DARABONBA_PTR_TO_JSON(startTime, startTimeShrink_);
      DARABONBA_PTR_TO_JSON(states, statesShrink_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobRunsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(endTime, endTimeShrink_);
      DARABONBA_PTR_FROM_JSON(isWorkflow, isWorkflow_);
      DARABONBA_PTR_FROM_JSON(jobRunDeploymentId, jobRunDeploymentId_);
      DARABONBA_PTR_FROM_JSON(jobRunId, jobRunId_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(minDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(runtimeConfigs, runtimeConfigs_);
      DARABONBA_PTR_FROM_JSON(startTime, startTimeShrink_);
      DARABONBA_PTR_FROM_JSON(states, statesShrink_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
    };
    ListJobRunsShrinkRequest() = default ;
    ListJobRunsShrinkRequest(const ListJobRunsShrinkRequest &) = default ;
    ListJobRunsShrinkRequest(ListJobRunsShrinkRequest &&) = default ;
    ListJobRunsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobRunsShrinkRequest() = default ;
    ListJobRunsShrinkRequest& operator=(const ListJobRunsShrinkRequest &) = default ;
    ListJobRunsShrinkRequest& operator=(ListJobRunsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfigs_ != nullptr
        && this->creator_ != nullptr && this->endTimeShrink_ != nullptr && this->isWorkflow_ != nullptr && this->jobRunDeploymentId_ != nullptr && this->jobRunId_ != nullptr
        && this->maxResults_ != nullptr && this->minDuration_ != nullptr && this->name_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr
        && this->resourceQueueId_ != nullptr && this->runtimeConfigs_ != nullptr && this->startTimeShrink_ != nullptr && this->statesShrink_ != nullptr && this->tagsShrink_ != nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline string applicationConfigs() const { DARABONBA_PTR_GET_DEFAULT(applicationConfigs_, "") };
    inline ListJobRunsShrinkRequest& setApplicationConfigs(string applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListJobRunsShrinkRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // endTimeShrink Field Functions 
    bool hasEndTimeShrink() const { return this->endTimeShrink_ != nullptr;};
    void deleteEndTimeShrink() { this->endTimeShrink_ = nullptr;};
    inline string endTimeShrink() const { DARABONBA_PTR_GET_DEFAULT(endTimeShrink_, "") };
    inline ListJobRunsShrinkRequest& setEndTimeShrink(string endTimeShrink) { DARABONBA_PTR_SET_VALUE(endTimeShrink_, endTimeShrink) };


    // isWorkflow Field Functions 
    bool hasIsWorkflow() const { return this->isWorkflow_ != nullptr;};
    void deleteIsWorkflow() { this->isWorkflow_ = nullptr;};
    inline string isWorkflow() const { DARABONBA_PTR_GET_DEFAULT(isWorkflow_, "") };
    inline ListJobRunsShrinkRequest& setIsWorkflow(string isWorkflow) { DARABONBA_PTR_SET_VALUE(isWorkflow_, isWorkflow) };


    // jobRunDeploymentId Field Functions 
    bool hasJobRunDeploymentId() const { return this->jobRunDeploymentId_ != nullptr;};
    void deleteJobRunDeploymentId() { this->jobRunDeploymentId_ = nullptr;};
    inline string jobRunDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(jobRunDeploymentId_, "") };
    inline ListJobRunsShrinkRequest& setJobRunDeploymentId(string jobRunDeploymentId) { DARABONBA_PTR_SET_VALUE(jobRunDeploymentId_, jobRunDeploymentId) };


    // jobRunId Field Functions 
    bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
    void deleteJobRunId() { this->jobRunId_ = nullptr;};
    inline string jobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
    inline ListJobRunsShrinkRequest& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJobRunsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t minDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline ListJobRunsShrinkRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListJobRunsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobRunsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListJobRunsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline ListJobRunsShrinkRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // runtimeConfigs Field Functions 
    bool hasRuntimeConfigs() const { return this->runtimeConfigs_ != nullptr;};
    void deleteRuntimeConfigs() { this->runtimeConfigs_ = nullptr;};
    inline string runtimeConfigs() const { DARABONBA_PTR_GET_DEFAULT(runtimeConfigs_, "") };
    inline ListJobRunsShrinkRequest& setRuntimeConfigs(string runtimeConfigs) { DARABONBA_PTR_SET_VALUE(runtimeConfigs_, runtimeConfigs) };


    // startTimeShrink Field Functions 
    bool hasStartTimeShrink() const { return this->startTimeShrink_ != nullptr;};
    void deleteStartTimeShrink() { this->startTimeShrink_ = nullptr;};
    inline string startTimeShrink() const { DARABONBA_PTR_GET_DEFAULT(startTimeShrink_, "") };
    inline ListJobRunsShrinkRequest& setStartTimeShrink(string startTimeShrink) { DARABONBA_PTR_SET_VALUE(startTimeShrink_, startTimeShrink) };


    // statesShrink Field Functions 
    bool hasStatesShrink() const { return this->statesShrink_ != nullptr;};
    void deleteStatesShrink() { this->statesShrink_ = nullptr;};
    inline string statesShrink() const { DARABONBA_PTR_GET_DEFAULT(statesShrink_, "") };
    inline ListJobRunsShrinkRequest& setStatesShrink(string statesShrink) { DARABONBA_PTR_SET_VALUE(statesShrink_, statesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListJobRunsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    std::shared_ptr<string> applicationConfigs_ = nullptr;
    // The ID of the user who created the job.
    std::shared_ptr<string> creator_ = nullptr;
    // The range of end time.
    std::shared_ptr<string> endTimeShrink_ = nullptr;
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
    std::shared_ptr<string> runtimeConfigs_ = nullptr;
    // The range of start time.
    std::shared_ptr<string> startTimeShrink_ = nullptr;
    // The job states.
    std::shared_ptr<string> statesShrink_ = nullptr;
    // The tags of the job.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
