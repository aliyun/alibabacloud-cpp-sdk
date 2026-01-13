// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(applicationConfigs, applicationConfigs_);
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
      DARABONBA_PTR_TO_JSON(runtimeConfigs, runtimeConfigs_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(states, states_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfigs, applicationConfigs_);
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
      DARABONBA_PTR_FROM_JSON(runtimeConfigs, runtimeConfigs_);
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N.
      shared_ptr<string> key_ {};
      // The value of tag N.
      shared_ptr<string> value_ {};
    };

    class StartTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StartTime& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, StartTime& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      StartTime() = default ;
      StartTime(const StartTime &) = default ;
      StartTime(StartTime &&) = default ;
      StartTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StartTime() = default ;
      StartTime& operator=(const StartTime &) = default ;
      StartTime& operator=(StartTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline StartTime& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline StartTime& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end of the start time range.
      shared_ptr<int64_t> endTime_ {};
      // The beginning of the start time range.
      shared_ptr<int64_t> startTime_ {};
    };

    class EndTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndTime& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, EndTime& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      EndTime() = default ;
      EndTime(const EndTime &) = default ;
      EndTime(EndTime &&) = default ;
      EndTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndTime() = default ;
      EndTime& operator=(const EndTime &) = default ;
      EndTime& operator=(EndTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline EndTime& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline EndTime& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end of the end time range.
      shared_ptr<int64_t> endTime_ {};
      // The beginning of the end time range.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->creator_ == nullptr && this->endTime_ == nullptr && this->isWorkflow_ == nullptr && this->jobRunDeploymentId_ == nullptr && this->jobRunId_ == nullptr
        && this->maxResults_ == nullptr && this->minDuration_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->resourceQueueId_ == nullptr && this->runtimeConfigs_ == nullptr && this->startTime_ == nullptr && this->states_ == nullptr && this->tags_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline string getApplicationConfigs() const { DARABONBA_PTR_GET_DEFAULT(applicationConfigs_, "") };
    inline ListJobRunsRequest& setApplicationConfigs(string applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListJobRunsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline const ListJobRunsRequest::EndTime & getEndTime() const { DARABONBA_PTR_GET_CONST(endTime_, ListJobRunsRequest::EndTime) };
    inline ListJobRunsRequest::EndTime getEndTime() { DARABONBA_PTR_GET(endTime_, ListJobRunsRequest::EndTime) };
    inline ListJobRunsRequest& setEndTime(const ListJobRunsRequest::EndTime & endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };
    inline ListJobRunsRequest& setEndTime(ListJobRunsRequest::EndTime && endTime) { DARABONBA_PTR_SET_RVALUE(endTime_, endTime) };


    // isWorkflow Field Functions 
    bool hasIsWorkflow() const { return this->isWorkflow_ != nullptr;};
    void deleteIsWorkflow() { this->isWorkflow_ = nullptr;};
    inline string getIsWorkflow() const { DARABONBA_PTR_GET_DEFAULT(isWorkflow_, "") };
    inline ListJobRunsRequest& setIsWorkflow(string isWorkflow) { DARABONBA_PTR_SET_VALUE(isWorkflow_, isWorkflow) };


    // jobRunDeploymentId Field Functions 
    bool hasJobRunDeploymentId() const { return this->jobRunDeploymentId_ != nullptr;};
    void deleteJobRunDeploymentId() { this->jobRunDeploymentId_ = nullptr;};
    inline string getJobRunDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(jobRunDeploymentId_, "") };
    inline ListJobRunsRequest& setJobRunDeploymentId(string jobRunDeploymentId) { DARABONBA_PTR_SET_VALUE(jobRunDeploymentId_, jobRunDeploymentId) };


    // jobRunId Field Functions 
    bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
    void deleteJobRunId() { this->jobRunId_ = nullptr;};
    inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
    inline ListJobRunsRequest& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListJobRunsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline int64_t getMinDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, 0L) };
    inline ListJobRunsRequest& setMinDuration(int64_t minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListJobRunsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobRunsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListJobRunsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string getResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline ListJobRunsRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // runtimeConfigs Field Functions 
    bool hasRuntimeConfigs() const { return this->runtimeConfigs_ != nullptr;};
    void deleteRuntimeConfigs() { this->runtimeConfigs_ = nullptr;};
    inline string getRuntimeConfigs() const { DARABONBA_PTR_GET_DEFAULT(runtimeConfigs_, "") };
    inline ListJobRunsRequest& setRuntimeConfigs(string runtimeConfigs) { DARABONBA_PTR_SET_VALUE(runtimeConfigs_, runtimeConfigs) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline const ListJobRunsRequest::StartTime & getStartTime() const { DARABONBA_PTR_GET_CONST(startTime_, ListJobRunsRequest::StartTime) };
    inline ListJobRunsRequest::StartTime getStartTime() { DARABONBA_PTR_GET(startTime_, ListJobRunsRequest::StartTime) };
    inline ListJobRunsRequest& setStartTime(const ListJobRunsRequest::StartTime & startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };
    inline ListJobRunsRequest& setStartTime(ListJobRunsRequest::StartTime && startTime) { DARABONBA_PTR_SET_RVALUE(startTime_, startTime) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<string> & getStates() const { DARABONBA_PTR_GET_CONST(states_, vector<string>) };
    inline vector<string> getStates() { DARABONBA_PTR_GET(states_, vector<string>) };
    inline ListJobRunsRequest& setStates(const vector<string> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline ListJobRunsRequest& setStates(vector<string> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListJobRunsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListJobRunsRequest::Tags>) };
    inline vector<ListJobRunsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListJobRunsRequest::Tags>) };
    inline ListJobRunsRequest& setTags(const vector<ListJobRunsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListJobRunsRequest& setTags(vector<ListJobRunsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<string> applicationConfigs_ {};
    // The ID of the user who created the job.
    shared_ptr<string> creator_ {};
    // The range of end time.
    shared_ptr<ListJobRunsRequest::EndTime> endTime_ {};
    shared_ptr<string> isWorkflow_ {};
    // The job run ID.
    shared_ptr<string> jobRunDeploymentId_ {};
    // The job ID.
    shared_ptr<string> jobRunId_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The minimum running duration of the job. Unit: ms.
    shared_ptr<int64_t> minDuration_ {};
    // The job name.
    shared_ptr<string> name_ {};
    // The pagination token that is used in the request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The name of the resource queue on which the Spark jobs run.
    shared_ptr<string> resourceQueueId_ {};
    shared_ptr<string> runtimeConfigs_ {};
    // The range of start time.
    shared_ptr<ListJobRunsRequest::StartTime> startTime_ {};
    // The job states.
    shared_ptr<vector<string>> states_ {};
    // The tags of the job.
    shared_ptr<vector<ListJobRunsRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
