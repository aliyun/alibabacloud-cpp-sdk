// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaCensorJobListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListRequest& obj) { 
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
    QueryMediaCensorJobListRequest() = default ;
    QueryMediaCensorJobListRequest(const QueryMediaCensorJobListRequest &) = default ;
    QueryMediaCensorJobListRequest(QueryMediaCensorJobListRequest &&) = default ;
    QueryMediaCensorJobListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListRequest() = default ;
    QueryMediaCensorJobListRequest& operator=(const QueryMediaCensorJobListRequest &) = default ;
    QueryMediaCensorJobListRequest& operator=(QueryMediaCensorJobListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endOfJobCreatedTimeRange_ != nullptr
        && this->jobIds_ != nullptr && this->maximumPageSize_ != nullptr && this->nextPageToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->pipelineId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->startOfJobCreatedTimeRange_ != nullptr && this->state_ != nullptr; };
    // endOfJobCreatedTimeRange Field Functions 
    bool hasEndOfJobCreatedTimeRange() const { return this->endOfJobCreatedTimeRange_ != nullptr;};
    void deleteEndOfJobCreatedTimeRange() { this->endOfJobCreatedTimeRange_ = nullptr;};
    inline string endOfJobCreatedTimeRange() const { DARABONBA_PTR_GET_DEFAULT(endOfJobCreatedTimeRange_, "") };
    inline QueryMediaCensorJobListRequest& setEndOfJobCreatedTimeRange(string endOfJobCreatedTimeRange) { DARABONBA_PTR_SET_VALUE(endOfJobCreatedTimeRange_, endOfJobCreatedTimeRange) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string jobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline QueryMediaCensorJobListRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // maximumPageSize Field Functions 
    bool hasMaximumPageSize() const { return this->maximumPageSize_ != nullptr;};
    void deleteMaximumPageSize() { this->maximumPageSize_ = nullptr;};
    inline int64_t maximumPageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumPageSize_, 0L) };
    inline QueryMediaCensorJobListRequest& setMaximumPageSize(int64_t maximumPageSize) { DARABONBA_PTR_SET_VALUE(maximumPageSize_, maximumPageSize) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QueryMediaCensorJobListRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QueryMediaCensorJobListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryMediaCensorJobListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryMediaCensorJobListRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryMediaCensorJobListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryMediaCensorJobListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startOfJobCreatedTimeRange Field Functions 
    bool hasStartOfJobCreatedTimeRange() const { return this->startOfJobCreatedTimeRange_ != nullptr;};
    void deleteStartOfJobCreatedTimeRange() { this->startOfJobCreatedTimeRange_ = nullptr;};
    inline string startOfJobCreatedTimeRange() const { DARABONBA_PTR_GET_DEFAULT(startOfJobCreatedTimeRange_, "") };
    inline QueryMediaCensorJobListRequest& setStartOfJobCreatedTimeRange(string startOfJobCreatedTimeRange) { DARABONBA_PTR_SET_VALUE(startOfJobCreatedTimeRange_, startOfJobCreatedTimeRange) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryMediaCensorJobListRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The end of the time range to query.
    // 
    // *   Specify the time in the ISO 8601 standard. The time must be in UTC.
    // *   Format: yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> endOfJobCreatedTimeRange_ = nullptr;
    // The IDs of the content moderation jobs. You can obtain the ID of a content moderation job from the response parameters of the SubmitMediaCensorJob operation. Separate multiple IDs with commas (,).
    std::shared_ptr<string> jobIds_ = nullptr;
    // The number of entries per page.
    // 
    // *   Default value: **30**.
    // *   Valid values: **1 to 300**.
    std::shared_ptr<int64_t> maximumPageSize_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the ApsaraVideo Media Processing (MPS) queue to which the jobs were submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The beginning of the time range to query.
    // 
    // *   Specify the time in the ISO 8601 standard. The time must be in UTC.
    // *   Format: yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> startOfJobCreatedTimeRange_ = nullptr;
    // The state of the jobs that you want to query. Valid values:
    // 
    // *   **All**: all jobs.
    // *   **Queuing**: the jobs that are waiting in the queue.
    // *   **Analysing**: the jobs that are in progress.
    // *   **Fail**: failed jobs.
    // *   **Success**: successful jobs.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
