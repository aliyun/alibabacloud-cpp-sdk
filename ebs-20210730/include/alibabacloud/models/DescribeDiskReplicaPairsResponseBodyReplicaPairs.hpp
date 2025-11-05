// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRSRESPONSEBODYREPLICAPAIRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRSRESPONSEBODYREPLICAPAIRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskReplicaPairsResponseBodyReplicaPairsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskReplicaPairsResponseBodyReplicaPairs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaPairsResponseBodyReplicaPairs& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationDiskId, destinationDiskId_);
      DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_TO_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_TO_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(LastRecoverPoint, lastRecoverPoint_);
      DARABONBA_PTR_TO_JSON(PairName, pairName_);
      DARABONBA_PTR_TO_JSON(PrimaryRegion, primaryRegion_);
      DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_TO_JSON(RPO, RPO_);
      DARABONBA_PTR_TO_JSON(ReplicaGroupId, replicaGroupId_);
      DARABONBA_PTR_TO_JSON(ReplicaGroupName, replicaGroupName_);
      DARABONBA_PTR_TO_JSON(ReplicaPairId, replicaPairId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_TO_JSON(StandbyRegion, standbyRegion_);
      DARABONBA_PTR_TO_JSON(StandbyZone, standbyZone_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaPairsResponseBodyReplicaPairs& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDiskId, destinationDiskId_);
      DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_FROM_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_FROM_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(LastRecoverPoint, lastRecoverPoint_);
      DARABONBA_PTR_FROM_JSON(PairName, pairName_);
      DARABONBA_PTR_FROM_JSON(PrimaryRegion, primaryRegion_);
      DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_FROM_JSON(RPO, RPO_);
      DARABONBA_PTR_FROM_JSON(ReplicaGroupId, replicaGroupId_);
      DARABONBA_PTR_FROM_JSON(ReplicaGroupName, replicaGroupName_);
      DARABONBA_PTR_FROM_JSON(ReplicaPairId, replicaPairId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_FROM_JSON(StandbyRegion, standbyRegion_);
      DARABONBA_PTR_FROM_JSON(StandbyZone, standbyZone_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeDiskReplicaPairsResponseBodyReplicaPairs() = default ;
    DescribeDiskReplicaPairsResponseBodyReplicaPairs(const DescribeDiskReplicaPairsResponseBodyReplicaPairs &) = default ;
    DescribeDiskReplicaPairsResponseBodyReplicaPairs(DescribeDiskReplicaPairsResponseBodyReplicaPairs &&) = default ;
    DescribeDiskReplicaPairsResponseBodyReplicaPairs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaPairsResponseBodyReplicaPairs() = default ;
    DescribeDiskReplicaPairsResponseBodyReplicaPairs& operator=(const DescribeDiskReplicaPairsResponseBodyReplicaPairs &) = default ;
    DescribeDiskReplicaPairsResponseBodyReplicaPairs& operator=(DescribeDiskReplicaPairsResponseBodyReplicaPairs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->chargeType_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->destinationDiskId_ == nullptr && return this->destinationRegion_ == nullptr
        && return this->destinationZoneId_ == nullptr && return this->enableRtc_ == nullptr && return this->expiredTime_ == nullptr && return this->lastRecoverPoint_ == nullptr && return this->pairName_ == nullptr
        && return this->primaryRegion_ == nullptr && return this->primaryZone_ == nullptr && return this->RPO_ == nullptr && return this->replicaGroupId_ == nullptr && return this->replicaGroupName_ == nullptr
        && return this->replicaPairId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->site_ == nullptr && return this->sourceDiskId_ == nullptr && return this->sourceRegion_ == nullptr
        && return this->sourceZoneId_ == nullptr && return this->standbyRegion_ == nullptr && return this->standbyZone_ == nullptr && return this->status_ == nullptr && return this->statusMessage_ == nullptr
        && return this->tags_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationDiskId Field Functions 
    bool hasDestinationDiskId() const { return this->destinationDiskId_ != nullptr;};
    void deleteDestinationDiskId() { this->destinationDiskId_ = nullptr;};
    inline string destinationDiskId() const { DARABONBA_PTR_GET_DEFAULT(destinationDiskId_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setDestinationDiskId(string destinationDiskId) { DARABONBA_PTR_SET_VALUE(destinationDiskId_, destinationDiskId) };


    // destinationRegion Field Functions 
    bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
    void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
    inline string destinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


    // destinationZoneId Field Functions 
    bool hasDestinationZoneId() const { return this->destinationZoneId_ != nullptr;};
    void deleteDestinationZoneId() { this->destinationZoneId_ = nullptr;};
    inline string destinationZoneId() const { DARABONBA_PTR_GET_DEFAULT(destinationZoneId_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setDestinationZoneId(string destinationZoneId) { DARABONBA_PTR_SET_VALUE(destinationZoneId_, destinationZoneId) };


    // enableRtc Field Functions 
    bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
    void deleteEnableRtc() { this->enableRtc_ = nullptr;};
    inline bool enableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // lastRecoverPoint Field Functions 
    bool hasLastRecoverPoint() const { return this->lastRecoverPoint_ != nullptr;};
    void deleteLastRecoverPoint() { this->lastRecoverPoint_ = nullptr;};
    inline int64_t lastRecoverPoint() const { DARABONBA_PTR_GET_DEFAULT(lastRecoverPoint_, 0L) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setLastRecoverPoint(int64_t lastRecoverPoint) { DARABONBA_PTR_SET_VALUE(lastRecoverPoint_, lastRecoverPoint) };


    // pairName Field Functions 
    bool hasPairName() const { return this->pairName_ != nullptr;};
    void deletePairName() { this->pairName_ = nullptr;};
    inline string pairName() const { DARABONBA_PTR_GET_DEFAULT(pairName_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setPairName(string pairName) { DARABONBA_PTR_SET_VALUE(pairName_, pairName) };


    // primaryRegion Field Functions 
    bool hasPrimaryRegion() const { return this->primaryRegion_ != nullptr;};
    void deletePrimaryRegion() { this->primaryRegion_ = nullptr;};
    inline string primaryRegion() const { DARABONBA_PTR_GET_DEFAULT(primaryRegion_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setPrimaryRegion(string primaryRegion) { DARABONBA_PTR_SET_VALUE(primaryRegion_, primaryRegion) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string primaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // RPO Field Functions 
    bool hasRPO() const { return this->RPO_ != nullptr;};
    void deleteRPO() { this->RPO_ = nullptr;};
    inline int64_t RPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


    // replicaGroupId Field Functions 
    bool hasReplicaGroupId() const { return this->replicaGroupId_ != nullptr;};
    void deleteReplicaGroupId() { this->replicaGroupId_ = nullptr;};
    inline string replicaGroupId() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupId_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setReplicaGroupId(string replicaGroupId) { DARABONBA_PTR_SET_VALUE(replicaGroupId_, replicaGroupId) };


    // replicaGroupName Field Functions 
    bool hasReplicaGroupName() const { return this->replicaGroupName_ != nullptr;};
    void deleteReplicaGroupName() { this->replicaGroupName_ = nullptr;};
    inline string replicaGroupName() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupName_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setReplicaGroupName(string replicaGroupName) { DARABONBA_PTR_SET_VALUE(replicaGroupName_, replicaGroupName) };


    // replicaPairId Field Functions 
    bool hasReplicaPairId() const { return this->replicaPairId_ != nullptr;};
    void deleteReplicaPairId() { this->replicaPairId_ = nullptr;};
    inline string replicaPairId() const { DARABONBA_PTR_GET_DEFAULT(replicaPairId_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setReplicaPairId(string replicaPairId) { DARABONBA_PTR_SET_VALUE(replicaPairId_, replicaPairId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string site() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // sourceDiskId Field Functions 
    bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
    void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
    inline string sourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string sourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // sourceZoneId Field Functions 
    bool hasSourceZoneId() const { return this->sourceZoneId_ != nullptr;};
    void deleteSourceZoneId() { this->sourceZoneId_ = nullptr;};
    inline string sourceZoneId() const { DARABONBA_PTR_GET_DEFAULT(sourceZoneId_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setSourceZoneId(string sourceZoneId) { DARABONBA_PTR_SET_VALUE(sourceZoneId_, sourceZoneId) };


    // standbyRegion Field Functions 
    bool hasStandbyRegion() const { return this->standbyRegion_ != nullptr;};
    void deleteStandbyRegion() { this->standbyRegion_ = nullptr;};
    inline string standbyRegion() const { DARABONBA_PTR_GET_DEFAULT(standbyRegion_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setStandbyRegion(string standbyRegion) { DARABONBA_PTR_SET_VALUE(standbyRegion_, standbyRegion) };


    // standbyZone Field Functions 
    bool hasStandbyZone() const { return this->standbyZone_ != nullptr;};
    void deleteStandbyZone() { this->standbyZone_ = nullptr;};
    inline string standbyZone() const { DARABONBA_PTR_GET_DEFAULT(standbyZone_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setStandbyZone(string standbyZone) { DARABONBA_PTR_SET_VALUE(standbyZone_, standbyZone) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDiskReplicaPairsResponseBodyReplicaPairsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDiskReplicaPairsResponseBodyReplicaPairsTags>) };
    inline vector<Models::DescribeDiskReplicaPairsResponseBodyReplicaPairsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDiskReplicaPairsResponseBodyReplicaPairsTags>) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setTags(const vector<Models::DescribeDiskReplicaPairsResponseBodyReplicaPairsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDiskReplicaPairsResponseBodyReplicaPairs& setTags(vector<Models::DescribeDiskReplicaPairsResponseBodyReplicaPairsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The bandwidth used to asynchronously replicate data from the primary disk to the secondary disk. Unit: Kbit/s.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The billing method of the replication pair. Valid values:
    // 
    // *   PREPAY: subscription
    // *   POSTPAY: pay-as-you-go
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the replication pair was created. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the replication pair.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the secondary disk.
    std::shared_ptr<string> destinationDiskId_ = nullptr;
    // The region ID of the secondary disk.
    std::shared_ptr<string> destinationRegion_ = nullptr;
    // The zone ID of the secondary disk.
    std::shared_ptr<string> destinationZoneId_ = nullptr;
    // Whether the replication time control is enabled. If the replication pair has been added to a replication group, it is consistent with the attributes of the replication group.
    std::shared_ptr<bool> enableRtc_ = nullptr;
    // The time when the replication pair expires. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> expiredTime_ = nullptr;
    // The time when data was last replicated from the primary disk to the secondary disk in the replication pair. The value of this parameter is a timestamp. Unit: seconds. 86,400 seconds is equivalent to 24 hours.
    std::shared_ptr<int64_t> lastRecoverPoint_ = nullptr;
    // The name of the replication pair.
    std::shared_ptr<string> pairName_ = nullptr;
    // The initial source region (primary region) of the replication pair.
    std::shared_ptr<string> primaryRegion_ = nullptr;
    // The initial source zone (primary zone) of the replication pair.
    std::shared_ptr<string> primaryZone_ = nullptr;
    // The recovery point objective (RPO) of the replication pair. Unit: seconds.
    std::shared_ptr<int64_t> RPO_ = nullptr;
    // The ID of the replication pair-consistent group to which the replication pair belongs.
    std::shared_ptr<string> replicaGroupId_ = nullptr;
    // The name of the replication pair-consistent group to which the replication pair belongs.
    std::shared_ptr<string> replicaGroupName_ = nullptr;
    // The ID of the replication pair.
    std::shared_ptr<string> replicaPairId_ = nullptr;
    // The ID of the resource group to which the replication pair belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the site from which the information about the replication pairs and replication pair-consistent group was obtained. Valid values:
    // 
    // *   production: primary site
    // *   backup: secondary site
    std::shared_ptr<string> site_ = nullptr;
    // The ID of the primary disk.
    std::shared_ptr<string> sourceDiskId_ = nullptr;
    // The region ID of the primary disk.
    std::shared_ptr<string> sourceRegion_ = nullptr;
    // The zone ID of the primary disk.
    std::shared_ptr<string> sourceZoneId_ = nullptr;
    // The initial destination region (secondary region) of the replication pair.
    std::shared_ptr<string> standbyRegion_ = nullptr;
    // The initial destination zone (secondary zone) of the replication pair.
    std::shared_ptr<string> standbyZone_ = nullptr;
    // The status of the replication pair. Valid values:
    // 
    // *   invalid: The replication pair was invalid. When a replication pair becomes abnormal, it enters this state.
    // *   creating: The replication pair was being created.
    // *   created: The replication pair was created.
    // *   create_failed: The replication pair failed to be created.
    // *   initial_syncing: Data was synchronized from the primary disk to the secondary disk for the first time. After a replication pair is created and activated, the replication pair is in this state the first time data is synchronized from the primary disk to the secondary disk.
    // *   manual_syncing: Data was being manually synchronized from the primary disk to the secondary disk. After data is manually synchronized from the primary disk to the secondary disk, the replication pair returns to the stopped state. The first time data is manually synchronized from the primary disk to the secondary disk, the replication pair is in the manual_syncing state during the synchronization.
    // *   syncing: Data was being synchronized from the primary disk to the secondary disk. When data is being asynchronously replicated from the primary disk to the secondary disk again in subsequent operations, the replication pair is in this state.
    // *   normal: The replication pair was working as expected. When the system finishes replicating data from the primary disk to the secondary disk within the current replication cycle, the replication pair enters this state.
    // *   stopping: The replication pair was being stopped.
    // *   stopped: The replication pair was stopped.
    // *   stop_failed: The replication pair failed to be stopped.
    // *   failovering: A failover was being performed.
    // *   failovered: A failover was performed.
    // *   failover_failed: A failover failed to be performed.
    // *   reprotecting: A reverse replication was being performed.
    // *   reprotect_failed: A reverse replication failed to be performed.
    // *   deleting: The replication pair was being deleted.
    // *   delete_failed: The replication pair failed to be deleted.
    // *   deleted: The replication pair was deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The message that describes the state of the replication pair. This parameter has a value when `Status` has a value of invalid or `create_failed`. Valid values:
    // 
    // *   PrePayOrderExpired: The replication pair has expired.
    // *   PostPayOrderCeaseService: The pay-as-you-go replication pair has been stopped due to an overdue payment.
    // *   DeviceRemoved: The primary or secondary disk has been deleted.
    // *   DeviceKeyChanged: The `DeviceKey` mapping of the primary or secondary disk has changed.
    // *   DeviceSizeChanged: The `DeviceSize` value of the primary or secondary disk has changed.
    // *   OperationDenied.QuotaExceed: The maximum number of replication pairs that can be created has been reached.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The tags of the replication pair.
    std::shared_ptr<vector<Models::DescribeDiskReplicaPairsResponseBodyReplicaPairsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
