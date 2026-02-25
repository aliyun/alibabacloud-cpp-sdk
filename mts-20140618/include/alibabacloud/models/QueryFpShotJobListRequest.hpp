// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndOfJobCreatedTimeRange, endOfJobCreatedTimeRange_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(MaximumPageSize, maximumPageSize_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartOfJobCreatedTimeRange, startOfJobCreatedTimeRange_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndOfJobCreatedTimeRange, endOfJobCreatedTimeRange_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(MaximumPageSize, maximumPageSize_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartOfJobCreatedTimeRange, startOfJobCreatedTimeRange_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    QueryFpShotJobListRequest() = default ;
    QueryFpShotJobListRequest(const QueryFpShotJobListRequest &) = default ;
    QueryFpShotJobListRequest(QueryFpShotJobListRequest &&) = default ;
    QueryFpShotJobListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListRequest() = default ;
    QueryFpShotJobListRequest& operator=(const QueryFpShotJobListRequest &) = default ;
    QueryFpShotJobListRequest& operator=(QueryFpShotJobListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endOfJobCreatedTimeRange_ == nullptr
        && this->jobIds_ == nullptr && this->maximumPageSize_ == nullptr && this->nextPageToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->pipelineId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startOfJobCreatedTimeRange_ == nullptr && this->state_ == nullptr; };
    // endOfJobCreatedTimeRange Field Functions 
    bool hasEndOfJobCreatedTimeRange() const { return this->endOfJobCreatedTimeRange_ != nullptr;};
    void deleteEndOfJobCreatedTimeRange() { this->endOfJobCreatedTimeRange_ = nullptr;};
    inline string getEndOfJobCreatedTimeRange() const { DARABONBA_PTR_GET_DEFAULT(endOfJobCreatedTimeRange_, "") };
    inline QueryFpShotJobListRequest& setEndOfJobCreatedTimeRange(string endOfJobCreatedTimeRange) { DARABONBA_PTR_SET_VALUE(endOfJobCreatedTimeRange_, endOfJobCreatedTimeRange) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string getJobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline QueryFpShotJobListRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // maximumPageSize Field Functions 
    bool hasMaximumPageSize() const { return this->maximumPageSize_ != nullptr;};
    void deleteMaximumPageSize() { this->maximumPageSize_ = nullptr;};
    inline int64_t getMaximumPageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumPageSize_, 0L) };
    inline QueryFpShotJobListRequest& setMaximumPageSize(int64_t maximumPageSize) { DARABONBA_PTR_SET_VALUE(maximumPageSize_, maximumPageSize) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QueryFpShotJobListRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QueryFpShotJobListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryFpShotJobListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryFpShotJobListRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryFpShotJobListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryFpShotJobListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startOfJobCreatedTimeRange Field Functions 
    bool hasStartOfJobCreatedTimeRange() const { return this->startOfJobCreatedTimeRange_ != nullptr;};
    void deleteStartOfJobCreatedTimeRange() { this->startOfJobCreatedTimeRange_ = nullptr;};
    inline string getStartOfJobCreatedTimeRange() const { DARABONBA_PTR_GET_DEFAULT(startOfJobCreatedTimeRange_, "") };
    inline QueryFpShotJobListRequest& setStartOfJobCreatedTimeRange(string startOfJobCreatedTimeRange) { DARABONBA_PTR_SET_VALUE(startOfJobCreatedTimeRange_, startOfJobCreatedTimeRange) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryFpShotJobListRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The end of the time range within which the jobs to be queried were created. 
    // 
    // *   Specify the time in the ISO 8601 standard in the
    // *   YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endOfJobCreatedTimeRange_ {};
    // The ID of the media fingerprint analysis job that you want to query. To view the job ID, log on to the [ApsaraVideo Media Processing (MPS) console](https://mps.console.aliyun.com/overview), click **Tasks** in the left-side navigation pane, and then click the **Video DNA** tab on the Tasks page. You can query up to 10 media fingerprint analysis jobs at a time. Separate multiple job IDs with commas (,).
    shared_ptr<string> jobIds_ {};
    // The maximum number of entries to return on each page. 
    // 
    // *   Default value: **10**.
    // *   Valid values: **1 to 100**.
    shared_ptr<int64_t> maximumPageSize_ {};
    // The token that is used to retrieve the next page of the query results. You do not need to specify this parameter in the first request. The response to the first request contains this parameter, which you add to the next request.
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the MPS queue. To view the ID of the MPS queue, log on to the [MPS console](https://mps.console.aliyun.com/overview) and choose **Global Settings** > **Pipelines** in the left-side navigation pane.
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The beginning of the time range within which the jobs to be queried were created. 
    // 
    // *   Specify the time in the ISO 8601 standard in the
    // *   YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> startOfJobCreatedTimeRange_ {};
    // The status of the jobs to be queried. Valid values:
    // 
    // *   **All**: all jobs.
    // *   **Queuing**: the jobs that are being queued.
    // *   **Analysing**: the jobs that are in progress.
    // *   **Fail**: failed jobs.
    // *   **Success**: successful jobs.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
