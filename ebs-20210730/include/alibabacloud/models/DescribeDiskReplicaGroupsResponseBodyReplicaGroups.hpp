// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSRESPONSEBODYREPLICAGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSRESPONSEBODYREPLICAGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskReplicaGroupsResponseBodyReplicaGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaGroupsResponseBodyReplicaGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_TO_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LastRecoverPoint, lastRecoverPoint_);
      DARABONBA_PTR_TO_JSON(PairIds, pairIds_);
      DARABONBA_PTR_TO_JSON(PairNumber, pairNumber_);
      DARABONBA_PTR_TO_JSON(PrimaryRegion, primaryRegion_);
      DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_TO_JSON(RPO, RPO_);
      DARABONBA_PTR_TO_JSON(ReplicaGroupId, replicaGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Site, site_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_TO_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_TO_JSON(StandbyRegion, standbyRegion_);
      DARABONBA_PTR_TO_JSON(StandbyZone, standbyZone_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaGroupsResponseBodyReplicaGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_FROM_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LastRecoverPoint, lastRecoverPoint_);
      DARABONBA_PTR_FROM_JSON(PairIds, pairIds_);
      DARABONBA_PTR_FROM_JSON(PairNumber, pairNumber_);
      DARABONBA_PTR_FROM_JSON(PrimaryRegion, primaryRegion_);
      DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_FROM_JSON(RPO, RPO_);
      DARABONBA_PTR_FROM_JSON(ReplicaGroupId, replicaGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_FROM_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_FROM_JSON(StandbyRegion, standbyRegion_);
      DARABONBA_PTR_FROM_JSON(StandbyZone, standbyZone_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeDiskReplicaGroupsResponseBodyReplicaGroups() = default ;
    DescribeDiskReplicaGroupsResponseBodyReplicaGroups(const DescribeDiskReplicaGroupsResponseBodyReplicaGroups &) = default ;
    DescribeDiskReplicaGroupsResponseBodyReplicaGroups(DescribeDiskReplicaGroupsResponseBodyReplicaGroups &&) = default ;
    DescribeDiskReplicaGroupsResponseBodyReplicaGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaGroupsResponseBodyReplicaGroups() = default ;
    DescribeDiskReplicaGroupsResponseBodyReplicaGroups& operator=(const DescribeDiskReplicaGroupsResponseBodyReplicaGroups &) = default ;
    DescribeDiskReplicaGroupsResponseBodyReplicaGroups& operator=(DescribeDiskReplicaGroupsResponseBodyReplicaGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->description_ == nullptr && return this->destinationRegionId_ == nullptr && return this->destinationZoneId_ == nullptr && return this->enableRtc_ == nullptr && return this->groupName_ == nullptr
        && return this->lastRecoverPoint_ == nullptr && return this->pairIds_ == nullptr && return this->pairNumber_ == nullptr && return this->primaryRegion_ == nullptr && return this->primaryZone_ == nullptr
        && return this->RPO_ == nullptr && return this->replicaGroupId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->site_ == nullptr && return this->sourceRegionId_ == nullptr
        && return this->sourceZoneId_ == nullptr && return this->standbyRegion_ == nullptr && return this->standbyZone_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // destinationZoneId Field Functions 
    bool hasDestinationZoneId() const { return this->destinationZoneId_ != nullptr;};
    void deleteDestinationZoneId() { this->destinationZoneId_ = nullptr;};
    inline string destinationZoneId() const { DARABONBA_PTR_GET_DEFAULT(destinationZoneId_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setDestinationZoneId(string destinationZoneId) { DARABONBA_PTR_SET_VALUE(destinationZoneId_, destinationZoneId) };


    // enableRtc Field Functions 
    bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
    void deleteEnableRtc() { this->enableRtc_ = nullptr;};
    inline bool enableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lastRecoverPoint Field Functions 
    bool hasLastRecoverPoint() const { return this->lastRecoverPoint_ != nullptr;};
    void deleteLastRecoverPoint() { this->lastRecoverPoint_ = nullptr;};
    inline int64_t lastRecoverPoint() const { DARABONBA_PTR_GET_DEFAULT(lastRecoverPoint_, 0L) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setLastRecoverPoint(int64_t lastRecoverPoint) { DARABONBA_PTR_SET_VALUE(lastRecoverPoint_, lastRecoverPoint) };


    // pairIds Field Functions 
    bool hasPairIds() const { return this->pairIds_ != nullptr;};
    void deletePairIds() { this->pairIds_ = nullptr;};
    inline const vector<Darabonba::Bytes> & pairIds() const { DARABONBA_PTR_GET_CONST(pairIds_, vector<Darabonba::Bytes>) };
    inline vector<Darabonba::Bytes> pairIds() { DARABONBA_PTR_GET(pairIds_, vector<Darabonba::Bytes>) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setPairIds(const vector<Darabonba::Bytes> & pairIds) { DARABONBA_PTR_SET_VALUE(pairIds_, pairIds) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setPairIds(vector<Darabonba::Bytes> && pairIds) { DARABONBA_PTR_SET_RVALUE(pairIds_, pairIds) };


    // pairNumber Field Functions 
    bool hasPairNumber() const { return this->pairNumber_ != nullptr;};
    void deletePairNumber() { this->pairNumber_ = nullptr;};
    inline int64_t pairNumber() const { DARABONBA_PTR_GET_DEFAULT(pairNumber_, 0L) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setPairNumber(int64_t pairNumber) { DARABONBA_PTR_SET_VALUE(pairNumber_, pairNumber) };


    // primaryRegion Field Functions 
    bool hasPrimaryRegion() const { return this->primaryRegion_ != nullptr;};
    void deletePrimaryRegion() { this->primaryRegion_ = nullptr;};
    inline string primaryRegion() const { DARABONBA_PTR_GET_DEFAULT(primaryRegion_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setPrimaryRegion(string primaryRegion) { DARABONBA_PTR_SET_VALUE(primaryRegion_, primaryRegion) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string primaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // RPO Field Functions 
    bool hasRPO() const { return this->RPO_ != nullptr;};
    void deleteRPO() { this->RPO_ = nullptr;};
    inline int64_t RPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


    // replicaGroupId Field Functions 
    bool hasReplicaGroupId() const { return this->replicaGroupId_ != nullptr;};
    void deleteReplicaGroupId() { this->replicaGroupId_ = nullptr;};
    inline string replicaGroupId() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupId_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setReplicaGroupId(string replicaGroupId) { DARABONBA_PTR_SET_VALUE(replicaGroupId_, replicaGroupId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string site() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // sourceZoneId Field Functions 
    bool hasSourceZoneId() const { return this->sourceZoneId_ != nullptr;};
    void deleteSourceZoneId() { this->sourceZoneId_ = nullptr;};
    inline string sourceZoneId() const { DARABONBA_PTR_GET_DEFAULT(sourceZoneId_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setSourceZoneId(string sourceZoneId) { DARABONBA_PTR_SET_VALUE(sourceZoneId_, sourceZoneId) };


    // standbyRegion Field Functions 
    bool hasStandbyRegion() const { return this->standbyRegion_ != nullptr;};
    void deleteStandbyRegion() { this->standbyRegion_ = nullptr;};
    inline string standbyRegion() const { DARABONBA_PTR_GET_DEFAULT(standbyRegion_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setStandbyRegion(string standbyRegion) { DARABONBA_PTR_SET_VALUE(standbyRegion_, standbyRegion) };


    // standbyZone Field Functions 
    bool hasStandbyZone() const { return this->standbyZone_ != nullptr;};
    void deleteStandbyZone() { this->standbyZone_ = nullptr;};
    inline string standbyZone() const { DARABONBA_PTR_GET_DEFAULT(standbyZone_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setStandbyZone(string standbyZone) { DARABONBA_PTR_SET_VALUE(standbyZone_, standbyZone) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags>) };
    inline vector<Models::DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags>) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setTags(const vector<Models::DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDiskReplicaGroupsResponseBodyReplicaGroups& setTags(vector<Models::DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The bandwidth value. Unit: Kbit/s. This parameter is not publicly available and has a system-preset value.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The description of the replication pair-consistent group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the region in which the secondary site is deployed.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // The ID of the zone in which the secondary site is deployed.
    std::shared_ptr<string> destinationZoneId_ = nullptr;
    // Indicates whether to enable replication time control.
    std::shared_ptr<bool> enableRtc_ = nullptr;
    // The name of the replication pair-consistent group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The time when data was last replicated from the primary disks to the secondary disks in the replication pair-consistent group. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> lastRecoverPoint_ = nullptr;
    // The IDs of replication pairs that belong to the replication pair-consistent group.
    std::shared_ptr<vector<Darabonba::Bytes>> pairIds_ = nullptr;
    // The number of replication pairs that belong to the replication pair-consistent group.
    std::shared_ptr<int64_t> pairNumber_ = nullptr;
    // The initial source region (primary region) of the replication pair-consistent group.
    std::shared_ptr<string> primaryRegion_ = nullptr;
    // The initial source zone (primary zone) of the replication pair-consistent group.
    std::shared_ptr<string> primaryZone_ = nullptr;
    // The recovery point objective (RPO) of the replication pair-consistent group. Unit: seconds.
    std::shared_ptr<int64_t> RPO_ = nullptr;
    // The IDs of the replication pair-consistent groups.
    std::shared_ptr<string> replicaGroupId_ = nullptr;
    // The ID of the resource group to which the replication pair-consistent group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the site from which the information about the replication pairs and replication pair-consistent group was obtained. Valid values:
    // 
    // *   production: primary site
    // *   backup: secondary site
    std::shared_ptr<string> site_ = nullptr;
    // The ID of the region in which the primary site is deployed.
    std::shared_ptr<string> sourceRegionId_ = nullptr;
    // The ID of the zone in which the primary site is deployed.
    std::shared_ptr<string> sourceZoneId_ = nullptr;
    // The initial destination region (secondary region) of the replication pair-consistent group.
    std::shared_ptr<string> standbyRegion_ = nullptr;
    // The initial destination zone (secondary zone) of the replication pair-consistent group.
    std::shared_ptr<string> standbyZone_ = nullptr;
    // The status of the replication pair-consistent group. Valid values:
    // 
    // *   invalid: The replication pair-consistent group is invalid, which indicates that abnormal replication pairs are present in the replication pair-consistent group.
    // *   creating: The replication pair-consistent group is being created.
    // *   created: The replication pair-consistent group was created.
    // *   create_failed: The replication pair-consistent group failed to be created.
    // *   manual_syncing: Data was being manually synchronized between the disks in the replication pair-consistent group. When data was being manually synchronized for the first time, the replication pair is in this state.
    // *   syncing: Data was being synchronized between the disks. When data is being asynchronously replicated from the primary disk to the secondary disk again in subsequent operations, the replication pair is in this state.
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
    // The tags of the replication pair-consistent group.
    std::shared_ptr<vector<Models::DescribeDiskReplicaGroupsResponseBodyReplicaGroupsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
