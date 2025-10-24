// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySnapshotJobListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotJobListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndOfJobCreatedTimeRange, endOfJobCreatedTimeRange_);
      DARABONBA_PTR_TO_JSON(MaximumPageSize, maximumPageSize_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnapshotJobIds, snapshotJobIds_);
      DARABONBA_PTR_TO_JSON(StartOfJobCreatedTimeRange, startOfJobCreatedTimeRange_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySnapshotJobListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndOfJobCreatedTimeRange, endOfJobCreatedTimeRange_);
      DARABONBA_PTR_FROM_JSON(MaximumPageSize, maximumPageSize_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJobIds, snapshotJobIds_);
      DARABONBA_PTR_FROM_JSON(StartOfJobCreatedTimeRange, startOfJobCreatedTimeRange_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    QuerySnapshotJobListRequest() = default ;
    QuerySnapshotJobListRequest(const QuerySnapshotJobListRequest &) = default ;
    QuerySnapshotJobListRequest(QuerySnapshotJobListRequest &&) = default ;
    QuerySnapshotJobListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotJobListRequest() = default ;
    QuerySnapshotJobListRequest& operator=(const QuerySnapshotJobListRequest &) = default ;
    QuerySnapshotJobListRequest& operator=(QuerySnapshotJobListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endOfJobCreatedTimeRange_ == nullptr
        && return this->maximumPageSize_ == nullptr && return this->nextPageToken_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pipelineId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->snapshotJobIds_ == nullptr && return this->startOfJobCreatedTimeRange_ == nullptr && return this->state_ == nullptr; };
    // endOfJobCreatedTimeRange Field Functions 
    bool hasEndOfJobCreatedTimeRange() const { return this->endOfJobCreatedTimeRange_ != nullptr;};
    void deleteEndOfJobCreatedTimeRange() { this->endOfJobCreatedTimeRange_ = nullptr;};
    inline string endOfJobCreatedTimeRange() const { DARABONBA_PTR_GET_DEFAULT(endOfJobCreatedTimeRange_, "") };
    inline QuerySnapshotJobListRequest& setEndOfJobCreatedTimeRange(string endOfJobCreatedTimeRange) { DARABONBA_PTR_SET_VALUE(endOfJobCreatedTimeRange_, endOfJobCreatedTimeRange) };


    // maximumPageSize Field Functions 
    bool hasMaximumPageSize() const { return this->maximumPageSize_ != nullptr;};
    void deleteMaximumPageSize() { this->maximumPageSize_ = nullptr;};
    inline int64_t maximumPageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumPageSize_, 0L) };
    inline QuerySnapshotJobListRequest& setMaximumPageSize(int64_t maximumPageSize) { DARABONBA_PTR_SET_VALUE(maximumPageSize_, maximumPageSize) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline QuerySnapshotJobListRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QuerySnapshotJobListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySnapshotJobListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QuerySnapshotJobListRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySnapshotJobListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySnapshotJobListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snapshotJobIds Field Functions 
    bool hasSnapshotJobIds() const { return this->snapshotJobIds_ != nullptr;};
    void deleteSnapshotJobIds() { this->snapshotJobIds_ = nullptr;};
    inline string snapshotJobIds() const { DARABONBA_PTR_GET_DEFAULT(snapshotJobIds_, "") };
    inline QuerySnapshotJobListRequest& setSnapshotJobIds(string snapshotJobIds) { DARABONBA_PTR_SET_VALUE(snapshotJobIds_, snapshotJobIds) };


    // startOfJobCreatedTimeRange Field Functions 
    bool hasStartOfJobCreatedTimeRange() const { return this->startOfJobCreatedTimeRange_ != nullptr;};
    void deleteStartOfJobCreatedTimeRange() { this->startOfJobCreatedTimeRange_ = nullptr;};
    inline string startOfJobCreatedTimeRange() const { DARABONBA_PTR_GET_DEFAULT(startOfJobCreatedTimeRange_, "") };
    inline QuerySnapshotJobListRequest& setStartOfJobCreatedTimeRange(string startOfJobCreatedTimeRange) { DARABONBA_PTR_SET_VALUE(startOfJobCreatedTimeRange_, startOfJobCreatedTimeRange) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QuerySnapshotJobListRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The snapshot configuration.
    std::shared_ptr<string> endOfJobCreatedTimeRange_ = nullptr;
    // The ID of the MPS queue to which the snapshot jobs that you want to query are submitted. To obtain the ID, you can log on to the **MPS console** and choose **Global Settings** > **Pipelines** in the left-side navigation pane.
    std::shared_ptr<int64_t> maximumPageSize_ = nullptr;
    // The end of the time range within which the creation time of snapshot jobs to be queried is.
    // 
    // *   Specify the time in the ISO 8601 standard in the
    // *   YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The start time for taking snapshots. Unit: milliseconds.
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The beginning of the time range within which the creation time of snapshot jobs to be queried is.
    // 
    // *   Specify the time in the ISO 8601 standard in the
    // *   YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> snapshotJobIds_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> startOfJobCreatedTimeRange_ = nullptr;
    // The information about the snapshot jobs.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
