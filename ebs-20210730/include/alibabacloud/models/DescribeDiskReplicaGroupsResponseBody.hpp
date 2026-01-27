// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSRESPONSEBODY_HPP_
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
  class DescribeDiskReplicaGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReplicaGroups, replicaGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReplicaGroups, replicaGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskReplicaGroupsResponseBody() = default ;
    DescribeDiskReplicaGroupsResponseBody(const DescribeDiskReplicaGroupsResponseBody &) = default ;
    DescribeDiskReplicaGroupsResponseBody(DescribeDiskReplicaGroupsResponseBody &&) = default ;
    DescribeDiskReplicaGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaGroupsResponseBody() = default ;
    DescribeDiskReplicaGroupsResponseBody& operator=(const DescribeDiskReplicaGroupsResponseBody &) = default ;
    DescribeDiskReplicaGroupsResponseBody& operator=(DescribeDiskReplicaGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReplicaGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReplicaGroups& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ReplicaGroups& obj) { 
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
      ReplicaGroups() = default ;
      ReplicaGroups(const ReplicaGroups &) = default ;
      ReplicaGroups(ReplicaGroups &&) = default ;
      ReplicaGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReplicaGroups() = default ;
      ReplicaGroups& operator=(const ReplicaGroups &) = default ;
      ReplicaGroups& operator=(ReplicaGroups &&) = default ;
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
        // The tag key of the replication pair-consistent group.
        shared_ptr<string> tagKey_ {};
        // The tag value of the replication pair-consistent group.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->description_ == nullptr && this->destinationRegionId_ == nullptr && this->destinationZoneId_ == nullptr && this->enableRtc_ == nullptr && this->groupName_ == nullptr
        && this->lastRecoverPoint_ == nullptr && this->pairIds_ == nullptr && this->pairNumber_ == nullptr && this->primaryRegion_ == nullptr && this->primaryZone_ == nullptr
        && this->RPO_ == nullptr && this->replicaGroupId_ == nullptr && this->resourceGroupId_ == nullptr && this->site_ == nullptr && this->sourceRegionId_ == nullptr
        && this->sourceZoneId_ == nullptr && this->standbyRegion_ == nullptr && this->standbyZone_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
      inline ReplicaGroups& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ReplicaGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationRegionId Field Functions 
      bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
      void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
      inline string getDestinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
      inline ReplicaGroups& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


      // destinationZoneId Field Functions 
      bool hasDestinationZoneId() const { return this->destinationZoneId_ != nullptr;};
      void deleteDestinationZoneId() { this->destinationZoneId_ = nullptr;};
      inline string getDestinationZoneId() const { DARABONBA_PTR_GET_DEFAULT(destinationZoneId_, "") };
      inline ReplicaGroups& setDestinationZoneId(string destinationZoneId) { DARABONBA_PTR_SET_VALUE(destinationZoneId_, destinationZoneId) };


      // enableRtc Field Functions 
      bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
      void deleteEnableRtc() { this->enableRtc_ = nullptr;};
      inline bool getEnableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
      inline ReplicaGroups& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ReplicaGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // lastRecoverPoint Field Functions 
      bool hasLastRecoverPoint() const { return this->lastRecoverPoint_ != nullptr;};
      void deleteLastRecoverPoint() { this->lastRecoverPoint_ = nullptr;};
      inline int64_t getLastRecoverPoint() const { DARABONBA_PTR_GET_DEFAULT(lastRecoverPoint_, 0L) };
      inline ReplicaGroups& setLastRecoverPoint(int64_t lastRecoverPoint) { DARABONBA_PTR_SET_VALUE(lastRecoverPoint_, lastRecoverPoint) };


      // pairIds Field Functions 
      bool hasPairIds() const { return this->pairIds_ != nullptr;};
      void deletePairIds() { this->pairIds_ = nullptr;};
      inline const vector<Darabonba::Bytes> & getPairIds() const { DARABONBA_PTR_GET_CONST(pairIds_, vector<Darabonba::Bytes>) };
      inline vector<Darabonba::Bytes> getPairIds() { DARABONBA_PTR_GET(pairIds_, vector<Darabonba::Bytes>) };
      inline ReplicaGroups& setPairIds(const vector<Darabonba::Bytes> & pairIds) { DARABONBA_PTR_SET_VALUE(pairIds_, pairIds) };
      inline ReplicaGroups& setPairIds(vector<Darabonba::Bytes> && pairIds) { DARABONBA_PTR_SET_RVALUE(pairIds_, pairIds) };


      // pairNumber Field Functions 
      bool hasPairNumber() const { return this->pairNumber_ != nullptr;};
      void deletePairNumber() { this->pairNumber_ = nullptr;};
      inline int64_t getPairNumber() const { DARABONBA_PTR_GET_DEFAULT(pairNumber_, 0L) };
      inline ReplicaGroups& setPairNumber(int64_t pairNumber) { DARABONBA_PTR_SET_VALUE(pairNumber_, pairNumber) };


      // primaryRegion Field Functions 
      bool hasPrimaryRegion() const { return this->primaryRegion_ != nullptr;};
      void deletePrimaryRegion() { this->primaryRegion_ = nullptr;};
      inline string getPrimaryRegion() const { DARABONBA_PTR_GET_DEFAULT(primaryRegion_, "") };
      inline ReplicaGroups& setPrimaryRegion(string primaryRegion) { DARABONBA_PTR_SET_VALUE(primaryRegion_, primaryRegion) };


      // primaryZone Field Functions 
      bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
      void deletePrimaryZone() { this->primaryZone_ = nullptr;};
      inline string getPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
      inline ReplicaGroups& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


      // RPO Field Functions 
      bool hasRPO() const { return this->RPO_ != nullptr;};
      void deleteRPO() { this->RPO_ = nullptr;};
      inline int64_t getRPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
      inline ReplicaGroups& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


      // replicaGroupId Field Functions 
      bool hasReplicaGroupId() const { return this->replicaGroupId_ != nullptr;};
      void deleteReplicaGroupId() { this->replicaGroupId_ = nullptr;};
      inline string getReplicaGroupId() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupId_, "") };
      inline ReplicaGroups& setReplicaGroupId(string replicaGroupId) { DARABONBA_PTR_SET_VALUE(replicaGroupId_, replicaGroupId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ReplicaGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline ReplicaGroups& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


      // sourceRegionId Field Functions 
      bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
      void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
      inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
      inline ReplicaGroups& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


      // sourceZoneId Field Functions 
      bool hasSourceZoneId() const { return this->sourceZoneId_ != nullptr;};
      void deleteSourceZoneId() { this->sourceZoneId_ = nullptr;};
      inline string getSourceZoneId() const { DARABONBA_PTR_GET_DEFAULT(sourceZoneId_, "") };
      inline ReplicaGroups& setSourceZoneId(string sourceZoneId) { DARABONBA_PTR_SET_VALUE(sourceZoneId_, sourceZoneId) };


      // standbyRegion Field Functions 
      bool hasStandbyRegion() const { return this->standbyRegion_ != nullptr;};
      void deleteStandbyRegion() { this->standbyRegion_ = nullptr;};
      inline string getStandbyRegion() const { DARABONBA_PTR_GET_DEFAULT(standbyRegion_, "") };
      inline ReplicaGroups& setStandbyRegion(string standbyRegion) { DARABONBA_PTR_SET_VALUE(standbyRegion_, standbyRegion) };


      // standbyZone Field Functions 
      bool hasStandbyZone() const { return this->standbyZone_ != nullptr;};
      void deleteStandbyZone() { this->standbyZone_ = nullptr;};
      inline string getStandbyZone() const { DARABONBA_PTR_GET_DEFAULT(standbyZone_, "") };
      inline ReplicaGroups& setStandbyZone(string standbyZone) { DARABONBA_PTR_SET_VALUE(standbyZone_, standbyZone) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ReplicaGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ReplicaGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ReplicaGroups::Tags>) };
      inline vector<ReplicaGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ReplicaGroups::Tags>) };
      inline ReplicaGroups& setTags(const vector<ReplicaGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ReplicaGroups& setTags(vector<ReplicaGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The bandwidth value. Unit: Kbit/s. This parameter is not publicly available and has a system-preset value.
      shared_ptr<int64_t> bandwidth_ {};
      // The description of the replication pair-consistent group.
      shared_ptr<string> description_ {};
      // The ID of the region in which the secondary site is deployed.
      shared_ptr<string> destinationRegionId_ {};
      // The ID of the zone in which the secondary site is deployed.
      shared_ptr<string> destinationZoneId_ {};
      // Indicates whether to enable replication time control.
      shared_ptr<bool> enableRtc_ {};
      // The name of the replication pair-consistent group.
      shared_ptr<string> groupName_ {};
      // The time when data was last replicated from the primary disks to the secondary disks in the replication pair-consistent group. The value of this parameter is a timestamp. Unit: seconds.
      shared_ptr<int64_t> lastRecoverPoint_ {};
      // The IDs of replication pairs that belong to the replication pair-consistent group.
      shared_ptr<vector<Darabonba::Bytes>> pairIds_ {};
      // The number of replication pairs that belong to the replication pair-consistent group.
      shared_ptr<int64_t> pairNumber_ {};
      // The initial source region (primary region) of the replication pair-consistent group.
      shared_ptr<string> primaryRegion_ {};
      // The initial source zone (primary zone) of the replication pair-consistent group.
      shared_ptr<string> primaryZone_ {};
      // The recovery point objective (RPO) of the replication pair-consistent group. Unit: seconds.
      shared_ptr<int64_t> RPO_ {};
      // The IDs of the replication pair-consistent groups.
      shared_ptr<string> replicaGroupId_ {};
      // The ID of the resource group to which the replication pair-consistent group belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The type of the site from which the information about the replication pairs and replication pair-consistent group was obtained. Valid values:
      // 
      // *   production: primary site
      // *   backup: secondary site
      shared_ptr<string> site_ {};
      // The ID of the region in which the primary site is deployed.
      shared_ptr<string> sourceRegionId_ {};
      // The ID of the zone in which the primary site is deployed.
      shared_ptr<string> sourceZoneId_ {};
      // The initial destination region (secondary region) of the replication pair-consistent group.
      shared_ptr<string> standbyRegion_ {};
      // The initial destination zone (secondary zone) of the replication pair-consistent group.
      shared_ptr<string> standbyZone_ {};
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
      shared_ptr<string> status_ {};
      // The tags of the replication pair-consistent group.
      shared_ptr<vector<ReplicaGroups::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->replicaGroups_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskReplicaGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiskReplicaGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiskReplicaGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // replicaGroups Field Functions 
    bool hasReplicaGroups() const { return this->replicaGroups_ != nullptr;};
    void deleteReplicaGroups() { this->replicaGroups_ = nullptr;};
    inline const vector<DescribeDiskReplicaGroupsResponseBody::ReplicaGroups> & getReplicaGroups() const { DARABONBA_PTR_GET_CONST(replicaGroups_, vector<DescribeDiskReplicaGroupsResponseBody::ReplicaGroups>) };
    inline vector<DescribeDiskReplicaGroupsResponseBody::ReplicaGroups> getReplicaGroups() { DARABONBA_PTR_GET(replicaGroups_, vector<DescribeDiskReplicaGroupsResponseBody::ReplicaGroups>) };
    inline DescribeDiskReplicaGroupsResponseBody& setReplicaGroups(const vector<DescribeDiskReplicaGroupsResponseBody::ReplicaGroups> & replicaGroups) { DARABONBA_PTR_SET_VALUE(replicaGroups_, replicaGroups) };
    inline DescribeDiskReplicaGroupsResponseBody& setReplicaGroups(vector<DescribeDiskReplicaGroupsResponseBody::ReplicaGroups> && replicaGroups) { DARABONBA_PTR_SET_RVALUE(replicaGroups_, replicaGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskReplicaGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskReplicaGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The information about the replication pair-consistent groups.
    shared_ptr<vector<DescribeDiskReplicaGroupsResponseBody::ReplicaGroups>> replicaGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
