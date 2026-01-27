// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskReplicaPairsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaPairsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReplicaPairs, replicaPairs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaPairsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReplicaPairs, replicaPairs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskReplicaPairsResponseBody() = default ;
    DescribeDiskReplicaPairsResponseBody(const DescribeDiskReplicaPairsResponseBody &) = default ;
    DescribeDiskReplicaPairsResponseBody(DescribeDiskReplicaPairsResponseBody &&) = default ;
    DescribeDiskReplicaPairsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaPairsResponseBody() = default ;
    DescribeDiskReplicaPairsResponseBody& operator=(const DescribeDiskReplicaPairsResponseBody &) = default ;
    DescribeDiskReplicaPairsResponseBody& operator=(DescribeDiskReplicaPairsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReplicaPairs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReplicaPairs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ReplicaPairs& obj) { 
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
      ReplicaPairs() = default ;
      ReplicaPairs(const ReplicaPairs &) = default ;
      ReplicaPairs(ReplicaPairs &&) = default ;
      ReplicaPairs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReplicaPairs() = default ;
      ReplicaPairs& operator=(const ReplicaPairs &) = default ;
      ReplicaPairs& operator=(ReplicaPairs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->destinationDiskId_ == nullptr && this->destinationRegion_ == nullptr
        && this->destinationZoneId_ == nullptr && this->enableRtc_ == nullptr && this->expiredTime_ == nullptr && this->lastRecoverPoint_ == nullptr && this->pairName_ == nullptr
        && this->primaryRegion_ == nullptr && this->primaryZone_ == nullptr && this->RPO_ == nullptr && this->replicaGroupId_ == nullptr && this->replicaGroupName_ == nullptr
        && this->replicaPairId_ == nullptr && this->resourceGroupId_ == nullptr && this->site_ == nullptr && this->sourceDiskId_ == nullptr && this->sourceRegion_ == nullptr
        && this->sourceZoneId_ == nullptr && this->standbyRegion_ == nullptr && this->standbyZone_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr
        && this->tags_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
      inline ReplicaPairs& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline ReplicaPairs& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ReplicaPairs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ReplicaPairs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationDiskId Field Functions 
      bool hasDestinationDiskId() const { return this->destinationDiskId_ != nullptr;};
      void deleteDestinationDiskId() { this->destinationDiskId_ = nullptr;};
      inline string getDestinationDiskId() const { DARABONBA_PTR_GET_DEFAULT(destinationDiskId_, "") };
      inline ReplicaPairs& setDestinationDiskId(string destinationDiskId) { DARABONBA_PTR_SET_VALUE(destinationDiskId_, destinationDiskId) };


      // destinationRegion Field Functions 
      bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
      void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
      inline string getDestinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
      inline ReplicaPairs& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


      // destinationZoneId Field Functions 
      bool hasDestinationZoneId() const { return this->destinationZoneId_ != nullptr;};
      void deleteDestinationZoneId() { this->destinationZoneId_ = nullptr;};
      inline string getDestinationZoneId() const { DARABONBA_PTR_GET_DEFAULT(destinationZoneId_, "") };
      inline ReplicaPairs& setDestinationZoneId(string destinationZoneId) { DARABONBA_PTR_SET_VALUE(destinationZoneId_, destinationZoneId) };


      // enableRtc Field Functions 
      bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
      void deleteEnableRtc() { this->enableRtc_ = nullptr;};
      inline bool getEnableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
      inline ReplicaPairs& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline int64_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
      inline ReplicaPairs& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // lastRecoverPoint Field Functions 
      bool hasLastRecoverPoint() const { return this->lastRecoverPoint_ != nullptr;};
      void deleteLastRecoverPoint() { this->lastRecoverPoint_ = nullptr;};
      inline int64_t getLastRecoverPoint() const { DARABONBA_PTR_GET_DEFAULT(lastRecoverPoint_, 0L) };
      inline ReplicaPairs& setLastRecoverPoint(int64_t lastRecoverPoint) { DARABONBA_PTR_SET_VALUE(lastRecoverPoint_, lastRecoverPoint) };


      // pairName Field Functions 
      bool hasPairName() const { return this->pairName_ != nullptr;};
      void deletePairName() { this->pairName_ = nullptr;};
      inline string getPairName() const { DARABONBA_PTR_GET_DEFAULT(pairName_, "") };
      inline ReplicaPairs& setPairName(string pairName) { DARABONBA_PTR_SET_VALUE(pairName_, pairName) };


      // primaryRegion Field Functions 
      bool hasPrimaryRegion() const { return this->primaryRegion_ != nullptr;};
      void deletePrimaryRegion() { this->primaryRegion_ = nullptr;};
      inline string getPrimaryRegion() const { DARABONBA_PTR_GET_DEFAULT(primaryRegion_, "") };
      inline ReplicaPairs& setPrimaryRegion(string primaryRegion) { DARABONBA_PTR_SET_VALUE(primaryRegion_, primaryRegion) };


      // primaryZone Field Functions 
      bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
      void deletePrimaryZone() { this->primaryZone_ = nullptr;};
      inline string getPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
      inline ReplicaPairs& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


      // RPO Field Functions 
      bool hasRPO() const { return this->RPO_ != nullptr;};
      void deleteRPO() { this->RPO_ = nullptr;};
      inline int64_t getRPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
      inline ReplicaPairs& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


      // replicaGroupId Field Functions 
      bool hasReplicaGroupId() const { return this->replicaGroupId_ != nullptr;};
      void deleteReplicaGroupId() { this->replicaGroupId_ = nullptr;};
      inline string getReplicaGroupId() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupId_, "") };
      inline ReplicaPairs& setReplicaGroupId(string replicaGroupId) { DARABONBA_PTR_SET_VALUE(replicaGroupId_, replicaGroupId) };


      // replicaGroupName Field Functions 
      bool hasReplicaGroupName() const { return this->replicaGroupName_ != nullptr;};
      void deleteReplicaGroupName() { this->replicaGroupName_ = nullptr;};
      inline string getReplicaGroupName() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupName_, "") };
      inline ReplicaPairs& setReplicaGroupName(string replicaGroupName) { DARABONBA_PTR_SET_VALUE(replicaGroupName_, replicaGroupName) };


      // replicaPairId Field Functions 
      bool hasReplicaPairId() const { return this->replicaPairId_ != nullptr;};
      void deleteReplicaPairId() { this->replicaPairId_ = nullptr;};
      inline string getReplicaPairId() const { DARABONBA_PTR_GET_DEFAULT(replicaPairId_, "") };
      inline ReplicaPairs& setReplicaPairId(string replicaPairId) { DARABONBA_PTR_SET_VALUE(replicaPairId_, replicaPairId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ReplicaPairs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline ReplicaPairs& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


      // sourceDiskId Field Functions 
      bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
      void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
      inline string getSourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
      inline ReplicaPairs& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


      // sourceRegion Field Functions 
      bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
      void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
      inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
      inline ReplicaPairs& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


      // sourceZoneId Field Functions 
      bool hasSourceZoneId() const { return this->sourceZoneId_ != nullptr;};
      void deleteSourceZoneId() { this->sourceZoneId_ = nullptr;};
      inline string getSourceZoneId() const { DARABONBA_PTR_GET_DEFAULT(sourceZoneId_, "") };
      inline ReplicaPairs& setSourceZoneId(string sourceZoneId) { DARABONBA_PTR_SET_VALUE(sourceZoneId_, sourceZoneId) };


      // standbyRegion Field Functions 
      bool hasStandbyRegion() const { return this->standbyRegion_ != nullptr;};
      void deleteStandbyRegion() { this->standbyRegion_ = nullptr;};
      inline string getStandbyRegion() const { DARABONBA_PTR_GET_DEFAULT(standbyRegion_, "") };
      inline ReplicaPairs& setStandbyRegion(string standbyRegion) { DARABONBA_PTR_SET_VALUE(standbyRegion_, standbyRegion) };


      // standbyZone Field Functions 
      bool hasStandbyZone() const { return this->standbyZone_ != nullptr;};
      void deleteStandbyZone() { this->standbyZone_ = nullptr;};
      inline string getStandbyZone() const { DARABONBA_PTR_GET_DEFAULT(standbyZone_, "") };
      inline ReplicaPairs& setStandbyZone(string standbyZone) { DARABONBA_PTR_SET_VALUE(standbyZone_, standbyZone) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ReplicaPairs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline ReplicaPairs& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ReplicaPairs::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ReplicaPairs::Tags>) };
      inline vector<ReplicaPairs::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ReplicaPairs::Tags>) };
      inline ReplicaPairs& setTags(const vector<ReplicaPairs::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ReplicaPairs& setTags(vector<ReplicaPairs::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The bandwidth used to asynchronously replicate data from the primary disk to the secondary disk. Unit: Kbit/s.
      shared_ptr<int64_t> bandwidth_ {};
      // The billing method of the replication pair. Valid values:
      // 
      // *   PREPAY: subscription
      // *   POSTPAY: pay-as-you-go
      shared_ptr<string> chargeType_ {};
      // The time when the replication pair was created. The value of this parameter is a timestamp. Unit: seconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the replication pair.
      shared_ptr<string> description_ {};
      // The ID of the secondary disk.
      shared_ptr<string> destinationDiskId_ {};
      // The region ID of the secondary disk.
      shared_ptr<string> destinationRegion_ {};
      // The zone ID of the secondary disk.
      shared_ptr<string> destinationZoneId_ {};
      // Whether the replication time control is enabled. If the replication pair has been added to a replication group, it is consistent with the attributes of the replication group.
      shared_ptr<bool> enableRtc_ {};
      // The time when the replication pair expires. The value of this parameter is a timestamp. Unit: seconds.
      shared_ptr<int64_t> expiredTime_ {};
      // The time when data was last replicated from the primary disk to the secondary disk in the replication pair. The value of this parameter is a timestamp. Unit: seconds. 86,400 seconds is equivalent to 24 hours.
      shared_ptr<int64_t> lastRecoverPoint_ {};
      // The name of the replication pair.
      shared_ptr<string> pairName_ {};
      // The initial source region (primary region) of the replication pair.
      shared_ptr<string> primaryRegion_ {};
      // The initial source zone (primary zone) of the replication pair.
      shared_ptr<string> primaryZone_ {};
      // The recovery point objective (RPO) of the replication pair. Unit: seconds.
      shared_ptr<int64_t> RPO_ {};
      // The ID of the replication pair-consistent group to which the replication pair belongs.
      shared_ptr<string> replicaGroupId_ {};
      // The name of the replication pair-consistent group to which the replication pair belongs.
      shared_ptr<string> replicaGroupName_ {};
      // The ID of the replication pair.
      shared_ptr<string> replicaPairId_ {};
      // The ID of the resource group to which the replication pair belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The type of the site from which the information about the replication pairs and replication pair-consistent group was obtained. Valid values:
      // 
      // *   production: primary site
      // *   backup: secondary site
      shared_ptr<string> site_ {};
      // The ID of the primary disk.
      shared_ptr<string> sourceDiskId_ {};
      // The region ID of the primary disk.
      shared_ptr<string> sourceRegion_ {};
      // The zone ID of the primary disk.
      shared_ptr<string> sourceZoneId_ {};
      // The initial destination region (secondary region) of the replication pair.
      shared_ptr<string> standbyRegion_ {};
      // The initial destination zone (secondary zone) of the replication pair.
      shared_ptr<string> standbyZone_ {};
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
      shared_ptr<string> status_ {};
      // The message that describes the state of the replication pair. This parameter has a value when `Status` has a value of invalid or `create_failed`. Valid values:
      // 
      // *   PrePayOrderExpired: The replication pair has expired.
      // *   PostPayOrderCeaseService: The pay-as-you-go replication pair has been stopped due to an overdue payment.
      // *   DeviceRemoved: The primary or secondary disk has been deleted.
      // *   DeviceKeyChanged: The `DeviceKey` mapping of the primary or secondary disk has changed.
      // *   DeviceSizeChanged: The `DeviceSize` value of the primary or secondary disk has changed.
      // *   OperationDenied.QuotaExceed: The maximum number of replication pairs that can be created has been reached.
      shared_ptr<string> statusMessage_ {};
      // The tags of the replication pair.
      shared_ptr<vector<ReplicaPairs::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->replicaPairs_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskReplicaPairsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiskReplicaPairsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiskReplicaPairsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // replicaPairs Field Functions 
    bool hasReplicaPairs() const { return this->replicaPairs_ != nullptr;};
    void deleteReplicaPairs() { this->replicaPairs_ = nullptr;};
    inline const vector<DescribeDiskReplicaPairsResponseBody::ReplicaPairs> & getReplicaPairs() const { DARABONBA_PTR_GET_CONST(replicaPairs_, vector<DescribeDiskReplicaPairsResponseBody::ReplicaPairs>) };
    inline vector<DescribeDiskReplicaPairsResponseBody::ReplicaPairs> getReplicaPairs() { DARABONBA_PTR_GET(replicaPairs_, vector<DescribeDiskReplicaPairsResponseBody::ReplicaPairs>) };
    inline DescribeDiskReplicaPairsResponseBody& setReplicaPairs(const vector<DescribeDiskReplicaPairsResponseBody::ReplicaPairs> & replicaPairs) { DARABONBA_PTR_SET_VALUE(replicaPairs_, replicaPairs) };
    inline DescribeDiskReplicaPairsResponseBody& setReplicaPairs(vector<DescribeDiskReplicaPairsResponseBody::ReplicaPairs> && replicaPairs) { DARABONBA_PTR_SET_RVALUE(replicaPairs_, replicaPairs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskReplicaPairsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskReplicaPairsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Details of the replication pairs.
    shared_ptr<vector<DescribeDiskReplicaPairsResponseBody::ReplicaPairs>> replicaPairs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
