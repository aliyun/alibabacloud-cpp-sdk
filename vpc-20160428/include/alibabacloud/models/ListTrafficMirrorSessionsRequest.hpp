// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficMirrorSessionsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionIds, trafficMirrorSessionIds_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSourceId, trafficMirrorSourceId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_TO_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionIds, trafficMirrorSessionIds_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSourceId, trafficMirrorSourceId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_FROM_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    ListTrafficMirrorSessionsRequest() = default ;
    ListTrafficMirrorSessionsRequest(const ListTrafficMirrorSessionsRequest &) = default ;
    ListTrafficMirrorSessionsRequest(ListTrafficMirrorSessionsRequest &&) = default ;
    ListTrafficMirrorSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorSessionsRequest() = default ;
    ListTrafficMirrorSessionsRequest& operator=(const ListTrafficMirrorSessionsRequest &) = default ;
    ListTrafficMirrorSessionsRequest& operator=(ListTrafficMirrorSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->priority_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tags_ != nullptr
        && this->trafficMirrorFilterId_ != nullptr && this->trafficMirrorSessionIds_ != nullptr && this->trafficMirrorSessionName_ != nullptr && this->trafficMirrorSourceId_ != nullptr && this->trafficMirrorTargetId_ != nullptr
        && this->virtualNetworkId_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListTrafficMirrorSessionsRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrafficMirrorSessionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMirrorSessionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTrafficMirrorSessionsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTrafficMirrorSessionsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListTrafficMirrorSessionsRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTrafficMirrorSessionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTrafficMirrorSessionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTrafficMirrorSessionsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTrafficMirrorSessionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTrafficMirrorSessionsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTrafficMirrorSessionsRequestTags>) };
    inline vector<ListTrafficMirrorSessionsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListTrafficMirrorSessionsRequestTags>) };
    inline ListTrafficMirrorSessionsRequest& setTags(const vector<ListTrafficMirrorSessionsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTrafficMirrorSessionsRequest& setTags(vector<ListTrafficMirrorSessionsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string trafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline ListTrafficMirrorSessionsRequest& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


    // trafficMirrorSessionIds Field Functions 
    bool hasTrafficMirrorSessionIds() const { return this->trafficMirrorSessionIds_ != nullptr;};
    void deleteTrafficMirrorSessionIds() { this->trafficMirrorSessionIds_ = nullptr;};
    inline const vector<string> & trafficMirrorSessionIds() const { DARABONBA_PTR_GET_CONST(trafficMirrorSessionIds_, vector<string>) };
    inline vector<string> trafficMirrorSessionIds() { DARABONBA_PTR_GET(trafficMirrorSessionIds_, vector<string>) };
    inline ListTrafficMirrorSessionsRequest& setTrafficMirrorSessionIds(const vector<string> & trafficMirrorSessionIds) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionIds_, trafficMirrorSessionIds) };
    inline ListTrafficMirrorSessionsRequest& setTrafficMirrorSessionIds(vector<string> && trafficMirrorSessionIds) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSessionIds_, trafficMirrorSessionIds) };


    // trafficMirrorSessionName Field Functions 
    bool hasTrafficMirrorSessionName() const { return this->trafficMirrorSessionName_ != nullptr;};
    void deleteTrafficMirrorSessionName() { this->trafficMirrorSessionName_ = nullptr;};
    inline string trafficMirrorSessionName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionName_, "") };
    inline ListTrafficMirrorSessionsRequest& setTrafficMirrorSessionName(string trafficMirrorSessionName) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionName_, trafficMirrorSessionName) };


    // trafficMirrorSourceId Field Functions 
    bool hasTrafficMirrorSourceId() const { return this->trafficMirrorSourceId_ != nullptr;};
    void deleteTrafficMirrorSourceId() { this->trafficMirrorSourceId_ = nullptr;};
    inline string trafficMirrorSourceId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSourceId_, "") };
    inline ListTrafficMirrorSessionsRequest& setTrafficMirrorSourceId(string trafficMirrorSourceId) { DARABONBA_PTR_SET_VALUE(trafficMirrorSourceId_, trafficMirrorSourceId) };


    // trafficMirrorTargetId Field Functions 
    bool hasTrafficMirrorTargetId() const { return this->trafficMirrorTargetId_ != nullptr;};
    void deleteTrafficMirrorTargetId() { this->trafficMirrorTargetId_ = nullptr;};
    inline string trafficMirrorTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetId_, "") };
    inline ListTrafficMirrorSessionsRequest& setTrafficMirrorTargetId(string trafficMirrorTargetId) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetId_, trafficMirrorTargetId) };


    // virtualNetworkId Field Functions 
    bool hasVirtualNetworkId() const { return this->virtualNetworkId_ != nullptr;};
    void deleteVirtualNetworkId() { this->virtualNetworkId_ = nullptr;};
    inline int32_t virtualNetworkId() const { DARABONBA_PTR_GET_DEFAULT(virtualNetworkId_, 0) };
    inline ListTrafficMirrorSessionsRequest& setVirtualNetworkId(int32_t virtualNetworkId) { DARABONBA_PTR_SET_VALUE(virtualNetworkId_, virtualNetworkId) };


  protected:
    // Specifies whether to enable the traffic mirror session. Valid values:
    // 
    // *   **false**: does not enable the traffic mirror session.
    // *   **true**: enables the traffic mirror session.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The maximum number of entries to return. Valid values: **1** to **100**. Default value: **10**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If this is your first query and no next queries are to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The priority of the traffic mirror session. Valid values: **1** to **32766**.
    // 
    // A smaller value indicates a higher priority. You cannot specify identical priorities for traffic mirror sessions that are created in the same region by using the same account.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the region to which the traffic mirror session belongs. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the mirrored traffic belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<vector<ListTrafficMirrorSessionsRequestTags>> tags_ = nullptr;
    // The ID of the traffic mirror filter.
    std::shared_ptr<string> trafficMirrorFilterId_ = nullptr;
    // The IDs of the traffic mirror session. The maximum value of N is 100, which indicates that you can query up to 100 traffic mirror sessions at a time.
    std::shared_ptr<vector<string>> trafficMirrorSessionIds_ = nullptr;
    // The name of the traffic mirror session.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> trafficMirrorSessionName_ = nullptr;
    // The ID of the traffic mirror source. You can specify only an elastic network interface (ENI) as the mirror source.
    std::shared_ptr<string> trafficMirrorSourceId_ = nullptr;
    // The ID of the traffic mirror destination. You can specify only an ENI or a Server Load Balancer (SLB) instance as a traffic mirror destination.
    std::shared_ptr<string> trafficMirrorTargetId_ = nullptr;
    // The VXLAN network identifier (VNI) that is used to distinguish different mirrored traffic. Valid values: **0** to **16777215**. You can use VNIs to identify mirrored traffic from different sessions at the traffic mirror destination. You can specify a custom VNI or use a random VNI that is allocated by the system. If you want the system to randomly allocate a VNI, ignore this parameter.
    std::shared_ptr<int32_t> virtualNetworkId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
